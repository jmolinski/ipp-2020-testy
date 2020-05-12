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
uuid: 662562514
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 7, 4, 7)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_free_fields(board, 2) == 54 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 7, 0) == 1 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_free_fields(board, 2) == 45 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 3, 7, 5) == 1 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_free_fields(board, 4) == 37 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 36 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 2, 5, 0) == 0 


board134400033 = gamma_board(board)
assert board134400033 is not None
assert board134400033 == ("3.44....\n"
"....4..3\n"
".1....4.\n"
".11224..\n"
"....22.3\n"
".11.4..3\n"
".11..2.2\n")
del board134400033
board134400033 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 5, 6) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 7, 6) == 1 
assert gamma_free_fields(board, 4) == 16 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 7, 0) == 0 


board819183363 = gamma_board(board)
assert board819183363 is not None
assert board819183363 == ("3.44.3.4\n"
"....4..3\n"
".1..1.4.\n"
".11224..\n"
"..4.22.3\n"
".11.4..3\n"
".11..2.2\n")
del board819183363
board819183363 = None
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 6, 6) == 1 
assert gamma_free_fields(board, 4) == 14 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_free_fields(board, 1) == 25 
assert gamma_golden_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 6, 2) == 1 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_free_fields(board, 4) == 14 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_golden_move(board, 1, 6, 2) == 1 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_free_fields(board, 4) == 14 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 7, 3) == 1 


board156916206 = gamma_board(board)
assert board156916206 is not None
assert board156916206 == ("3.44.344\n"
"1...4..3\n"
".1..1.4.\n"
"111224.3\n"
"..4.2213\n"
".11.44.3\n"
"211322.2\n")
del board156916206
board156916206 = None
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_golden_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_free_fields(board, 1) == 17 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_move(board, 3, 1, 3) == 0 


board444789470 = gamma_board(board)
assert board444789470 is not None
assert board444789470 == ("3344.344\n"
"1...4..3\n"
"21..1.4.\n"
"111224.3\n"
"..4.2213\n"
".11.44.3\n"
"21132212\n")
del board444789470
board444789470 = None
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_golden_possible(board, 1) == 0 


board992140538 = gamma_board(board)
assert board992140538 is not None
assert board992140538 == ("3344.344\n"
"1...4..3\n"
"21..1.4.\n"
"11122413\n"
"..4.2213\n"
".11.44.3\n"
"21132212\n")
del board992140538
board992140538 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 7, 4) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 4, 3) == 0 


board381857570 = gamma_board(board)
assert board381857570 is not None
assert board381857570 == ("3344.344\n"
"1...4..3\n"
"21..1.43\n"
"11122413\n"
"..4.2213\n"
".11.44.3\n"
"21132212\n")
del board381857570
board381857570 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_free_fields(board, 3) == 14 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_golden_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 


board402442464 = gamma_board(board)
assert board402442464 is not None
assert board402442464 == ("3344.344\n"
"1...4..3\n"
"21..1343\n"
"11122413\n"
"..4.2213\n"
".11244.3\n"
"21132212\n")
del board402442464
board402442464 = None
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 4, 6) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 4) == 11 


gamma_delete(board)
