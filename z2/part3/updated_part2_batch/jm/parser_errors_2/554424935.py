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
uuid: 554424935
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 2, 6)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 1, 1) == 0 


board409498452 = gamma_board(board)
assert board409498452 is not None
assert board409498452 == ("1..\n"
"221\n"
"221\n"
".2.\n"
"12.\n")
del board409498452
board409498452 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 7 


gamma_delete(board)
