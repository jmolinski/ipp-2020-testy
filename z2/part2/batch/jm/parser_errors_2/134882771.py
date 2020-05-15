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
uuid: 134882771
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 2, 5)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 1 


board384275450 = gamma_board(board)
assert board384275450 is not None
assert board384275450 == ("1.\n"
"12\n"
".1\n")
del board384275450
board384275450 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 


gamma_delete(board)
