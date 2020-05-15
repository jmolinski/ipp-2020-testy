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
uuid: 269298945
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 6)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 


board638769248 = gamma_board(board)
assert board638769248 is not None
assert board638769248 == (".1...\n"
"..2..\n"
"2....\n"
".....\n")
del board638769248
board638769248 = None
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


board671028753 = gamma_board(board)
assert board671028753 is not None
assert board671028753 == ("11221\n"
"111.2\n"
"2...2\n"
"1.1.1\n")
del board671028753
board671028753 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 0, 1) == 0 


gamma_delete(board)
