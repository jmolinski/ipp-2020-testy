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
uuid: 413957298
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 5, 4)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_free_fields(board, 3) == 21 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_golden_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 


board841668664 = gamma_board(board)
assert board841668664 is not None
assert board841668664 == ("25333\n"
"44134\n"
"42233\n"
"32.23\n"
"1551.\n")
del board841668664
board841668664 = None
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 5, 0, 0) == 0 


gamma_delete(board)
