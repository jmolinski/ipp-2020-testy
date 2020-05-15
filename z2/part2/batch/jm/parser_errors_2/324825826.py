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
uuid: 324825826
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 4, 2)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 


board792442366 = gamma_board(board)
assert board792442366 is not None
assert board792442366 == (".1.\n"
"1..\n")
del board792442366
board792442366 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_busy_fields(board, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 


board434987198 = gamma_board(board)
assert board434987198 is not None
assert board434987198 == ("31.\n"
"12.\n")
del board434987198
board434987198 = None


gamma_delete(board)
