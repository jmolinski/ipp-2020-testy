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
uuid: 202972000
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 10)
assert board is not None


assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_free_fields(board, 2) == 24 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 19 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_free_fields(board, 1) == 16 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 1 


board627339973 = gamma_board(board)
assert board627339973 is not None
assert board627339973 == (".2.1.\n"
"2.3..\n"
"31...\n"
"1.132\n"
"311.2\n")
del board627339973
board627339973 = None
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_golden_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 0 


board172176651 = gamma_board(board)
assert board172176651 is not None
assert board172176651 == ("22311\n"
"2.33.\n"
"3121.\n"
"21132\n"
"311.2\n")
del board172176651
board172176651 = None
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


gamma_delete(board)
