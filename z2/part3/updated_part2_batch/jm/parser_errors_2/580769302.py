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
uuid: 580769302
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 9)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_free_fields(board, 2) == 22 
assert gamma_golden_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_free_fields(board, 1) == 18 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 1 


board227679663 = gamma_board(board)
assert board227679663 is not None
assert board227679663 == ("..1..\n"
"..12.\n"
"..1.1\n"
"1222.\n"
"...1.\n")
del board227679663
board227679663 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 


board740281515 = gamma_board(board)
assert board740281515 is not None
assert board740281515 == (".21..\n"
".212.\n"
"2.1.1\n"
"1222.\n"
"...1.\n")
del board740281515
board740281515 = None
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_golden_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_golden_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_golden_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


gamma_delete(board)
