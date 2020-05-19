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
uuid: 572207496
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 3, 4)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 4, 0) == 0 


board311690076 = gamma_board(board)
assert board311690076 is not None
assert board311690076 == (".13.\n"
"3113\n"
".22.\n"
"21.1\n"
"23..\n")
del board311690076
board311690076 = None
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_free_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_golden_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 4) == 0 


board497053211 = gamma_board(board)
assert board497053211 is not None
assert board497053211 == ("213.\n"
"3113\n"
"2223\n"
"21.1\n"
"2311\n")
del board497053211
board497053211 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 


gamma_delete(board)
