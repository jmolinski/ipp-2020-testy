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
uuid: 638489351
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 5)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 


board464883873 = gamma_board(board)
assert board464883873 is not None
assert board464883873 == (".2.1\n"
".1..\n"
".2..\n"
"2..1\n")
del board464883873
board464883873 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 1 


board821432320 = gamma_board(board)
assert board821432320 is not None
assert board821432320 == (".221\n"
"212.\n"
".2..\n"
"2221\n")
del board821432320
board821432320 = None
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_move(board, 1, 3, 1) == 1 
assert gamma_free_fields(board, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


gamma_delete(board)
