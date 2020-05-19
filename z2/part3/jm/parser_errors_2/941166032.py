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
uuid: 941166032
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 18)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 7 


board991565161 = gamma_board(board)
assert board991565161 is not None
assert board991565161 == ("21.22\n"
"..122\n"
".211.\n"
"11212\n")
del board991565161
board991565161 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_busy_fields(board, 2) == 11 


gamma_delete(board)
