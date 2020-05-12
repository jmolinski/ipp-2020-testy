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
uuid: 121119076
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 5, 4, 6)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 4) == 1 


board665897207 = gamma_board(board)
assert board665897207 is not None
assert board665897207 == ("..1.....\n"
"........\n"
"........\n"
"........\n"
".1......\n")
del board665897207
board665897207 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 35 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_free_fields(board, 1) == 33 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 4, 4) == 1 


board469615123 = gamma_board(board)
assert board469615123 is not None
assert board469615123 == ("1.1.3...\n"
"..2.....\n"
"........\n"
"..2.4...\n"
".111....\n")
del board469615123
board469615123 = None
assert gamma_free_fields(board, 4) == 31 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 7, 1) == 1 
assert gamma_free_fields(board, 2) == 27 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 7, 3) == 1 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 4, 5, 0) == 1 
assert gamma_move(board, 4, 7, 2) == 1 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 7, 4) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 7, 0) == 1 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 4) == 0 


board629032934 = gamma_board(board)
assert board629032934 is not None
assert board629032934 == ("1.113.41\n"
"..2..2.3\n"
"..2....4\n"
".2234132\n"
"2111.4.1\n")
del board629032934
board629032934 = None
assert gamma_move(board, 3, 6, 2) == 1 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_golden_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 8 


board229989944 = gamma_board(board)
assert board229989944 is not None
assert board229989944 == ("1.113.41\n"
"2.2..2.3\n"
"..2...34\n"
".2234132\n"
"2111.4.1\n")
del board229989944
board229989944 = None
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_free_fields(board, 4) == 13 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_golden_possible(board, 2) == 0 


board875993708 = gamma_board(board)
assert board875993708 is not None
assert board875993708 == ("14113441\n"
"2.22.223\n"
"2.223.34\n"
"32234132\n"
"2111.4.1\n")
del board875993708
board875993708 = None
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_golden_possible(board, 4) == 1 


gamma_delete(board)
