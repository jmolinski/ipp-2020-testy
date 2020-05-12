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
uuid: 829985613
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 4, 8)
assert board is not None


assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_golden_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_golden_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_free_fields(board, 4) == 33 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_golden_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 0 


board899610112 = gamma_board(board)
assert board899610112 is not None
assert board899610112 == (".....\n"
"4.2..\n"
"..2..\n"
"....2\n"
"...1.\n"
".143.\n"
".....\n"
"2...1\n")
del board899610112
board899610112 = None
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 4, 0, 7) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_golden_possible(board, 3) == 1 


board963378858 = gamma_board(board)
assert board963378858 is not None
assert board963378858 == ("4....\n"
"4.2..\n"
"..2..\n"
"....2\n"
"23.13\n"
".1434\n"
"3....\n"
"2.4.1\n")
del board963378858
board963378858 = None
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 1 


board885318336 = gamma_board(board)
assert board885318336 is not None
assert board885318336 == ("4....\n"
"4.2..\n"
"..2..\n"
"....2\n"
"23.13\n"
".1434\n"
"3..4.\n"
"2.411\n")
del board885318336
board885318336 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 7) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 3, 2) == 0 


board831811665 = gamma_board(board)
assert board831811665 is not None
assert board831811665 == ("432..\n"
"4.2..\n"
"4.21.\n"
".1..2\n"
"23.13\n"
".1434\n"
"3..4.\n"
"2.411\n")
del board831811665
board831811665 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_free_fields(board, 3) == 15 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 4, 7) == 1 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_free_fields(board, 4) == 10 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 4, 3) == 0 


board238370301 = gamma_board(board)
assert board238370301 is not None
assert board238370301 == ("43223\n"
"4.2.3\n"
"4421.\n"
"21..2\n"
"23.13\n"
".1434\n"
"31.43\n"
"22411\n")
del board238370301
board238370301 = None
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 0 


gamma_delete(board)
