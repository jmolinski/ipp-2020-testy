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
uuid: 461268954
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 5, 8)
assert board is not None


assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_free_fields(board, 3) == 37 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 4, 0) == 0 


board928515811 = gamma_board(board)
assert board928515811 is not None
assert board928515811 == ("....1\n"
".....\n"
".....\n"
"1....\n"
".....\n"
"3....\n"
"...4.\n"
"2..2.\n")
del board928515811
board928515811 = None
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 32 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_free_fields(board, 4) == 30 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 7, 0) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_busy_fields(board, 4) == 4 


board997763202 = gamma_board(board)
assert board997763202 is not None
assert board997763202 == ("....1\n"
"...4.\n"
".4...\n"
"1...1\n"
".13.1\n"
"3....\n"
"...44\n"
"1.32.\n")
del board997763202
board997763202 = None
assert gamma_move(board, 5, 4, 2) == 1 


board154680322 = gamma_board(board)
assert board154680322 is not None
assert board154680322 == ("....1\n"
"...4.\n"
".4...\n"
"1...1\n"
".13.1\n"
"3...5\n"
"...44\n"
"1.32.\n")
del board154680322
board154680322 = None
assert gamma_golden_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_free_fields(board, 2) == 25 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_free_fields(board, 5) == 23 


board624921085 = gamma_board(board)
assert board624921085 is not None
assert board624921085 == ("....1\n"
"3..4.\n"
".4...\n"
"15..1\n"
".13.1\n"
"3...5\n"
"...44\n"
"1.32.\n")
del board624921085
board624921085 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_free_fields(board, 1) == 22 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 2, 7) == 1 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 5, 2, 7) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 6, 4) == 0 


board472263915 = gamma_board(board)
assert board472263915 is not None
assert board472263915 == ("3.1.1\n"
"3..4.\n"
".4.3.\n"
"15..1\n"
"31321\n"
"3.1.5\n"
"4..44\n"
"1432.\n")
del board472263915
board472263915 = None
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_free_fields(board, 4) == 13 
assert gamma_move(board, 5, 7, 1) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_golden_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 4) == 13 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 5, 7, 0) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 5, 4, 5) == 1 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 0, 6) == 0 
assert gamma_move(board, 5, 2, 1) == 1 


board772644940 = gamma_board(board)
assert board772644940 is not None
assert board772644940 == ("3.1.1\n"
"3..4.\n"
".4.35\n"
"15.41\n"
"31321\n"
"3.1.5\n"
"4.544\n"
"14324\n")
del board772644940
board772644940 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_golden_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 5, 7, 1) == 0 
assert gamma_move(board, 5, 2, 2) == 0 


gamma_delete(board)
