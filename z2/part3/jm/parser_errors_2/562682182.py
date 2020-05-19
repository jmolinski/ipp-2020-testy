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
uuid: 562682182
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 2, 6)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 0 


board504858558 = gamma_board(board)
assert board504858558 is not None
assert board504858558 == ("...\n"
"1..\n")
del board504858558
board504858558 = None
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 1 


board805383261 = gamma_board(board)
assert board805383261 is not None
assert board805383261 == ("1..\n"
"1.1\n")
del board805383261
board805383261 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 


gamma_delete(board)
