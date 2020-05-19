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
uuid: 548706160
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 2, 5)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 0 


board229191028 = gamma_board(board)
assert board229191028 is not None
assert board229191028 == ("1.1.\n"
"....\n")
del board229191028
board229191028 = None
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


gamma_delete(board)
