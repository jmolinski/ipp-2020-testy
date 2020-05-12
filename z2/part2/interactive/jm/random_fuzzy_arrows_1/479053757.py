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
uuid: 479053757
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 6, 6, 3)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_golden_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 6, 0, 4) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 5, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 6, 3, 4) == 1 
assert gamma_busy_fields(board, 6) == 2 


board147781086 = gamma_board(board)
assert board147781086 is not None
assert board147781086 == (".2.5\n"
"6.46\n"
"4..5\n"
"3.34\n"
"32.2\n"
"31..\n")
del board147781086
board147781086 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_free_fields(board, 5) == 6 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_free_fields(board, 6) == 6 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 2, 1) == 0 


gamma_delete(board)
