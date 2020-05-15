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
uuid: 569129539
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 3 


board853270129 = gamma_board(board)
assert board853270129 is not None
assert board853270129 == ("..\n"
"1.\n"
"1.\n")
del board853270129
board853270129 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_free_fields(board, 4) == 0 


board456882498 = gamma_board(board)
assert board456882498 is not None
assert board456882498 == ("13\n"
"14\n"
"14\n")
del board456882498
board456882498 = None


gamma_delete(board)
