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
uuid: 608920035
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 3, 3)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 0 


board758813340 = gamma_board(board)
assert board758813340 is not None
assert board758813340 == ("2.\n"
"..\n"
".1\n"
"11\n")
del board758813340
board758813340 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 


gamma_delete(board)
