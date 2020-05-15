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
uuid: 101032623
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 2, 3)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 


board800795293 = gamma_board(board)
assert board800795293 is not None
assert board800795293 == ("1.\n"
".1\n"
"22\n")
del board800795293
board800795293 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 


board868257597 = gamma_board(board)
assert board868257597 is not None
assert board868257597 == ("1.\n"
".1\n"
"22\n")
del board868257597
board868257597 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 


board272709497 = gamma_board(board)
assert board272709497 is not None
assert board272709497 == ("1.\n"
".1\n"
"22\n")
del board272709497
board272709497 = None
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_free_fields(board, 1) == 1 


board769041695 = gamma_board(board)
assert board769041695 is not None
assert board769041695 == ("11\n"
".1\n"
"22\n")
del board769041695
board769041695 = None


gamma_delete(board)
