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
uuid: 468313305
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 2) == 0 


board506386241 = gamma_board(board)
assert board506386241 is not None
assert board506386241 == ("122\n"
"...\n"
"44.\n")
del board506386241
board506386241 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 


gamma_delete(board)
