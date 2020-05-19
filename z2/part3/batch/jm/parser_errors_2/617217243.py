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
uuid: 617217243
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 21)
assert board is not None


assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 1 


board996795618 = gamma_board(board)
assert board996795618 is not None
assert board996795618 == (".1...\n"
".....\n"
"....2\n"
"2..2.\n"
"....1\n")
del board996795618
board996795618 = None
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 


board969228631 = gamma_board(board)
assert board969228631 is not None
assert board969228631 == (".1..2\n"
"2....\n"
".1112\n"
"2..2.\n"
".12.1\n")
del board969228631
board969228631 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 


gamma_delete(board)
