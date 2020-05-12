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
uuid: 351675445
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 6, 4)
assert board is not None


assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 5, 2, 4) == 1 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 6, 3, 2) == 1 


board774608998 = gamma_board(board)
assert board774608998 is not None
assert board774608998 == ("125..2.\n"
".....4.\n"
"..36...\n"
".54....\n"
"5.3....\n")
del board774608998
board774608998 = None
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 6, 4, 1) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 6, 0) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_golden_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 


board235083343 = gamma_board(board)
assert board235083343 is not None
assert board235083343 == ("1255.2.\n"
"...534.\n"
"..36...\n"
".5436..\n"
"5431..4\n")
del board235083343
board235083343 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_golden_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_free_fields(board, 4) == 4 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_golden_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_golden_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 5, 1) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 6, 4, 4) == 1 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_golden_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 6, 4) == 1 


board101723952 = gamma_board(board)
assert board101723952 is not None
assert board101723952 == ("1255621\n"
"...534.\n"
"..36.4.\n"
".54365.\n"
"5431..4\n")
del board101723952
board101723952 = None
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 5, 4) == 0 


board609442720 = gamma_board(board)
assert board609442720 is not None
assert board609442720 == ("1255621\n"
"...534.\n"
"..36.4.\n"
".54365.\n"
"5431..4\n")
del board609442720
board609442720 = None
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_golden_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 1, 6) == 0 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_golden_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 6, 4, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 0 


gamma_delete(board)
