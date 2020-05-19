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
uuid: 726867293
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 3, 1)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_busy_fields(board, 2) == 2 


board853948337 = gamma_board(board)
assert board853948337 is not None
assert board853948337 == ("122.\n"
"1..3\n")
del board853948337
board853948337 = None
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 


board304217113 = gamma_board(board)
assert board304217113 is not None
assert board304217113 == ("1223\n"
"1..3\n")
del board304217113
board304217113 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 1 


gamma_delete(board)
