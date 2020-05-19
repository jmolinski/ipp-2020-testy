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
uuid: 798713335
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 4)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 


board674509209 = gamma_board(board)
assert board674509209 is not None
assert board674509209 == (".2123\n"
"2243.\n"
"2211.\n"
"14.1.\n")
del board674509209
board674509209 = None
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 


board645669677 = gamma_board(board)
assert board645669677 is not None
assert board645669677 == (".2123\n"
"2243.\n"
"2211.\n"
"14.1.\n")
del board645669677
board645669677 = None
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 


gamma_delete(board)
