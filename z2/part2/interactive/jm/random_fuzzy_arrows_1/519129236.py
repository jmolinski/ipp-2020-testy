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
uuid: 519129236
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 7, 5, 6)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 47 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_golden_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 5, 1, 6) == 1 
assert gamma_move(board, 5, 6, 5) == 1 
assert gamma_free_fields(board, 5) == 41 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 5, 6, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 5, 5) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_golden_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_golden_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 6, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 1, 5) == 1 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_free_fields(board, 1) == 6 


board305707395 = gamma_board(board)
assert board305707395 is not None
assert board305707395 == ("25..2.3\n"
".54.315\n"
".13.1..\n"
".113243\n"
".1332.5\n"
"1453142\n"
"5.51235\n")
del board305707395
board305707395 = None
assert gamma_move(board, 2, 4, 0) == 0 


board891981205 = gamma_board(board)
assert board891981205 is not None
assert board891981205 == ("25..2.3\n"
".54.315\n"
".13.1..\n"
".113243\n"
".1332.5\n"
"1453142\n"
"5.51235\n")
del board891981205
board891981205 = None
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_busy_fields(board, 5) == 8 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 6, 6) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 6, 4) == 1 


board208976882 = gamma_board(board)
assert board208976882 is not None
assert board208976882 == ("25..2.3\n"
".54.315\n"
".13.1.3\n"
"2113243\n"
".1332.5\n"
"1453142\n"
"5.51235\n")
del board208976882
board208976882 = None
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 6, 6) == 0 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 6 


board478929630 = gamma_board(board)
assert board478929630 is not None
assert board478929630 == ("25..2.3\n"
".54.315\n"
".13.113\n"
"2113243\n"
".1332.5\n"
"1453142\n"
"5.51235\n")
del board478929630
board478929630 = None
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 


gamma_delete(board)
