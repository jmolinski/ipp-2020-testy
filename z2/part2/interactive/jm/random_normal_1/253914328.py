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
uuid: 253914328
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 4, 6, 2)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 6, 1, 2) == 1 
assert gamma_move(board, 6, 6, 3) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 7, 2) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_free_fields(board, 5) == 22 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_busy_fields(board, 6) == 2 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 6, 0, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_free_fields(board, 6) == 6 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 6, 2, 6) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 6, 0, 7) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 4, 1, 2) == 0 


gamma_delete(board)
