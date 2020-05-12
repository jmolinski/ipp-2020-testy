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
uuid: 284311774
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 6, 1)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_free_fields(board, 6) == 3 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_free_fields(board, 6) == 4 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_golden_move(board, 6, 0, 2) == 0 


board451444552 = gamma_board(board)
assert board451444552 is not None
assert board451444552 == ("...2.\n"
"..611\n"
"..66.\n"
"4533.\n")
del board451444552
board451444552 = None
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_free_fields(board, 4) == 1 


gamma_delete(board)
