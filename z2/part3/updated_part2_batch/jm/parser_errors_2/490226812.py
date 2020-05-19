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
uuid: 490226812
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 2, 1)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 


board968077275 = gamma_board(board)
assert board968077275 is not None
assert board968077275 == ("...\n"
"...\n"
"..2\n"
"..1\n"
"...\n")
del board968077275
board968077275 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_golden_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_free_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 1, 1, 2) == 0 


board321613291 = gamma_board(board)
assert board321613291 is not None
assert board321613291 == ("...\n"
"...\n"
"221\n"
"..1\n"
"...\n")
del board321613291
board321613291 = None
assert gamma_golden_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 1 


gamma_delete(board)
