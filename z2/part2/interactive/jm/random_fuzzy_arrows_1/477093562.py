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
uuid: 477093562
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 4, 6)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_free_fields(board, 3) == 32 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 4, 3, 4) == 1 


board442319314 = gamma_board(board)
assert board442319314 is not None
assert board442319314 == (".3.1.\n"
"....4\n"
"4..4.\n"
".3.2.\n"
"...22\n"
"142.3\n"
"..11.\n")
del board442319314
board442319314 = None
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 4, 3) == 0 


board424516152 = gamma_board(board)
assert board424516152 is not None
assert board424516152 == (".321.\n"
"....4\n"
"4..4.\n"
".3.2.\n"
"...22\n"
"142.3\n"
"..11.\n")
del board424516152
board424516152 = None
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_free_fields(board, 4) == 19 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_free_fields(board, 4) == 18 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_golden_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 


board122270836 = gamma_board(board)
assert board122270836 is not None
assert board122270836 == (".321.\n"
"222.4\n"
"4.444\n"
"43223\n"
"12122\n"
"142.3\n"
"4.11.\n")
del board122270836
board122270836 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 10 


gamma_delete(board)
