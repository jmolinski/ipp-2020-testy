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
uuid: 840173077
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 2, 2, 3)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 


board865766762 = gamma_board(board)
assert board865766762 is not None
assert board865766762 == ("11\n"
"22\n")
del board865766762
board865766762 = None
assert gamma_move(board, 2, 1, 1) == 0 


gamma_delete(board)
