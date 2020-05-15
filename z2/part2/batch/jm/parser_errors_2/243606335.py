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
uuid: 243606335
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 2, 4)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_golden_move(board, 2, 1, 3) == 0 


board909214095 = gamma_board(board)
assert board909214095 is not None
assert board909214095 == ("12211\n"
".11..\n")
del board909214095
board909214095 = None
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


gamma_delete(board)
