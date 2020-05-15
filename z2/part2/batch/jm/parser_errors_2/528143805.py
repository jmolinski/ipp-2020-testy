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
uuid: 528143805
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_busy_fields(board, 4) == 1 


board422227854 = gamma_board(board)
assert board422227854 is not None
assert board422227854 == ("23.1.\n"
".4...\n")
del board422227854
board422227854 = None
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_free_fields(board, 4) == 1 
assert gamma_golden_possible(board, 4) == 1 


gamma_delete(board)
