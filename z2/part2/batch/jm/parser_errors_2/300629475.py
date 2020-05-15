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
uuid: 300629475
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 2, 8)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_free_fields(board, 2) == 9 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_free_fields(board, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 


gamma_delete(board)
