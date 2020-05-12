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
uuid: 382468263
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 11)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 3, 2) == 1 


board953601058 = gamma_board(board)
assert board953601058 is not None
assert board953601058 == (".2113\n"
"12221\n"
"11313\n"
"13..2\n"
"1..31\n")
del board953601058
board953601058 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 


board675668197 = gamma_board(board)
assert board675668197 is not None
assert board675668197 == (".2113\n"
"12221\n"
"11313\n"
"133.2\n"
"1..31\n")
del board675668197
board675668197 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 


gamma_delete(board)
