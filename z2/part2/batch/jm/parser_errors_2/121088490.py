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
uuid: 121088490
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 3, 4)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_free_fields(board, 2) == 10 


board666938205 = gamma_board(board)
assert board666938205 is not None
assert board666938205 == ("..1.\n"
"1...\n"
"....\n")
del board666938205
board666938205 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 1 


board871716236 = gamma_board(board)
assert board871716236 is not None
assert board871716236 == ("..1.\n"
"1...\n"
"...3\n")
del board871716236
board871716236 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 


gamma_delete(board)
