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
uuid: 657313162
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 3)
assert board is not None


assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_busy_fields(board, 2) == 2 


board601264094 = gamma_board(board)
assert board601264094 is not None
assert board601264094 == (".2.\n"
"...\n"
"...\n"
"...\n"
"..2\n")
del board601264094
board601264094 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 


board955316679 = gamma_board(board)
assert board955316679 is not None
assert board955316679 == ("221\n"
"133\n"
"211\n"
"233\n"
"332\n")
del board955316679
board955316679 = None


gamma_delete(board)
