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
uuid: 750904181
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 3, 3)
assert board is not None




board720304215 = gamma_board(board)
assert board720304215 is not None
assert board720304215 == (".....\n"
".....\n")
del board720304215
board720304215 = None
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 4) == 0 


board122247365 = gamma_board(board)
assert board122247365 is not None
assert board122247365 == ("31.2.\n"
"32.1.\n")
del board122247365
board122247365 = None


gamma_delete(board)
