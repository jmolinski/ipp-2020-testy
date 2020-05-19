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
uuid: 973803642
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 2 


board558587448 = gamma_board(board)
assert board558587448 is not None
assert board558587448 == (".21..\n"
"41..2\n")
del board558587448
board558587448 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 1 


gamma_delete(board)
