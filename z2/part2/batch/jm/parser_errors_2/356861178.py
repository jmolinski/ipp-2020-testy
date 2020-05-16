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
uuid: 356861178
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 3, 1)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 


board701262225 = gamma_board(board)
assert board701262225 is not None
assert board701262225 == ("3.2\n"
".22\n"
"..1\n")
del board701262225
board701262225 = None
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 


board849162927 = gamma_board(board)
assert board849162927 is not None
assert board849162927 == ("3.2\n"
"222\n"
"..1\n")
del board849162927
board849162927 = None
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 


gamma_delete(board)