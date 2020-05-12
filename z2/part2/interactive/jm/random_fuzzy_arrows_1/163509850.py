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
uuid: 163509850
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 3, 19)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 38 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 7) == 1 
assert gamma_move(board, 1, 5, 2) == 0 


board321769836 = gamma_board(board)
assert board321769836 is not None
assert board321769836 == (".3...\n"
".....\n"
".....\n"
"1....\n"
"1.2..\n"
".....\n"
".....\n"
"2....\n")
del board321769836
board321769836 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 35 
assert gamma_golden_possible(board, 2) == 1 


board696775990 = gamma_board(board)
assert board696775990 is not None
assert board696775990 == (".3...\n"
".....\n"
".....\n"
"1....\n"
"1.2..\n"
".....\n"
".....\n"
"2....\n")
del board696775990
board696775990 = None
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 4, 7) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 30 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 1 


board276928603 = gamma_board(board)
assert board276928603 is not None
assert board276928603 == (".3..2\n"
"...2.\n"
"1....\n"
"1....\n"
"1.2.3\n"
".....\n"
".3.2.\n"
"2....\n")
del board276928603
board276928603 = None
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_golden_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 21 
assert gamma_golden_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 7) == 1 


board335300417 = gamma_board(board)
assert board335300417 is not None
assert board335300417 == ("33..2\n"
"13121\n"
"1.1..\n"
"132.1\n"
"1.213\n"
".....\n"
"23.22\n"
"233.3\n")
del board335300417
board335300417 = None
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_golden_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_busy_fields(board, 2) == 10 


board828887780 = gamma_board(board)
assert board828887780 is not None
assert board828887780 == ("33..2\n"
"13121\n"
"121.3\n"
"132.1\n"
"12213\n"
".12.3\n"
"23132\n"
"23333\n")
del board828887780
board828887780 = None
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_golden_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 10 


gamma_delete(board)
