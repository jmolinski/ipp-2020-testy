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
uuid: 633174182
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 7, 3, 22)
assert board is not None


assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_free_fields(board, 2) == 43 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 1, 4, 6) == 1 


board288550104 = gamma_board(board)
assert board288550104 is not None
assert board288550104 == ("22..1.1\n"
"...1232\n"
"23.....\n"
"1..13..\n"
"...1..1\n"
"331....\n"
"....23.\n")
del board288550104
board288550104 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_free_fields(board, 3) == 27 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 


board116393361 = gamma_board(board)
assert board116393361 is not None
assert board116393361 == ("22..1.1\n"
"...1232\n"
"23.....\n"
"1..13..\n"
"2..1..1\n"
"311....\n"
"..3223.\n")
del board116393361
board116393361 = None
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 1, 6, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 20 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 1) == 19 
assert gamma_golden_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 5, 6) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 


board204849819 = gamma_board(board)
assert board204849819 is not None
assert board204849819 == ("22..131\n"
".2.1232\n"
"231.1..\n"
"1..13.3\n"
"21.1.21\n"
"3112.3.\n"
"..3223.\n")
del board204849819
board204849819 = None
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_free_fields(board, 3) == 17 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_free_fields(board, 3) == 16 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 


board750641069 = gamma_board(board)
assert board750641069 is not None
assert board750641069 == ("22..131\n"
"3231232\n"
"231.1..\n"
"1..13.3\n"
"2111.21\n"
"3112.3.\n"
"3.3223.\n")
del board750641069
board750641069 = None
assert gamma_move(board, 2, 6, 1) == 1 


board180322343 = gamma_board(board)
assert board180322343 is not None
assert board180322343 == ("22..131\n"
"3231232\n"
"231.1..\n"
"1..13.3\n"
"2111.21\n"
"3112.32\n"
"3.3223.\n")
del board180322343
board180322343 = None
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 6, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 0 


board820958048 = gamma_board(board)
assert board820958048 is not None
assert board820958048 == ("22..131\n"
"3231232\n"
"231.1.3\n"
"1..13.3\n"
"2111.21\n"
"3112.32\n"
"3.3223.\n")
del board820958048
board820958048 = None
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 0, 3) == 0 


gamma_delete(board)
