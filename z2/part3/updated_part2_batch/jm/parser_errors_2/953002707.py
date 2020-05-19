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
uuid: 953002707
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 


board754857127 = gamma_board(board)
assert board754857127 is not None
assert board754857127 == (".2.\n"
"11.\n"
"...\n")
del board754857127
board754857127 = None
assert gamma_busy_fields(board, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_free_fields(board, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 


board996898973 = gamma_board(board)
assert board996898973 is not None
assert board996898973 == (".22\n"
"11.\n"
"443\n")
del board996898973
board996898973 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 


gamma_delete(board)
