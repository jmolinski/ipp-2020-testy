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
uuid: 193497097
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 3, 5)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_free_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_golden_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 


board142535448 = gamma_board(board)
assert board142535448 is not None
assert board142535448 == ("1..\n"
".12\n"
"213\n"
"312\n")
del board142535448
board142535448 = None
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 


board838097404 = gamma_board(board)
assert board838097404 is not None
assert board838097404 == ("1..\n"
".12\n"
"213\n"
"312\n")
del board838097404
board838097404 = None
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 


board284563281 = gamma_board(board)
assert board284563281 is not None
assert board284563281 == ("11.\n"
".12\n"
"213\n"
"312\n")
del board284563281
board284563281 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 0) == 0 


board886503188 = gamma_board(board)
assert board886503188 is not None
assert board886503188 == ("11.\n"
".12\n"
"213\n"
"312\n")
del board886503188
board886503188 = None


gamma_delete(board)
