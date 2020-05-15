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
uuid: 871830860
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 3)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 


board113624433 = gamma_board(board)
assert board113624433 is not None
assert board113624433 == ("....\n"
".2..\n"
".1..\n"
".2..\n")
del board113624433
board113624433 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 3 


board392954758 = gamma_board(board)
assert board392954758 is not None
assert board392954758 == ("11.2\n"
"2222\n"
".212\n"
"12..\n")
del board392954758
board392954758 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_free_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 10 


gamma_delete(board)
