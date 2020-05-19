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
uuid: 947692596
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 4)
assert board is not None


assert gamma_free_fields(board, 1) == 15 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 


board580530901 = gamma_board(board)
assert board580530901 is not None
assert board580530901 == ("..2\n"
"...\n"
"23.\n"
"121\n"
"3..\n")
del board580530901
board580530901 = None
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 


board776602512 = gamma_board(board)
assert board776602512 is not None
assert board776602512 == ("..2\n"
"31.\n"
"231\n"
"121\n"
"3..\n")
del board776602512
board776602512 = None
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_golden_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 4 


board171834483 = gamma_board(board)
assert board171834483 is not None
assert board171834483 == ("1.2\n"
"31.\n"
"231\n"
"121\n"
"3..\n")
del board171834483
board171834483 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 


gamma_delete(board)
