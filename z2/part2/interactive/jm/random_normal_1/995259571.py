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
uuid: 995259571
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 4, 6, 4)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_move(board, 6, 0, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_free_fields(board, 5) == 18 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 6, 3, 5) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 5, 1, 2) == 1 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 5, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 


board944300869 = gamma_board(board)
assert board944300869 is not None
assert board944300869 == (".122224\n"
"5564...\n"
"6553133\n"
"11223.1\n")
del board944300869
board944300869 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 6, 0) == 0 
assert gamma_move(board, 6, 6, 2) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_free_fields(board, 3) == 3 


board403833849 = gamma_board(board)
assert board403833849 is not None
assert board403833849 == ("2122224\n"
"5564..6\n"
"6553133\n"
"11223.1\n")
del board403833849
board403833849 = None
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_free_fields(board, 6) == 3 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


gamma_delete(board)
