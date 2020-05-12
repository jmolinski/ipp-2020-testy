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
uuid: 847614224
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 3, 9)
assert board is not None


assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 3 


board924121183 = gamma_board(board)
assert board924121183 is not None
assert board924121183 == ("3131.1\n"
"....2.\n"
".32...\n"
"23....\n")
del board924121183
board924121183 = None
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 2) == 0 


gamma_delete(board)
