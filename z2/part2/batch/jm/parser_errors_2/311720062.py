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
uuid: 311720062
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 2, 5)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 


board814308369 = gamma_board(board)
assert board814308369 is not None
assert board814308369 == ("..\n"
"..\n"
"..\n"
"..\n"
"1.\n")
del board814308369
board814308369 = None
assert gamma_move(board, 1, 2, 1) == 0 


board995226217 = gamma_board(board)
assert board995226217 is not None
assert board995226217 == ("..\n"
"..\n"
"..\n"
"..\n"
"1.\n")
del board995226217
board995226217 = None
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 


gamma_delete(board)
