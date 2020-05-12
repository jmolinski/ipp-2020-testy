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
uuid: 655792056
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 6, 4, 3)
assert board is not None


assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 2, 1) == 1 


board883318880 = gamma_board(board)
assert board883318880 is not None
assert board883318880 == ("....\n"
"....\n"
"...1\n"
"..2.\n"
".44.\n"
".2..\n")
del board883318880
board883318880 = None
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_golden_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_golden_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_golden_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 0 


gamma_delete(board)
