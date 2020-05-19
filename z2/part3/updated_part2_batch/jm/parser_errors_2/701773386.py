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
uuid: 701773386
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 2, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 


board299111102 = gamma_board(board)
assert board299111102 is not None
assert board299111102 == ("..\n"
"21\n"
"..\n")
del board299111102
board299111102 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 


board497048836 = gamma_board(board)
assert board497048836 is not None
assert board497048836 == ("..\n"
"21\n"
"11\n")
del board497048836
board497048836 = None
assert gamma_move(board, 2, 0, 2) == 1 


gamma_delete(board)
