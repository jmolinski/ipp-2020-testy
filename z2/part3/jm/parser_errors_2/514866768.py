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
uuid: 514866768
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 15)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 


board741169294 = gamma_board(board)
assert board741169294 is not None
assert board741169294 == ("....\n"
".1..\n"
".1..\n"
"2.2.\n")
del board741169294
board741169294 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 10 


board561860607 = gamma_board(board)
assert board561860607 is not None
assert board561860607 == ("1...\n"
".12.\n"
".1..\n"
"2.2.\n")
del board561860607
board561860607 = None
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 


board294704751 = gamma_board(board)
assert board294704751 is not None
assert board294704751 == ("11.2\n"
".121\n"
"11.1\n"
"2222\n")
del board294704751
board294704751 = None
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


gamma_delete(board)
