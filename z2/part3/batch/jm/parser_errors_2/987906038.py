from part1 import (
    gamma_board,
    gamma_busy_fields,
    gamma_delete,
    gamma_free_fields,
    gamma_golden_move,
    gamma_golden_possible,
    gamma_move,
    gamma_new,
)

"""
scenario: test_random_actions
uuid: 987906038
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 2)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_free_fields(board, 1) == 7 


board807864450 = gamma_board(board)
assert board807864450 is not None
assert board807864450 == ("....\n"
"1...\n"
"..1.\n"
"....\n")
del board807864450
board807864450 = None
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 4 


board765534971 = gamma_board(board)
assert board765534971 is not None
assert board765534971 == ("3..2\n"
"1...\n"
"..14\n"
".3.2\n")
del board765534971
board765534971 = None
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 


board482736597 = gamma_board(board)
assert board482736597 is not None
assert board482736597 == ("33.2\n"
"11..\n"
"4414\n"
"33.2\n")
del board482736597
board482736597 = None
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_busy_fields(board, 4) == 3 


gamma_delete(board)
