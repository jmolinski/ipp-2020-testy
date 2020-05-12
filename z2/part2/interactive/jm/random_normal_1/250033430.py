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
uuid: 250033430
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 7, 5, 7)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_golden_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_golden_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 5, 2, 6) == 1 
assert gamma_move(board, 5, 2, 4) == 1 


board373794710 = gamma_board(board)
assert board373794710 is not None
assert board373794710 == ("..5...\n"
"2...4.\n"
"..53..\n"
"......\n"
"3....4\n"
"1...2.\n"
"..1.3.\n")
del board373794710
board373794710 = None
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 5, 1, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_golden_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 6, 4) == 0 


board880803382 = gamma_board(board)
assert board880803382 is not None
assert board880803382 == (".253..\n"
"23.542\n"
"..53..\n"
"1.2..4\n"
"35.2.4\n"
"15.12.\n"
"511.3.\n")
del board880803382
board880803382 = None
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_free_fields(board, 3) == 15 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 5) == 0 


board451804748 = gamma_board(board)
assert board451804748 is not None
assert board451804748 == ("4253..\n"
"23.542\n"
"..533.\n"
"1.2..4\n"
"3512.4\n"
"15.12.\n"
"51143.\n")
del board451804748
board451804748 = None
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_move(board, 1, 2, 3) == 1 


board320949846 = gamma_board(board)
assert board320949846 is not None
assert board320949846 == ("4253..\n"
"23.542\n"
"..533.\n"
"1.1..4\n"
"3512.4\n"
"15.12.\n"
"51143.\n")
del board320949846
board320949846 = None
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 5, 4, 5) == 0 


board588745184 = gamma_board(board)
assert board588745184 is not None
assert board588745184 == ("4253..\n"
"23.542\n"
"2.533.\n"
"141124\n"
"3512.4\n"
"15.12.\n"
"51143.\n")
del board588745184
board588745184 = None
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 


gamma_delete(board)
