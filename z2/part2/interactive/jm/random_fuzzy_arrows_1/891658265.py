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
uuid: 891658265
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 3, 4)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 1, 6) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_free_fields(board, 2) == 29 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_free_fields(board, 3) == 25 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 


board650869843 = gamma_board(board)
assert board650869843 is not None
assert board650869843 == (".1...\n"
"33...\n"
".....\n"
"2..11\n"
"322..\n"
"...1.\n"
".....\n")
del board650869843
board650869843 = None
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_free_fields(board, 2) == 23 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_free_fields(board, 3) == 23 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_golden_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_free_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 


gamma_delete(board)
