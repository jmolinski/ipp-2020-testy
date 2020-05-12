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
uuid: 595087228
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 8, 3, 11)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 0 


board627410077 = gamma_board(board)
assert board627410077 is not None
assert board627410077 == ("..2.\n"
"...2\n"
"....\n"
".1..\n"
"3...\n"
"..1.\n"
"12.3\n"
"2...\n")
del board627410077
board627410077 = None
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_free_fields(board, 2) == 19 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_free_fields(board, 2) == 19 


board170585573 = gamma_board(board)
assert board170585573 is not None
assert board170585573 == ("..2.\n"
".2.2\n"
"..1.\n"
".1.1\n"
"3...\n"
"..1.\n"
"1233\n"
"2...\n")
del board170585573
board170585573 = None
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_free_fields(board, 2) == 14 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 1, 7) == 1 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_golden_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_golden_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_move(board, 3, 4, 2) == 0 


board479818647 = gamma_board(board)
assert board479818647 is not None
assert board479818647 == ("3322\n"
".212\n"
"2211\n"
"1121\n"
"31.2\n"
"3.12\n"
"1233\n"
"2123\n")
del board479818647
board479818647 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 6) == 0 


gamma_delete(board)
