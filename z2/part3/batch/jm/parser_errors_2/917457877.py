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
uuid: 917457877
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 3)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_move(board, 2, 0, 2) == 0 


board934774646 = gamma_board(board)
assert board934774646 is not None
assert board934774646 == (".3...\n"
"22...\n"
"..1..\n")
del board934774646
board934774646 = None
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 


board845718280 = gamma_board(board)
assert board845718280 is not None
assert board845718280 == (".3...\n"
"22...\n"
"..13.\n")
del board845718280
board845718280 = None
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 


board676676402 = gamma_board(board)
assert board676676402 is not None
assert board676676402 == (".3...\n"
"224..\n"
"4.13.\n")
del board676676402
board676676402 = None
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_free_fields(board, 4) == 7 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 


gamma_delete(board)
