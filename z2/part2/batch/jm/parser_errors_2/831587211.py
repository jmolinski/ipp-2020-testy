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
uuid: 831587211
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 


board426095517 = gamma_board(board)
assert board426095517 is not None
assert board426095517 == ("3...\n"
"2...\n")
del board426095517
board426095517 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 


board388536543 = gamma_board(board)
assert board388536543 is not None
assert board388536543 == ("3...\n"
"2...\n")
del board388536543
board388536543 = None
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_busy_fields(board, 4) == 1 


gamma_delete(board)
