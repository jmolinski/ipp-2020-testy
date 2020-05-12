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
uuid: 171191047
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 5, 6, 3)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 6, 7, 3) == 1 
assert gamma_move(board, 6, 6, 0) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 7, 1) == 1 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 6, 1, 4) == 1 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_free_fields(board, 6) == 7 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_free_fields(board, 4) == 23 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 6, 7, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_golden_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 6, 7, 4) == 1 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_free_fields(board, 5) == 1 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_busy_fields(board, 6) == 4 
assert gamma_golden_move(board, 6, 1, 6) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 0 


board540164325 = gamma_board(board)
assert board540164325 is not None
assert board540164325 == ("56..3..6\n"
"4......6\n"
".1.114..\n"
"3542..21\n"
"5...236.\n")
del board540164325
board540164325 = None
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 5, 4) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_free_fields(board, 1) == 8 


board921837182 = gamma_board(board)
assert board921837182 is not None
assert board921837182 == ("56..3..6\n"
"4......6\n"
".1.114..\n"
"3542..21\n"
"5...236.\n")
del board921837182
board921837182 = None
assert gamma_golden_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_free_fields(board, 5) == 1 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 6, 5, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_golden_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_golden_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 2, 4) == 0 


board867705791 = gamma_board(board)
assert board867705791 is not None
assert board867705791 == ("56..3..6\n"
"4......6\n"
"11.114..\n"
"3542..21\n"
"5...236.\n")
del board867705791
board867705791 = None
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_golden_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 6, 6, 2) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 5, 2) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 1, 4) == 0 


gamma_delete(board)
