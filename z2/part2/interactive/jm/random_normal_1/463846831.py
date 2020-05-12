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
uuid: 463846831
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 8, 6, 6)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_free_fields(board, 3) == 51 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_free_fields(board, 5) == 50 
assert gamma_move(board, 6, 1, 4) == 1 
assert gamma_move(board, 6, 6, 4) == 1 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 6, 2, 6) == 1 
assert gamma_move(board, 6, 0, 5) == 1 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_free_fields(board, 1) == 43 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_free_fields(board, 4) == 41 
assert gamma_move(board, 5, 2, 5) == 1 
assert gamma_move(board, 6, 0, 4) == 1 
assert gamma_move(board, 6, 6, 7) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_golden_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 5, 6) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 6, 6, 0) == 1 
assert gamma_move(board, 6, 6, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_golden_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 5, 6, 7) == 0 
assert gamma_move(board, 6, 2, 0) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_free_fields(board, 5) == 29 
assert gamma_move(board, 1, 6, 6) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_golden_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 4, 5) == 1 
assert gamma_move(board, 6, 4, 4) == 0 
assert gamma_move(board, 1, 5, 6) == 0 


board376552639 = gamma_board(board)
assert board376552639 is not None
assert board376552639 == ("3.....6\n"
"..63131\n"
"6.5.52.\n"
"66.3..6\n"
"52.5..6\n"
".122...\n"
"42.4.3.\n"
"..6.1.6\n")
del board376552639
board376552639 = None
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_free_fields(board, 5) == 26 
assert gamma_move(board, 6, 7, 3) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_free_fields(board, 4) == 25 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 4) == 1 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 6, 7) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 7, 5) == 0 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 6, 3, 5) == 0 


board920798544 = gamma_board(board)
assert board920798544 is not None
assert board920798544 == ("3.....6\n"
"..63131\n"
"6.5552.\n"
"6663..6\n"
"52.5..6\n"
".122431\n"
"42.4.34\n"
"3.6.1.6\n")
del board920798544
board920798544 = None
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_move(board, 3, 2, 3) == 0 


board827702833 = gamma_board(board)
assert board827702833 is not None
assert board827702833 == ("3.....6\n"
"..63131\n"
"6.5552.\n"
"6663..6\n"
"52.5..6\n"
".122431\n"
"42.4.34\n"
"3.6.1.6\n")
del board827702833
board827702833 = None
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 6, 7, 1) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 6, 7, 5) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_golden_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_free_fields(board, 5) == 17 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_free_fields(board, 6) == 12 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_free_fields(board, 4) == 16 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 1, 5) == 1 


board291287692 = gamma_board(board)
assert board291287692 is not None
assert board291287692 == ("3.....6\n"
"..63131\n"
"655552.\n"
"66632.6\n"
"5245..6\n"
"2122431\n"
"4244.34\n"
"3.6.1.6\n")
del board291287692
board291287692 = None
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 5, 5, 4) == 1 
assert gamma_move(board, 6, 7, 3) == 0 
assert gamma_move(board, 6, 6, 4) == 0 
assert gamma_busy_fields(board, 6) == 10 
assert gamma_free_fields(board, 6) == 9 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 6, 3, 7) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 6, 7) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_free_fields(board, 4) == 14 
assert gamma_golden_possible(board, 4) == 1 


gamma_delete(board)
