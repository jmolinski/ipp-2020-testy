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
uuid: 520244281
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 2, 3)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 1 


board306926009 = gamma_board(board)
assert board306926009 is not None
assert board306926009 == ("2112\n"
"21.1\n"
"2122\n")
del board306926009
board306926009 = None
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 1 


gamma_delete(board)
