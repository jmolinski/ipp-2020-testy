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
uuid: 816030435
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 10)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 


board500619133 = gamma_board(board)
assert board500619133 is not None
assert board500619133 == ("21.32\n"
"2313.\n"
".1311\n"
"32...\n")
del board500619133
board500619133 = None
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 


gamma_delete(board)
