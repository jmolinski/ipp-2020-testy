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
uuid: 681089524
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 6, 7)
assert board is not None


assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_move(board, 5, 4, 6) == 1 
assert gamma_move(board, 6, 7, 6) == 1 
assert gamma_free_fields(board, 6) == 56 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_free_fields(board, 3) == 53 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_move(board, 6, 7, 5) == 1 
assert gamma_move(board, 1, 7, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_free_fields(board, 2) == 48 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 7, 4) == 1 
assert gamma_move(board, 4, 5, 5) == 0 
assert gamma_move(board, 4, 1, 6) == 1 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 6, 0, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 4, 5, 7) == 1 
assert gamma_free_fields(board, 4) == 38 
assert gamma_move(board, 5, 5, 3) == 1 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 6, 3, 5) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_busy_fields(board, 6) == 4 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 6, 1, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 6, 5) == 1 
assert gamma_busy_fields(board, 6) == 6 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 0 


board342053226 = gamma_board(board)
assert board342053226 is not None
assert board342053226 == ("..2.14..\n"
"24.35..6\n"
"..462266\n"
"112....3\n"
".552.511\n"
"56151...\n"
"53.2.4..\n"
"6..3...1\n")
del board342053226
board342053226 = None
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_free_fields(board, 5) == 7 
assert gamma_move(board, 6, 4, 6) == 0 
assert gamma_free_fields(board, 6) == 26 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_golden_move(board, 2, 3, 1) == 0 


board904011772 = gamma_board(board)
assert board904011772 is not None
assert board904011772 == ("..2.14..\n"
"24.35..6\n"
"2.462266\n"
"1125...3\n"
".552.511\n"
"56151...\n"
"53.254..\n"
"6..3...1\n")
del board904011772
board904011772 = None
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_golden_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_busy_fields(board, 5) == 8 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_golden_move(board, 6, 6, 0) == 0 
assert gamma_move(board, 1, 6, 4) == 1 
assert gamma_move(board, 1, 1, 7) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 6, 2) == 1 
assert gamma_busy_fields(board, 5) == 8 
assert gamma_free_fields(board, 5) == 6 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 7, 5) == 0 
assert gamma_move(board, 6, 7, 0) == 0 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_free_fields(board, 2) == 18 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 5, 1, 7) == 0 
assert gamma_move(board, 6, 7, 6) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_free_fields(board, 2) == 18 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 2, 7) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_busy_fields(board, 5) == 8 
assert gamma_move(board, 6, 2, 7) == 0 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 6, 1) == 1 


board688615061 = gamma_board(board)
assert board688615061 is not None
assert board688615061 == (".12.14..\n"
"24235..6\n"
"2.462266\n"
"11252.13\n"
"13523511\n"
"56151.4.\n"
"5362542.\n"
"64.3...1\n")
del board688615061
board688615061 = None
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 3, 7) == 1 
assert gamma_move(board, 4, 7, 7) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_golden_move(board, 5, 1, 2) == 1 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 7, 7) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 4, 7, 6) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 6, 0, 6) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_free_fields(board, 6) == 13 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 6, 4, 5) == 0 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 7, 6) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 6, 7, 0) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 5, 6, 6) == 0 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 6, 6, 5) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_free_fields(board, 2) == 6 


gamma_delete(board)
