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
uuid: 570493212
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 4, 1)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 


board608212382 = gamma_board(board)
assert board608212382 is not None
assert board608212382 == ("2.1.\n"
"24..\n"
"34..\n"
"33..\n"
"....\n")
del board608212382
board608212382 = None
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_free_fields(board, 4) == 4 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 


board244071967 = gamma_board(board)
assert board244071967 is not None
assert board244071967 == ("2.1.\n"
"24..\n"
"344.\n"
"33..\n"
"....\n")
del board244071967
board244071967 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_busy_fields(board, 4) == 3 


board901577377 = gamma_board(board)
assert board901577377 is not None
assert board901577377 == ("2.1.\n"
"24..\n"
"344.\n"
"33..\n"
"....\n")
del board901577377
board901577377 = None
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 2, 4) == 0 


gamma_delete(board)
