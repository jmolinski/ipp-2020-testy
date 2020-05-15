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
uuid: 246923213
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 3, 2)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_move(board, 1, 0, 2) == 0 


board351266764 = gamma_board(board)
assert board351266764 is not None
assert board351266764 == ("31.1\n"
"2123\n")
del board351266764
board351266764 = None
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 


gamma_delete(board)
