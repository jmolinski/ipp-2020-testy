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
uuid: 503293708
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 2, 4)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 


board790446791 = gamma_board(board)
assert board790446791 is not None
assert board790446791 == ("2.\n"
"2.\n"
"..\n"
"12\n"
"12\n")
del board790446791
board790446791 = None
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


gamma_delete(board)
