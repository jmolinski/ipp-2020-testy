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
uuid: 695731910
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 3, 2)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_golden_move(board, 2, 2, 1) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 


board342070604 = gamma_board(board)
assert board342070604 is not None
assert board342070604 == (".1\n"
".1\n"
"1.\n"
"..\n")
del board342070604
board342070604 = None
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 


board337043784 = gamma_board(board)
assert board337043784 is not None
assert board337043784 == ("11\n"
"11\n"
"21\n"
"23\n")
del board337043784
board337043784 = None


gamma_delete(board)
