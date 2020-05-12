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
uuid: 498626258
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 7, 4, 9)
assert board is not None


assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 6, 0) == 1 
assert gamma_golden_move(board, 4, 5, 5) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 2, 6, 6) == 1 
assert gamma_move(board, 3, 7, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 


board320402132 = gamma_board(board)
assert board320402132 is not None
assert board320402132 == ("...12.2.\n"
".....4..\n"
"......2.\n"
".....3.3\n"
"........\n"
"........\n"
"11....4.\n")
del board320402132
board320402132 = None
assert gamma_move(board, 4, 5, 5) == 0 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 44 


board229307439 = gamma_board(board)
assert board229307439 is not None
assert board229307439 == ("...12.2.\n"
".....4..\n"
"......2.\n"
".....3.3\n"
"....14..\n"
"........\n"
"11....4.\n")
del board229307439
board229307439 = None
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 4, 5, 0) == 1 
assert gamma_move(board, 4, 1, 5) == 1 


board670732492 = gamma_board(board)
assert board670732492 is not None
assert board670732492 == ("2..12.2.\n"
".4...42.\n"
"...11.2.\n"
".....3.3\n"
"4.4.142.\n"
"...3.32.\n"
"1114.44.\n")
del board670732492
board670732492 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 30 
assert gamma_golden_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_golden_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 7, 5) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 7, 1) == 1 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_golden_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_golden_move(board, 4, 6, 4) == 0 


board416746590 = gamma_board(board)
assert board416746590 is not None
assert board416746590 == ("2..12.2.\n"
"44..4424\n"
".2.11.2.\n"
"2.42.3.3\n"
"4.4.142.\n"
".1.3.321\n"
"1114.44.\n")
del board416746590
board416746590 = None
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 21 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 6, 5) == 0 


board909815649 = gamma_board(board)
assert board909815649 is not None
assert board909815649 == ("2..12.2.\n"
"44..4424\n"
".2.11.2.\n"
"2.42.3.3\n"
"4.4.142.\n"
".1.3.321\n"
"1114.44.\n")
del board909815649
board909815649 = None
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 1, 0) == 0 


board532273552 = gamma_board(board)
assert board532273552 is not None
assert board532273552 == ("2.212.2.\n"
"44..4424\n"
".2.11.2.\n"
"2.42.3.3\n"
"4.4.142.\n"
".1.3.321\n"
"1114.44.\n")
del board532273552
board532273552 = None
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_free_fields(board, 4) == 20 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_busy_fields(board, 4) == 12 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_free_fields(board, 2) == 19 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 6, 4) == 0 


board330925709 = gamma_board(board)
assert board330925709 is not None
assert board330925709 == ("2.212.2.\n"
"44..4424\n"
"32.11.2.\n"
"2.42.3.3\n"
"4.4.142.\n"
".1.3.321\n"
"1114.44.\n")
del board330925709
board330925709 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_free_fields(board, 4) == 18 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 


board971175996 = gamma_board(board)
assert board971175996 is not None
assert board971175996 == ("2.212.2.\n"
"44.24424\n"
"32.11.2.\n"
"2.42.3.3\n"
"444.142.\n"
".1.3.321\n"
"1114.44.\n")
del board971175996
board971175996 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 5, 6) == 1 
assert gamma_move(board, 4, 6, 7) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 1, 3, 4) == 0 


board162746759 = gamma_board(board)
assert board162746759 is not None
assert board162746759 == ("2321232.\n"
"44.24424\n"
"32.1122.\n"
"2.42.323\n"
"444.142.\n"
".133.321\n"
"1114144.\n")
del board162746759
board162746759 = None
assert gamma_move(board, 3, 6, 7) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 6, 7) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 6, 7) == 0 
assert gamma_busy_fields(board, 4) == 13 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_golden_move(board, 4, 1, 7) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_golden_move(board, 4, 1, 5) == 0 


gamma_delete(board)
