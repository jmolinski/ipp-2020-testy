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
uuid: 852699734
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 5, 5)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 23 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_free_fields(board, 4) == 19 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_free_fields(board, 5) == 17 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_free_fields(board, 5) == 11 
assert gamma_golden_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_busy_fields(board, 5) == 4 


board408587074 = gamma_board(board)
assert board408587074 is not None
assert board408587074 == (".1244\n"
".2543\n"
"..25.\n"
".3425\n"
"11543\n")
del board408587074
board408587074 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 


board884434655 = gamma_board(board)
assert board884434655 is not None
assert board884434655 == (".1244\n"
".2543\n"
"..25.\n"
"43425\n"
"11543\n")
del board884434655
board884434655 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 


board850236535 = gamma_board(board)
assert board850236535 is not None
assert board850236535 == (".1244\n"
".2543\n"
"..25.\n"
"43425\n"
"11543\n")
del board850236535
board850236535 = None
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 1, 3) == 0 


gamma_delete(board)
