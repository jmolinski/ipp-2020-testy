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
uuid: 359320768
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 3, 3)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 


board821344211 = gamma_board(board)
assert board821344211 is not None
assert board821344211 == ("2.\n"
".2\n"
"22\n")
del board821344211
board821344211 = None


gamma_delete(board)
