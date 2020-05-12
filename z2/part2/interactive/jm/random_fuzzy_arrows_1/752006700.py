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
uuid: 752006700
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 5, 6)
assert board is not None


assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_free_fields(board, 1) == 63 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 2, 2) == 1 


board526788873 = gamma_board(board)
assert board526788873 is not None
assert board526788873 == ("........\n"
".....1..\n"
"........\n"
"....2...\n"
"2.......\n"
"..3.....\n"
"........\n"
"........\n")
del board526788873
board526788873 = None
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 5, 5, 5) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 3, 7, 4) == 1 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 4, 1, 6) == 1 
assert gamma_move(board, 5, 7, 6) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_free_fields(board, 3) == 49 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 5, 7, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_free_fields(board, 2) == 45 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 4, 6, 2) == 1 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 6) == 1 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_busy_fields(board, 4) == 9 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_golden_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 5, 2, 7) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_golden_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_free_fields(board, 5) == 31 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_free_fields(board, 3) == 31 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_busy_fields(board, 4) == 11 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 4, 1, 7) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_move(board, 1, 0, 7) == 0 


board294603723 = gamma_board(board)
assert board294603723 is not None
assert board294603723 == ("242.....\n"
"44.441.5\n"
"3.3335..\n"
"....2443\n"
"21535...\n"
".1325.4.\n"
".2..4...\n"
".4414..5\n")
del board294603723
board294603723 = None
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_move(board, 3, 7, 7) == 1 
assert gamma_move(board, 3, 2, 6) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 5, 6) == 0 


board261575332 = gamma_board(board)
assert board261575332 is not None
assert board261575332 == ("242....3\n"
"443441.5\n"
"3.3335..\n"
"....2443\n"
"21535...\n"
".1325.4.\n"
".2..4...\n"
"44414..5\n")
del board261575332
board261575332 = None
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 7, 5) == 1 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_golden_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 4, 7) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 13 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 7, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 


board822469084 = gamma_board(board)
assert board822469084 is not None
assert board822469084 == ("242.2..3\n"
"443441.5\n"
"3.3335.3\n"
"....2443\n"
"21535...\n"
".1325.4.\n"
".5..4...\n"
"44414..5\n")
del board822469084
board822469084 = None
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_move(board, 2, 6, 3) == 1 


board359748564 = gamma_board(board)
assert board359748564 is not None
assert board359748564 == ("24222..3\n"
"443441.5\n"
"3.3335.3\n"
"....2443\n"
"21535.2.\n"
".1325.4.\n"
".5..4...\n"
"44414..5\n")
del board359748564
board359748564 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 5, 7, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 


board867728392 = gamma_board(board)
assert board867728392 is not None
assert board867728392 == ("24222..3\n"
"443441.5\n"
"343335.3\n"
"....2443\n"
"21535.2.\n"
".1325.4.\n"
".5.14...\n"
"44414..5\n")
del board867728392
board867728392 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_busy_fields(board, 5) == 7 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_move(board, 4, 7, 2) == 1 
assert gamma_busy_fields(board, 4) == 16 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 6, 7) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_free_fields(board, 3) == 17 
assert gamma_move(board, 4, 7, 5) == 0 
assert gamma_busy_fields(board, 4) == 16 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_free_fields(board, 3) == 17 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 7, 5) == 0 


board461270908 = gamma_board(board)
assert board461270908 is not None
assert board461270908 == ("24222..3\n"
"443441.5\n"
"343335.3\n"
".4.32443\n"
"21535.2.\n"
".1325.44\n"
".5.14...\n"
"44414..5\n")
del board461270908
board461270908 = None
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 7, 7) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 1, 6, 7) == 1 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 6, 5) == 1 
assert gamma_move(board, 4, 6, 7) == 0 
assert gamma_golden_move(board, 4, 7, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 5, 2) == 1 


board131188856 = gamma_board(board)
assert board131188856 is not None
assert board131188856 == ("24222.13\n"
"443441.5\n"
"34333543\n"
".4.32444\n"
"21535.2.\n"
".1325544\n"
"35.14.4.\n"
"44414..5\n")
del board131188856
board131188856 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 7, 5) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_free_fields(board, 5) == 7 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 7) == 0 


gamma_delete(board)
