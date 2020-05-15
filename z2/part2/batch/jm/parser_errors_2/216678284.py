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
uuid: 216678284
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 4, 2)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 


board142936062 = gamma_board(board)
assert board142936062 is not None
assert board142936062 == ("...1\n"
"....\n")
del board142936062
board142936062 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 


board382725483 = gamma_board(board)
assert board382725483 is not None
assert board382725483 == (".221\n"
"3211\n")
del board382725483
board382725483 = None


gamma_delete(board)
