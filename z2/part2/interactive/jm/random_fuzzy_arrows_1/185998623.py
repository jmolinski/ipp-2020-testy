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
uuid: 185998623
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 5, 5)
assert board is not None


assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_free_fields(board, 4) == 30 
assert gamma_golden_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 1, 6, 4) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_move(board, 3, 4, 1) == 1 


board756529204 = gamma_board(board)
assert board756529204 is not None
assert board756529204 == (".4....1\n"
"....1..\n"
"...2...\n"
"....3..\n"
"..521..\n")
del board756529204
board756529204 = None
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_free_fields(board, 4) == 26 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 5, 2, 4) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 5, 6, 3) == 1 
assert gamma_free_fields(board, 5) == 18 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 6, 1) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_golden_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_golden_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 0, 5) == 0 


board503060765 = gamma_board(board)
assert board503060765 is not None
assert board503060765 == ("4453141\n"
"4413115\n"
"434224.\n"
".31.3.5\n"
"45521.3\n")
del board503060765
board503060765 = None
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 6, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 


gamma_delete(board)
