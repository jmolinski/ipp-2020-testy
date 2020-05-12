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
uuid: 332504556
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 6, 3, 18)
assert board is not None


assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_free_fields(board, 2) == 36 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_golden_move(board, 3, 0, 0) == 1 


board704050770 = gamma_board(board)
assert board704050770 is not None
assert board704050770 == ("3..3...\n"
".2.1..2\n"
"1......\n"
"..31.2.\n"
"321....\n"
"3.2..3.\n")
del board704050770
board704050770 = None
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_free_fields(board, 2) == 21 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_golden_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_free_fields(board, 2) == 14 
assert gamma_golden_move(board, 2, 2, 1) == 1 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 5 


board210788433 = gamma_board(board)
assert board210788433 is not None
assert board210788433 == ("33.3.22\n"
".2.1312\n"
"1..222.\n"
".31132.\n"
"32222..\n"
"3.2.33.\n")
del board210788433
board210788433 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_busy_fields(board, 1) == 5 


board150775200 = gamma_board(board)
assert board150775200 is not None
assert board150775200 == ("33.3322\n"
".2.1312\n"
"1..222.\n"
".31132.\n"
"32222..\n"
"3.2.333\n")
del board150775200
board150775200 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 


board876071906 = gamma_board(board)
assert board876071906 is not None
assert board876071906 == ("3313322\n"
".2.1312\n"
"1..222.\n"
".31132.\n"
"32222..\n"
"3.2.333\n")
del board876071906
board876071906 = None
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_golden_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_golden_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 


gamma_delete(board)
