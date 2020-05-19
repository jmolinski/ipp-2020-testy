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
uuid: 878160624
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 3)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_golden_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 


board977083069 = gamma_board(board)
assert board977083069 is not None
assert board977083069 == ("3.1.2\n"
"1.3.1\n"
".3...\n")
del board977083069
board977083069 = None
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 


board564887413 = gamma_board(board)
assert board564887413 is not None
assert board564887413 == ("311.2\n"
"12311\n"
"33...\n")
del board564887413
board564887413 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 


gamma_delete(board)
