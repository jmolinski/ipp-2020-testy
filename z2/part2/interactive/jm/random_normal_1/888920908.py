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
uuid: 888920908
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 7, 3, 16)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 0, 5) == 1 


board417628705 = gamma_board(board)
assert board417628705 is not None
assert board417628705 == ("1..23..\n"
"1.....2\n"
".2.3..2\n"
".......\n"
"...1...\n"
"...11..\n"
"..3....\n")
del board417628705
board417628705 = None
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_free_fields(board, 1) == 28 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_golden_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 5, 3) == 0 


board958232906 = gamma_board(board)
assert board958232906 is not None
assert board958232906 == ("1.223.1\n"
"13..3.2\n"
".2.3122\n"
"11.3.3.\n"
".111...\n"
"...11.2\n"
"313.1.2\n")
del board958232906
board958232906 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 11 


board425941629 = gamma_board(board)
assert board425941629 is not None
assert board425941629 == ("1.22311\n"
"13..3.2\n"
"2213122\n"
"11.3.3.\n"
".111.3.\n"
"12211.2\n"
"313.1.2\n")
del board425941629
board425941629 = None
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_golden_move(board, 3, 1, 0) == 1 


board830615618 = gamma_board(board)
assert board830615618 is not None
assert board830615618 == ("1.22311\n"
"13..312\n"
"2213122\n"
"11.3.3.\n"
".111.3.\n"
"12211.2\n"
"333.1.2\n")
del board830615618
board830615618 = None
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 


board688998386 = gamma_board(board)
assert board688998386 is not None
assert board688998386 == ("1.22311\n"
"13..312\n"
"2213122\n"
"11.3.3.\n"
".111.31\n"
"12211.2\n"
"333.1.2\n")
del board688998386
board688998386 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 1 


board188417392 = gamma_board(board)
assert board188417392 is not None
assert board188417392 == ("1.22311\n"
"13.2312\n"
"2213122\n"
"11.313.\n"
".111231\n"
"12211.2\n"
"33311.2\n")
del board188417392
board188417392 = None
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_busy_fields(board, 1) == 19 
assert gamma_golden_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_golden_move(board, 3, 5, 5) == 0 


board190842420 = gamma_board(board)
assert board190842420 is not None
assert board190842420 == ("1.22311\n"
"13.1312\n"
"2213122\n"
"11.313.\n"
".111231\n"
"12211.2\n"
"33311.2\n")
del board190842420
board190842420 = None
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 7 


board708652469 = gamma_board(board)
assert board708652469 is not None
assert board708652469 == ("1.22311\n"
"13.1312\n"
"2213122\n"
"11.313.\n"
".111231\n"
"12211.2\n"
"33311.2\n")
del board708652469
board708652469 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_golden_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 


gamma_delete(board)
