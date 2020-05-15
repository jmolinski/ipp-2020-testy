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
uuid: 161199293
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 2)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 


board774212727 = gamma_board(board)
assert board774212727 is not None
assert board774212727 == ("2....\n"
"3....\n"
"13.1.\n")
del board774212727
board774212727 = None
assert gamma_move(board, 2, 2, 1) == 1 


board193456049 = gamma_board(board)
assert board193456049 is not None
assert board193456049 == ("2....\n"
"3.2..\n"
"13.1.\n")
del board193456049
board193456049 = None
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 


board425355107 = gamma_board(board)
assert board425355107 is not None
assert board425355107 == ("2....\n"
"1.21.\n"
"13.1.\n")
del board425355107
board425355107 = None
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 5 


gamma_delete(board)
