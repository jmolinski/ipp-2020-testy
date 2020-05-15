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
uuid: 944073078
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 2, 6)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


board683182606 = gamma_board(board)
assert board683182606 is not None
assert board683182606 == ("212\n"
"2.1\n")
del board683182606
board683182606 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 4 


gamma_delete(board)
