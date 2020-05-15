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
uuid: 158698348
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 7)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 0 


board413242309 = gamma_board(board)
assert board413242309 is not None
assert board413242309 == ("..132\n"
"2211.\n"
".....\n")
del board413242309
board413242309 = None
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_golden_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_golden_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_free_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 7 


board793231563 = gamma_board(board)
assert board793231563 is not None
assert board793231563 == ("22132\n"
"22111\n"
"223.3\n")
del board793231563
board793231563 = None
assert gamma_move(board, 3, 0, 1) == 0 


gamma_delete(board)
