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
uuid: 603385488
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 


board944904362 = gamma_board(board)
assert board944904362 is not None
assert board944904362 == ("3.\n"
"12\n"
"..\n")
del board944904362
board944904362 = None
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 


gamma_delete(board)
