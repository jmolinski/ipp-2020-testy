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
uuid: 746587024
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 3, 1)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 0 


board139592907 = gamma_board(board)
assert board139592907 is not None
assert board139592907 == ("3.\n"
"12\n"
"12\n")
del board139592907
board139592907 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 1 


gamma_delete(board)
