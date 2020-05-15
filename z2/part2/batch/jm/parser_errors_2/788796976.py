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
uuid: 788796976
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 5)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 1 


board535480128 = gamma_board(board)
assert board535480128 is not None
assert board535480128 == ("1..\n"
"...\n"
"...\n"
"...\n"
"...\n")
del board535480128
board535480128 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_free_fields(board, 3) == 3 


board745238701 = gamma_board(board)
assert board745238701 is not None
assert board745238701 == ("12.\n"
"323\n"
"3.4\n"
"342\n"
"21.\n")
del board745238701
board745238701 = None
assert gamma_move(board, 4, 0, 1) == 0 


board210815408 = gamma_board(board)
assert board210815408 is not None
assert board210815408 == ("12.\n"
"323\n"
"3.4\n"
"342\n"
"21.\n")
del board210815408
board210815408 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
