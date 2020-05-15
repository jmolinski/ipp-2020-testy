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
uuid: 378206093
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 9)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 15 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 14 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 


board705878606 = gamma_board(board)
assert board705878606 is not None
assert board705878606 == (".....\n"
"1222.\n"
".3..1\n"
"3.13.\n")
del board705878606
board705878606 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 


board512165980 = gamma_board(board)
assert board512165980 is not None
assert board512165980 == ("1....\n"
"1222.\n"
".3.11\n"
"3.13.\n")
del board512165980
board512165980 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 0 


board418619931 = gamma_board(board)
assert board418619931 is not None
assert board418619931 == ("1..3.\n"
"1222.\n"
".3.11\n"
"3.13.\n")
del board418619931
board418619931 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 


gamma_delete(board)
