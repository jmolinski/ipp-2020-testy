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
uuid: 867787617
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 6, 6)
assert board is not None


assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_golden_move(board, 3, 0, 3) == 1 


board842139905 = gamma_board(board)
assert board842139905 is not None
assert board842139905 == (".325.3.\n"
"3......\n"
".....3.\n"
".....1.\n"
"...51..\n")
del board842139905
board842139905 = None
assert gamma_move(board, 4, 5, 0) == 1 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_free_fields(board, 5) == 23 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 5, 1, 2) == 1 
assert gamma_move(board, 5, 6, 1) == 1 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 0, 1) == 1 


board248309203 = gamma_board(board)
assert board248309203 is not None
assert board248309203 == (".325.3.\n"
"3.5.2.2\n"
".53.23.\n"
"5..4.15\n"
"..5514.\n")
del board248309203
board248309203 = None
assert gamma_move(board, 6, 0, 6) == 0 
assert gamma_busy_fields(board, 6) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 6, 0) == 1 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_free_fields(board, 6) == 11 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 5, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_golden_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_golden_possible(board, 4) == 1 


gamma_delete(board)
