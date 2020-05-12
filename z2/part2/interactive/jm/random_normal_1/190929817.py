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
uuid: 190929817
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 6, 3)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 6, 5, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_free_fields(board, 1) == 24 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_free_fields(board, 5) == 17 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_golden_possible(board, 3) == 1 


board475635508 = gamma_board(board)
assert board475635508 is not None
assert board475635508 == ("....\n"
".3..\n"
"5..3\n"
".126\n"
"..32\n"
".4.1\n"
".145\n")
del board475635508
board475635508 = None
assert gamma_golden_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 6, 1, 2) == 1 
assert gamma_move(board, 6, 3, 5) == 1 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_golden_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_golden_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_free_fields(board, 6) == 3 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 5, 2) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 0) == 0 


gamma_delete(board)
