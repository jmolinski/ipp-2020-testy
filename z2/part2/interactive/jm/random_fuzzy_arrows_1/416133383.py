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
uuid: 416133383
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 5, 4, 13)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_golden_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 


board229852308 = gamma_board(board)
assert board229852308 is not None
assert board229852308 == (".2......\n"
"11....1.\n"
".41.2...\n"
".4..4...\n"
".2......\n")
del board229852308
board229852308 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_golden_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_free_fields(board, 3) == 25 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_free_fields(board, 3) == 19 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 3, 3, 0) == 0 


board982380107 = gamma_board(board)
assert board982380107 is not None
assert board982380107 == (".21431..\n"
"11.32.1.\n"
".4142.13\n"
"343.4.2.\n"
".2422...\n")
del board982380107
board982380107 = None
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 


board930247084 = gamma_board(board)
assert board930247084 is not None
assert board930247084 == (".21431..\n"
"11.32.1.\n"
".4142.13\n"
"343.4.2.\n"
".2422...\n")
del board930247084
board930247084 = None
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_free_fields(board, 3) == 15 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_free_fields(board, 4) == 15 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 7, 3) == 1 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 


gamma_delete(board)
