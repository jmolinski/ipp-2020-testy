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
uuid: 716279569
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 6)
assert board is not None


assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_free_fields(board, 3) == 2 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 3) == 0 


board800931685 = gamma_board(board)
assert board800931685 is not None
assert board800931685 == ("42214\n"
"42311\n"
".11.4\n"
"23343\n")
del board800931685
board800931685 = None
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_busy_fields(board, 3) == 4 


board192685406 = gamma_board(board)
assert board192685406 is not None
assert board192685406 == ("42214\n"
"42311\n"
".11.4\n"
"23313\n")
del board192685406
board192685406 = None
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 


gamma_delete(board)
