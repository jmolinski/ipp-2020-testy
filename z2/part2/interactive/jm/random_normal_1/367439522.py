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
uuid: 367439522
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 5, 6, 2)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_golden_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 6, 1, 1) == 1 
assert gamma_move(board, 6, 5, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 5, 0) == 1 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_golden_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 2) == 0 


board636433993 = gamma_board(board)
assert board636433993 is not None
assert board636433993 == (".2...6\n"
"1..43.\n"
"24433.\n"
".66...\n"
"1..555\n")
del board636433993
board636433993 = None
assert gamma_move(board, 5, 3, 2) == 0 


board131196582 = gamma_board(board)
assert board131196582 is not None
assert board131196582 == (".2...6\n"
"1..43.\n"
"24433.\n"
".66...\n"
"1..555\n")
del board131196582
board131196582 = None
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 0) == 0 


board144005725 = gamma_board(board)
assert board144005725 is not None
assert board144005725 == (".2...6\n"
"14.43.\n"
"24433.\n"
".66...\n"
"11.555\n")
del board144005725
board144005725 = None
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_golden_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 6, 4, 4) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 4 


board890831747 = gamma_board(board)
assert board890831747 is not None
assert board890831747 == ("52..66\n"
"14.43.\n"
"24433.\n"
".66...\n"
"11.355\n")
del board890831747
board890831747 = None
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 5, 5, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 6, 2, 2) == 0 


gamma_delete(board)
