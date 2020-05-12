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
uuid: 819088598
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 6, 6)
assert board is not None


assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_free_fields(board, 4) == 31 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 4) == 1 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 1, 6, 4) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_free_fields(board, 4) == 24 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 6, 1, 2) == 1 
assert gamma_move(board, 6, 6, 3) == 1 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 16 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 


board197268285 = gamma_board(board)
assert board197268285 is not None
assert board197268285 == ("2.624.1\n"
".3.2216\n"
".625.1.\n"
"3...5.4\n"
"..15...\n")
del board197268285
board197268285 = None
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 5, 5, 0) == 1 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 


board862792477 = gamma_board(board)
assert board862792477 is not None
assert board862792477 == ("2.624.1\n"
".3.2216\n"
".625.1.\n"
"33..5.4\n"
".415.5.\n")
del board862792477
board862792477 = None
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 4, 5) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 6, 2, 6) == 0 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 1 


board374527844 = gamma_board(board)
assert board374527844 is not None
assert board374527844 == ("2.624.1\n"
"33.2216\n"
"1625.1.\n"
"33..5.4\n"
"1415.5.\n")
del board374527844
board374527844 = None
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 6, 4, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_golden_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 2, 1) == 1 


board503177233 = gamma_board(board)
assert board503177233 is not None
assert board503177233 == ("2.624.1\n"
"33.5216\n"
"162561.\n"
"333.5.4\n"
"1415.5.\n")
del board503177233
board503177233 = None
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 4, 0) == 1 


board557978750 = gamma_board(board)
assert board557978750 is not None
assert board557978750 == ("2.624.1\n"
"33.5216\n"
"162561.\n"
"333.5.4\n"
"141555.\n")
del board557978750
board557978750 = None
assert gamma_move(board, 6, 0, 6) == 0 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 0, 6) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 2, 6) == 0 


gamma_delete(board)
