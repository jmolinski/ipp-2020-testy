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
uuid: 831817134
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 6, 5)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 6, 4, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 4, 2) == 1 


board601917423 = gamma_board(board)
assert board601917423 is not None
assert board601917423 == (".2..5\n"
"13..1\n"
".4.33\n"
".1..5\n"
"....2\n")
del board601917423
board601917423 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 6, 0, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_free_fields(board, 4) == 9 


board343354122 = gamma_board(board)
assert board343354122 is not None
assert board343354122 == (".2..5\n"
"13..1\n"
".4333\n"
".1.45\n"
"651.2\n")
del board343354122
board343354122 = None
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_golden_move(board, 5, 4, 2) == 1 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_golden_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 6, 4, 2) == 0 


board905899736 = gamma_board(board)
assert board905899736 is not None
assert board905899736 == (".21.5\n"
"13361\n"
"54335\n"
".1.45\n"
"65122\n")
del board905899736
board905899736 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_golden_possible(board, 3) == 1 


board613797451 = gamma_board(board)
assert board613797451 is not None
assert board613797451 == (".21.5\n"
"13361\n"
"54335\n"
".1.45\n"
"65122\n")
del board613797451
board613797451 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_free_fields(board, 4) == 4 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 


gamma_delete(board)
