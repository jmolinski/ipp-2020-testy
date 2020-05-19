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
uuid: 724976698
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 3, 4)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 


board301419549 = gamma_board(board)
assert board301419549 is not None
assert board301419549 == (".1..\n"
"12..\n")
del board301419549
board301419549 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 


gamma_delete(board)
