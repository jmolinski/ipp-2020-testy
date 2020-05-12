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
uuid: 806293855
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 6, 5, 9)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_free_fields(board, 1) == 34 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_free_fields(board, 4) == 30 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 4) == 1 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 1, 5, 4) == 1 


board472550025 = gamma_board(board)
assert board472550025 is not None
assert board472550025 == ("..3..1\n"
"..5..1\n"
"......\n"
"..2.4.\n"
"....2.\n"
"..1..1\n")
del board472550025
board472550025 = None
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 22 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_golden_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 1, 3) == 0 


board368517363 = gamma_board(board)
assert board368517363 is not None
assert board368517363 == ("3.3341\n"
"5.5..1\n"
".5.32.\n"
"422243\n"
"22.524\n"
"..15.1\n")
del board368517363
board368517363 = None
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 


board780536050 = gamma_board(board)
assert board780536050 is not None
assert board780536050 == ("333341\n"
"5.5211\n"
"35.324\n"
"422243\n"
"22.524\n"
"211531\n")
del board780536050
board780536050 = None
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 


gamma_delete(board)
