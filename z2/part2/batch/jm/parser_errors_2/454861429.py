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
uuid: 454861429
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 4, 3)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 


board844193210 = gamma_board(board)
assert board844193210 is not None
assert board844193210 == (".1\n"
"..\n"
"..\n"
"1.\n"
"..\n")
del board844193210
board844193210 = None
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 1 


board685092862 = gamma_board(board)
assert board685092862 is not None
assert board685092862 == (".1\n"
".2\n"
"..\n"
"1.\n"
"..\n")
del board685092862
board685092862 = None
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_free_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 0, 2) == 1 


board999757095 = gamma_board(board)
assert board999757095 is not None
assert board999757095 == (".1\n"
".2\n"
"43\n"
"11\n"
"4.\n")
del board999757095
board999757095 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 


board551909826 = gamma_board(board)
assert board551909826 is not None
assert board551909826 == (".1\n"
".2\n"
"43\n"
"11\n"
"4.\n")
del board551909826
board551909826 = None
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 


board769064630 = gamma_board(board)
assert board769064630 is not None
assert board769064630 == (".1\n"
".2\n"
"43\n"
"11\n"
"4.\n")
del board769064630
board769064630 = None
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 


gamma_delete(board)
