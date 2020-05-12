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
uuid: 262324511
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 3, 10)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_free_fields(board, 3) == 25 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_golden_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_free_fields(board, 1) == 22 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 1 


board654962646 = gamma_board(board)
assert board654962646 is not None
assert board654962646 == ("3313\n"
"2.13\n"
"2.2.\n"
"1.32\n"
"...3\n"
".212\n"
"323.\n")
del board654962646
board654962646 = None
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 


board996402916 = gamma_board(board)
assert board996402916 is not None
assert board996402916 == ("3313\n"
"2.13\n"
"2.2.\n"
"1132\n"
"...3\n"
".212\n"
"323.\n")
del board996402916
board996402916 = None
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


gamma_delete(board)
