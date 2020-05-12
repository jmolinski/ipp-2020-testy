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
uuid: 619343743
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 6, 3, 8)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 1 


board971264438 = gamma_board(board)
assert board971264438 is not None
assert board971264438 == (".....\n"
"....1\n"
"..3..\n"
"2.1.1\n"
"1...2\n"
"31..2\n")
del board971264438
board971264438 = None
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 2, 3) == 0 


board779362943 = gamma_board(board)
assert board779362943 is not None
assert board779362943 == ("..2..\n"
"....1\n"
"..3..\n"
"2.1.1\n"
"1...2\n"
"31..2\n")
del board779362943
board779362943 = None
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_golden_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 


board874380506 = gamma_board(board)
assert board874380506 is not None
assert board874380506 == ("1322.\n"
"3.311\n"
".132.\n"
"21121\n"
"211.2\n"
"31.32\n")
del board874380506
board874380506 = None
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_golden_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 4, 1) == 0 


board705548581 = gamma_board(board)
assert board705548581 is not None
assert board705548581 == ("1322.\n"
"3.311\n"
".1322\n"
"21121\n"
"21132\n"
"31332\n")
del board705548581
board705548581 = None
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 3, 0) == 0 


gamma_delete(board)
