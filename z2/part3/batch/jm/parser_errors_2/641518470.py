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
uuid: 641518470
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 13)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_golden_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 6 


board762475580 = gamma_board(board)
assert board762475580 is not None
assert board762475580 == ("12.1\n"
".1.2\n"
"22.1\n"
"1.21\n"
"2..1\n")
del board762475580
board762475580 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_busy_fields(board, 1) == 8 


board265484497 = gamma_board(board)
assert board265484497 is not None
assert board265484497 == ("1221\n"
".1.2\n"
"2221\n"
"1121\n"
"22.1\n")
del board265484497
board265484497 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 


gamma_delete(board)
