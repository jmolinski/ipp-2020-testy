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
uuid: 558199292
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 7)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_free_fields(board, 3) == 21 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_free_fields(board, 3) == 13 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_possible(board, 3) == 0 


board566127344 = gamma_board(board)
assert board566127344 is not None
assert board566127344 == (".3.13\n"
"3.3..\n"
"..1.1\n"
"2311.\n"
".2122\n")
del board566127344
board566127344 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 4 


board776013144 = gamma_board(board)
assert board776013144 is not None
assert board776013144 == ("13113\n"
"3.33.\n"
".11.1\n"
"23111\n"
"12122\n")
del board776013144
board776013144 = None
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 


gamma_delete(board)
