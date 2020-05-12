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
uuid: 591778661
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 4, 11)
assert board is not None


assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 6, 2) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_free_fields(board, 2) == 56 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 5, 7) == 1 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_free_fields(board, 4) == 44 
assert gamma_move(board, 1, 1, 7) == 1 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_golden_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_golden_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_golden_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 7, 7) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 1, 0, 5) == 0 


board268187144 = gamma_board(board)
assert board268187144 is not None
assert board268187144 == ("21...3.2\n"
"1..13.3.\n"
"1134212.\n"
".13322..\n"
"24..32.1\n"
".34..143\n"
"41.44.3.\n"
"132.1...\n")
del board268187144
board268187144 = None
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 3, 7) == 1 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_golden_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 6, 7) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 0, 6) == 0 


board707403654 = gamma_board(board)
assert board707403654 is not None
assert board707403654 == ("21.3.342\n"
"1..13.3.\n"
"1133212.\n"
".133222.\n"
"24.132.1\n"
".34..143\n"
"41.44.3.\n"
"132.1...\n")
del board707403654
board707403654 = None
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 7, 4) == 1 
assert gamma_golden_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_golden_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_golden_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 4, 7) == 1 
assert gamma_free_fields(board, 3) == 19 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 4) == 7 


board576335157 = gamma_board(board)
assert board576335157 is not None
assert board576335157 == ("21.32342\n"
"1..13.3.\n"
"1133212.\n"
"21332222\n"
"24.132.1\n"
".342.143\n"
"41.44.3.\n"
"132.1...\n")
del board576335157
board576335157 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_free_fields(board, 3) == 17 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_free_fields(board, 4) == 17 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 7, 6) == 1 


board131443283 = gamma_board(board)
assert board131443283 is not None
assert board131443283 == ("21.32342\n"
"1..13.34\n"
"1133212.\n"
"21332222\n"
"24.132.1\n"
".342.143\n"
"41.44.3.\n"
"132.1...\n")
del board131443283
board131443283 = None
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_free_fields(board, 4) == 16 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_busy_fields(board, 1) == 14 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 0, 6) == 0 


board242045639 = gamma_board(board)
assert board242045639 is not None
assert board242045639 == ("21.32342\n"
"1..13.34\n"
"1133212.\n"
"21332222\n"
"24.132.1\n"
"1342.143\n"
"41.44.3.\n"
"132.1...\n")
del board242045639
board242045639 = None
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 7, 0) == 1 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_free_fields(board, 3) == 13 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 4, 5, 6) == 1 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_golden_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 


gamma_delete(board)
