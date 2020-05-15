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
uuid: 961887018
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 3, 2)
assert board is not None


assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


board390673589 = gamma_board(board)
assert board390673589 is not None
assert board390673589 == ("12.\n"
"23.\n")
del board390673589
board390673589 = None
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_free_fields(board, 3) == 2 


gamma_delete(board)
