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
uuid: 456661503
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 5)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 


board472885575 = gamma_board(board)
assert board472885575 is not None
assert board472885575 == (".1...\n"
".1...\n"
".222.\n"
"2.11.\n")
del board472885575
board472885575 = None
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 0 


board732490143 = gamma_board(board)
assert board732490143 is not None
assert board732490143 == (".1...\n"
".12..\n"
".222.\n"
"2.11.\n")
del board732490143
board732490143 = None
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 


board873075666 = gamma_board(board)
assert board873075666 is not None
assert board873075666 == (".1..2\n"
"212..\n"
".222.\n"
"2111.\n")
del board873075666
board873075666 = None
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


board306912193 = gamma_board(board)
assert board306912193 is not None
assert board306912193 == (".1112\n"
"2121.\n"
".222.\n"
"2111.\n")
del board306912193
board306912193 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 


gamma_delete(board)
