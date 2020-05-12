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
uuid: 549789466
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 4, 4)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_golden_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 3, 2) == 0 


board993915272 = gamma_board(board)
assert board993915272 is not None
assert board993915272 == ("....\n"
"....\n"
"..44\n"
"3...\n"
"...2\n"
"....\n"
"..3.\n")
del board993915272
board993915272 = None
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 1, 6) == 1 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_golden_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 0 


board155715530 = gamma_board(board)
assert board155715530 is not None
assert board155715530 == ("14.3\n"
"....\n"
"..44\n"
"2..4\n"
"2.12\n"
"3132\n"
"..31\n")
del board155715530
board155715530 = None
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_golden_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_golden_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_busy_fields(board, 3) == 7 


board491239484 = gamma_board(board)
assert board491239484 is not None
assert board491239484 == ("14.3\n"
".344\n"
".344\n"
"2..4\n"
"2.32\n"
"3132\n"
"2.31\n")
del board491239484
board491239484 = None
assert gamma_move(board, 4, 0, 1) == 0 


board291233151 = gamma_board(board)
assert board291233151 is not None
assert board291233151 == ("14.3\n"
".344\n"
".344\n"
"2..4\n"
"2.32\n"
"3132\n"
"2.31\n")
del board291233151
board291233151 = None
assert gamma_move(board, 1, 3, 2) == 0 


board631493981 = gamma_board(board)
assert board631493981 is not None
assert board631493981 == ("14.3\n"
".344\n"
".344\n"
"2..4\n"
"2.32\n"
"3132\n"
"2.31\n")
del board631493981
board631493981 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 1 


gamma_delete(board)
