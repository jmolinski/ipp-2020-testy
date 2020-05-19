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
uuid: 414684752
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 2, 2, 1)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 


gamma_delete(board)
