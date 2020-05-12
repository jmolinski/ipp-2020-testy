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
uuid: 929868067
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 5, 4)
assert board is not None


assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_free_fields(board, 4) == 30 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 4, 1, 6) == 1 
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_free_fields(board, 1) == 22 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 2, 1) == 0 


board227072375 = gamma_board(board)
assert board227072375 is not None
assert board227072375 == (".4.31\n"
".43..\n"
"431.5\n"
"1.2..\n"
"..2..\n"
".213.\n"
"..4..\n")
del board227072375
board227072375 = None
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 2, 6) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 


board174493415 = gamma_board(board)
assert board174493415 is not None
assert board174493415 == (".4531\n"
"5433.\n"
"431.5\n"
"1.2.4\n"
"2.2..\n"
".213.\n"
"3.4..\n")
del board174493415
board174493415 = None
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 0, 6) == 1 
assert gamma_free_fields(board, 5) == 12 
assert gamma_move(board, 1, 0, 3) == 0 


board869087502 = gamma_board(board)
assert board869087502 is not None
assert board869087502 == ("54531\n"
"5433.\n"
"431.5\n"
"1.2.4\n"
"2.2..\n"
".213.\n"
"3.4..\n")
del board869087502
board869087502 = None
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_golden_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 0, 6) == 0 


board498483877 = gamma_board(board)
assert board498483877 is not None
assert board498483877 == ("54531\n"
"5433.\n"
"431.5\n"
"1.2.4\n"
"2.2..\n"
"5213.\n"
"3.4..\n")
del board498483877
board498483877 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_free_fields(board, 4) == 4 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_busy_fields(board, 5) == 5 


gamma_delete(board)
