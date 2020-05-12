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
uuid: 634331205
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 5, 4)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 5, 1, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 


board873591731 = gamma_board(board)
assert board873591731 is not None
assert board873591731 == ("3223\n"
"154.\n"
".252\n"
"54.1\n")
del board873591731
board873591731 = None


board286404955 = gamma_board(board)
assert board286404955 is not None
assert board286404955 == ("3223\n"
"154.\n"
".252\n"
"54.1\n")
del board286404955
board286404955 = None
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 


board744072559 = gamma_board(board)
assert board744072559 is not None
assert board744072559 == ("3223\n"
"154.\n"
"1252\n"
"5441\n")
del board744072559
board744072559 = None
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_move(board, 2, 2, 2) == 1 


gamma_delete(board)
