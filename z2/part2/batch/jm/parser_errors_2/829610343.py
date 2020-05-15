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
uuid: 829610343
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 2, 3)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 4 


board132696191 = gamma_board(board)
assert board132696191 is not None
assert board132696191 == ("..\n"
"11\n"
"..\n"
"22\n")
del board132696191
board132696191 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


board161843882 = gamma_board(board)
assert board161843882 is not None
assert board161843882 == ("..\n"
"11\n"
"..\n"
"22\n")
del board161843882
board161843882 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 4 


gamma_delete(board)
