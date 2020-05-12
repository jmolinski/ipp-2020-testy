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
uuid: 533490159
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 3, 12)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 4, 1) == 1 


board957248996 = gamma_board(board)
assert board957248996 is not None
assert board957248996 == (".3...\n"
"..1..\n"
".31..\n"
"1....\n"
".....\n"
"..2.3\n"
"....1\n")
del board957248996
board957248996 = None
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_golden_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_golden_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 


board121511828 = gamma_board(board)
assert board121511828 is not None
assert board121511828 == ("33...\n"
".3112\n"
".3111\n"
"1.133\n"
"21...\n"
".1213\n"
"31231\n")
del board121511828
board121511828 = None
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 


board359700870 = gamma_board(board)
assert board359700870 is not None
assert board359700870 == ("33...\n"
".3112\n"
".3111\n"
"1.133\n"
"21.3.\n"
".1213\n"
"31231\n")
del board359700870
board359700870 = None
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_golden_possible(board, 1) == 0 


gamma_delete(board)
