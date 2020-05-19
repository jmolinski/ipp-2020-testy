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
uuid: 951817388
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 0, 0) == 0 


board317384463 = gamma_board(board)
assert board317384463 is not None
assert board317384463 == ("21..\n"
"...4\n"
"..34\n")
del board317384463
board317384463 = None
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 0 


gamma_delete(board)
