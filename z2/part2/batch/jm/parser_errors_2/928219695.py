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
uuid: 928219695
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 3, 2)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 


board942680089 = gamma_board(board)
assert board942680089 is not None
assert board942680089 == ("1213\n"
"32.2\n")
del board942680089
board942680089 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 


board851229750 = gamma_board(board)
assert board851229750 is not None
assert board851229750 == ("1213\n"
"32.2\n")
del board851229750
board851229750 = None


gamma_delete(board)
