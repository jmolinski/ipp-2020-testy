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
uuid: 940370889
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 3, 1)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 


board258844497 = gamma_board(board)
assert board258844497 is not None
assert board258844497 == ("1.\n"
"..\n"
"..\n"
"2.\n")
del board258844497
board258844497 = None
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 


board108728587 = gamma_board(board)
assert board108728587 is not None
assert board108728587 == ("1.\n"
"..\n"
"23\n"
"23\n")
del board108728587
board108728587 = None
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 


gamma_delete(board)
