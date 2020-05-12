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
uuid: 503022907
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 5, 7)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_free_fields(board, 1) == 34 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 4) == 0 


board582976567 = gamma_board(board)
assert board582976567 is not None
assert board582976567 == (".....\n"
".....\n"
".3.1.\n"
".1...\n"
"...4.\n"
".....\n"
".1...\n")
del board582976567
board582976567 = None
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_free_fields(board, 3) == 29 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_free_fields(board, 4) == 22 
assert gamma_move(board, 5, 4, 6) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 0, 6) == 1 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 5, 3, 6) == 0 


gamma_delete(board)
