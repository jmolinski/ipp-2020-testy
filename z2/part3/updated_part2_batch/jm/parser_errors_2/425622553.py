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
uuid: 425622553
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 7)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 13 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 


board424270140 = gamma_board(board)
assert board424270140 is not None
assert board424270140 == ("1211\n"
"..2.\n"
"..2.\n"
"11..\n")
del board424270140
board424270140 = None
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 


board885784383 = gamma_board(board)
assert board885784383 is not None
assert board885784383 == ("1211\n"
".222\n"
"222.\n"
"111.\n")
del board885784383
board885784383 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 0) == 0 


gamma_delete(board)
