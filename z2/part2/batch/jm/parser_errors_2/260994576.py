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
uuid: 260994576
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 3, 2)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 


board315421578 = gamma_board(board)
assert board315421578 is not None
assert board315421578 == ("..\n"
"1.\n"
".2\n"
".2\n")
del board315421578
board315421578 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 1 


gamma_delete(board)
