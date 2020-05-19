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
uuid: 415571948
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 4, 3)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 


board812237572 = gamma_board(board)
assert board812237572 is not None
assert board812237572 == ("213\n"
".12\n"
"232\n")
del board812237572
board812237572 = None
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 


gamma_delete(board)
