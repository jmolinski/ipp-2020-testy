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
uuid: 296088821
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 4, 3)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 0) == 1 


board227175060 = gamma_board(board)
assert board227175060 is not None
assert board227175060 == ("1....\n"
"32...\n")
del board227175060
board227175060 = None
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 


gamma_delete(board)
