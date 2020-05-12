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
uuid: 946790979
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 6, 4)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 0, 6) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_free_fields(board, 3) == 24 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_free_fields(board, 4) == 22 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 6, 4, 4) == 1 
assert gamma_move(board, 6, 1, 0) == 1 
assert gamma_free_fields(board, 6) == 19 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 1, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 6, 4, 0) == 1 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 4, 5) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_golden_move(board, 6, 6, 2) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 2, 6) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 4) == 0 


board159991877 = gamma_board(board)
assert board159991877 is not None
assert board159991877 == ("61443\n"
"414.6\n"
"223.6\n"
"..221\n"
"2141.\n"
"3145.\n"
"56.46\n")
del board159991877
board159991877 = None
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 4) == 0 


gamma_delete(board)
