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
uuid: 750809588
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 4, 14)
assert board is not None


assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 2, 6) == 1 
assert gamma_move(board, 3, 5, 7) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 3, 2) == 1 


board833630902 = gamma_board(board)
assert board833630902 is not None
assert board833630902 == (".....3\n"
"..3.1.\n"
"..2...\n"
".....4\n"
"14....\n"
"...3.1\n"
"..3...\n"
"4..212\n")
del board833630902
board833630902 = None
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 1, 6) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 1, 7) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 5, 1) == 1 


board881566148 = gamma_board(board)
assert board881566148 is not None
assert board881566148 == (".1...3\n"
".13.1.\n"
"..2...\n"
"....44\n"
"14.2..\n"
"3..3.1\n"
"..3..4\n"
"4..212\n")
del board881566148
board881566148 = None
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 21 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 3, 7) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_free_fields(board, 4) == 15 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_golden_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 2, 5, 6) == 1 


board686087679 = gamma_board(board)
assert board686087679 is not None
assert board686087679 == (".1.4.3\n"
".13112\n"
"142121\n"
"....44\n"
"14223.\n"
"313321\n"
"243..4\n"
"44.212\n")
del board686087679
board686087679 = None
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 5, 5) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 6, 0) == 0 


board330982559 = gamma_board(board)
assert board330982559 is not None
assert board330982559 == (".1.4.3\n"
".13112\n"
"142121\n"
"21..44\n"
"14223.\n"
"313321\n"
"243.34\n"
"442212\n")
del board330982559
board330982559 = None
assert gamma_move(board, 4, 7, 0) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_move(board, 2, 5, 1) == 1 


board916184071 = gamma_board(board)
assert board916184071 is not None
assert board916184071 == (".1.4.3\n"
".13112\n"
"142121\n"
"212.44\n"
"14223.\n"
"313321\n"
"243.32\n"
"442212\n")
del board916184071
board916184071 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_free_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_golden_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_move(board, 4, 5, 5) == 0 


gamma_delete(board)
