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
uuid: 852798032
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 2, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 


board523844757 = gamma_board(board)
assert board523844757 is not None
assert board523844757 == ("..\n"
"..\n"
"22\n"
".1\n"
".1\n")
del board523844757
board523844757 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 


board635245056 = gamma_board(board)
assert board635245056 is not None
assert board635245056 == ("..\n"
"..\n"
"22\n"
".1\n"
".1\n")
del board635245056
board635245056 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 


gamma_delete(board)
