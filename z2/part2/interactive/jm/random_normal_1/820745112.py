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
uuid: 820745112
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 4, 4, 3)
assert board is not None


assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_golden_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 4, 7, 3) == 1 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_free_fields(board, 2) == 22 
assert gamma_golden_possible(board, 2) == 1 


board365371602 = gamma_board(board)
assert board365371602 is not None
assert board365371602 == ("42221..4\n"
"1.......\n"
"..4.....\n"
"2....1..\n")
del board365371602
board365371602 = None
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 7, 3) == 0 


board641874504 = gamma_board(board)
assert board641874504 is not None
assert board641874504 == ("42221.34\n"
"1.......\n"
"234.3...\n"
"2.4..1..\n")
del board641874504
board641874504 = None
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 7, 3) == 0 


board792281222 = gamma_board(board)
assert board792281222 is not None
assert board792281222 == ("42221.34\n"
"1.......\n"
"234.3...\n"
"2.4..1..\n")
del board792281222
board792281222 = None
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_golden_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_golden_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 7, 0) == 0 
assert gamma_free_fields(board, 4) == 4 


gamma_delete(board)
