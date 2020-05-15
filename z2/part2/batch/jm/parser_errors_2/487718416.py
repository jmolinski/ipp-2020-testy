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
uuid: 487718416
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 4, 4)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_golden_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 


board613782184 = gamma_board(board)
assert board613782184 is not None
assert board613782184 == (".23.\n"
"24.1\n"
"1214\n")
del board613782184
board613782184 = None
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 0) == 0 


board981790998 = gamma_board(board)
assert board981790998 is not None
assert board981790998 == (".23.\n"
"24.1\n"
"1214\n")
del board981790998
board981790998 = None
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_golden_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_golden_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_golden_move(board, 4, 2, 0) == 0 


gamma_delete(board)
