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
uuid: 584648757
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 3, 17)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_free_fields(board, 1) == 43 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 2, 7) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 30 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 28 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 1, 7) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_free_fields(board, 3) == 23 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 21 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_free_fields(board, 3) == 15 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 3, 5, 7) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 5, 6) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 


board235185295 = gamma_board(board)
assert board235185295 is not None
assert board235185295 == ("221..3\n"
"232.32\n"
"123.12\n"
"323113\n"
"211213\n"
"212132\n"
".2.331\n"
".13.32\n")
del board235185295
board235185295 = None
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 7) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 5, 3) == 0 


board112906211 = gamma_board(board)
assert board112906211 is not None
assert board112906211 == ("2211.3\n"
"232.32\n"
"123.12\n"
"323113\n"
"211213\n"
"212132\n"
".2.331\n"
"313.32\n")
del board112906211
board112906211 = None
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_golden_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_busy_fields(board, 2) == 15 
assert gamma_move(board, 3, 2, 0) == 0 


gamma_delete(board)
