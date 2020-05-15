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
uuid: 594676353
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 4, 3)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 0 


board410220159 = gamma_board(board)
assert board410220159 is not None
assert board410220159 == ("3...\n"
".31.\n"
".22.\n")
del board410220159
board410220159 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 0 


gamma_delete(board)
