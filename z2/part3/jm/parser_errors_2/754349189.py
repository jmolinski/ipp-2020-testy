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
uuid: 754349189
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 5)
assert board is not None


assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 1 


board192749066 = gamma_board(board)
assert board192749066 is not None
assert board192749066 == ("....2\n"
".3...\n"
"4....\n")
del board192749066
board192749066 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 9 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_golden_move(board, 3, 2, 1) == 0 


board613707696 = gamma_board(board)
assert board613707696 is not None
assert board613707696 == ("223.2\n"
".333.\n"
"4212.\n")
del board613707696
board613707696 = None
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 0 


board565743822 = gamma_board(board)
assert board565743822 is not None
assert board565743822 == ("223.2\n"
".333.\n"
"42122\n")
del board565743822
board565743822 = None
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 


gamma_delete(board)
