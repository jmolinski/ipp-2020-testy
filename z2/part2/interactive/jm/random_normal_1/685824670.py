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
uuid: 685824670
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 5)
assert board is not None


assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_golden_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 


board848145946 = gamma_board(board)
assert board848145946 is not None
assert board848145946 == ("13321\n"
"21132\n"
"41242\n"
"444..\n")
del board848145946
board848145946 = None


gamma_delete(board)
