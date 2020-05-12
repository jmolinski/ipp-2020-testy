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
uuid: 814592006
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 4, 4)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 46 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_free_fields(board, 1) == 44 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_free_fields(board, 1) == 39 
assert gamma_move(board, 2, 5, 7) == 1 
assert gamma_move(board, 3, 2, 6) == 1 
assert gamma_free_fields(board, 3) == 37 
assert gamma_golden_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 4, 1, 7) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_golden_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 2, 7) == 1 
assert gamma_move(board, 4, 1, 3) == 0 


board414150930 = gamma_board(board)
assert board414150930 is not None
assert board414150930 == (".43..2\n"
"333...\n"
"3.4.22\n"
".33112\n"
".2.311\n"
"21131.\n"
"44...1\n"
"14.443\n")
del board414150930
board414150930 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 7, 0) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_golden_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_busy_fields(board, 4) == 7 


gamma_delete(board)
