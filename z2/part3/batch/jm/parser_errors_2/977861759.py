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
uuid: 977861759
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 3, 4)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 0 


board950475062 = gamma_board(board)
assert board950475062 is not None
assert board950475062 == ("3222\n"
"2113\n"
"..1.\n")
del board950475062
board950475062 = None
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 0 


board650356502 = gamma_board(board)
assert board650356502 is not None
assert board650356502 == ("3222\n"
"2113\n"
"2.1.\n")
del board650356502
board650356502 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 


gamma_delete(board)
