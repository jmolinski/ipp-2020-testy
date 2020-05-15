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
uuid: 835651706
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 2, 5)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 


board236796472 = gamma_board(board)
assert board236796472 is not None
assert board236796472 == ("11.12\n"
"2212.\n")
del board236796472
board236796472 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 


board792493378 = gamma_board(board)
assert board792493378 is not None
assert board792493378 == ("11.12\n"
"22121\n")
del board792493378
board792493378 = None


gamma_delete(board)
