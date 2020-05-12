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
uuid: 420943077
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 5, 7)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_golden_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 1, 7) == 1 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 7, 0) == 0 


board853446529 = gamma_board(board)
assert board853446529 is not None
assert board853446529 == (".4...\n"
".3...\n"
"....1\n"
"....2\n"
"3..3.\n"
"5..1.\n"
".....\n"
".....\n")
del board853446529
board853446529 = None
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_free_fields(board, 3) == 32 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 0, 7) == 1 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 5, 1, 2) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 3, 2, 7) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_free_fields(board, 3) == 17 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


board810078481 = gamma_board(board)
assert board810078481 is not None
assert board810078481 == ("443..\n"
".3.4.\n"
"3.241\n"
"..2.2\n"
"35.3.\n"
"55411\n"
".5..1\n"
"32..5\n")
del board810078481
board810078481 = None
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_free_fields(board, 4) == 13 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 4, 6) == 1 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 3, 7) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_busy_fields(board, 5) == 7 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 5, 4, 2) == 0 


board407353310 = gamma_board(board)
assert board407353310 is not None
assert board407353310 == ("4431.\n"
".3.45\n"
"34241\n"
"4.252\n"
"35433\n"
"55411\n"
"35241\n"
"32315\n")
del board407353310
board407353310 = None
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 5, 7, 4) == 0 


gamma_delete(board)
