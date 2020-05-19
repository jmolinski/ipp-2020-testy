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
uuid: 505614550
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 1)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 


board223267043 = gamma_board(board)
assert board223267043 is not None
assert board223267043 == ("....\n"
"....\n"
"....\n"
"11.2\n")
del board223267043
board223267043 = None
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 1, 2) == 0 


board194083609 = gamma_board(board)
assert board194083609 is not None
assert board194083609 == ("..2.\n"
".222\n"
"1..2\n"
"11.2\n")
del board194083609
board194083609 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 


gamma_delete(board)
