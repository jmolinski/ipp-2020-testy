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
uuid: 768633991
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 4, 2)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 


board734866711 = gamma_board(board)
assert board734866711 is not None
assert board734866711 == ("134\n"
"232\n")
del board734866711
board734866711 = None
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_busy_fields(board, 4) == 1 


gamma_delete(board)
