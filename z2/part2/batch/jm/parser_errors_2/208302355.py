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
uuid: 208302355
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 13)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 1 


board703131967 = gamma_board(board)
assert board703131967 is not None
assert board703131967 == ("1...\n"
".1.2\n"
"211.\n"
"1...\n")
del board703131967
board703131967 = None
assert gamma_move(board, 1, 2, 1) == 0 


board921939381 = gamma_board(board)
assert board921939381 is not None
assert board921939381 == ("1...\n"
".1.2\n"
"211.\n"
"1...\n")
del board921939381
board921939381 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_golden_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 


board258119162 = gamma_board(board)
assert board258119162 is not None
assert board258119162 == ("1...\n"
"22.2\n"
"2112\n"
"1...\n")
del board258119162
board258119162 = None
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 


gamma_delete(board)
