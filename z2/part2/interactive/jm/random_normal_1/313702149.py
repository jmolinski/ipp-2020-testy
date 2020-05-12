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
uuid: 313702149
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 4, 4)
assert board is not None


assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_golden_move(board, 3, 2, 5) == 0 


board399663336 = gamma_board(board)
assert board399663336 is not None
assert board399663336 == ("3.1.1..\n"
".......\n"
".....2.\n"
".......\n"
".......\n")
del board399663336
board399663336 = None
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_free_fields(board, 4) == 29 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 6, 2) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 6, 0) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_free_fields(board, 4) == 6 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_golden_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 


board189944603 = gamma_board(board)
assert board189944603 is not None
assert board189944603 == ("3112144\n"
"341.34.\n"
"..34.23\n"
"1333.12\n"
"..2...4\n")
del board189944603
board189944603 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_golden_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_golden_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_free_fields(board, 4) == 4 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 1) == 0 


gamma_delete(board)
