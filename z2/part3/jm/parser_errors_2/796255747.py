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
uuid: 796255747
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 11)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_busy_fields(board, 1) == 1 


board106482547 = gamma_board(board)
assert board106482547 is not None
assert board106482547 == (".....\n"
".....\n"
".....\n"
"....1\n"
".....\n")
del board106482547
board106482547 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 6 


gamma_delete(board)
