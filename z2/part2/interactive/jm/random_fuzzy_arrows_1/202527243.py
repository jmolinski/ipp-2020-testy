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
uuid: 202527243
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 7, 3, 18)
assert board is not None


assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 2, 6, 6) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_free_fields(board, 2) == 38 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_golden_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_golden_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 


board994633328 = gamma_board(board)
assert board994633328 is not None
assert board994633328 == ("3..1..2\n"
".21.11.\n"
"3.31...\n"
"3..2...\n"
"..3.1..\n"
".....3.\n"
"1......\n")
del board994633328
board994633328 = None
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_golden_move(board, 2, 6, 5) == 0 
assert gamma_golden_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 0 


board438710833 = gamma_board(board)
assert board438710833 is not None
assert board438710833 == ("3221312\n"
".21311.\n"
"3331...\n"
"3..2...\n"
"..3.12.\n"
"..23.3.\n"
"1.12.1.\n")
del board438710833
board438710833 = None
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_free_fields(board, 1) == 18 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_golden_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_move(board, 1, 0, 5) == 0 


board672662612 = gamma_board(board)
assert board672662612 is not None
assert board672662612 == ("3221312\n"
"321311.\n"
"333123.\n"
"3.12...\n"
"..33122\n"
"1223132\n"
"1312.13\n")
del board672662612
board672662612 = None
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_busy_fields(board, 1) == 13 


board733636262 = gamma_board(board)
assert board733636262 is not None
assert board733636262 == ("3221312\n"
"321311.\n"
"333123.\n"
"3.12.22\n"
"..33122\n"
"1223132\n"
"1312.13\n")
del board733636262
board733636262 = None
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_busy_fields(board, 3) == 15 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_busy_fields(board, 1) == 14 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 6, 5) == 1 


gamma_delete(board)
