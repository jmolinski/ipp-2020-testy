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
uuid: 919630675
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 3, 3)
assert board is not None


assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_free_fields(board, 2) == 2 


board775206971 = gamma_board(board)
assert board775206971 is not None
assert board775206971 == ("232\n"
"2..\n")
del board775206971
board775206971 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 1 


gamma_delete(board)
