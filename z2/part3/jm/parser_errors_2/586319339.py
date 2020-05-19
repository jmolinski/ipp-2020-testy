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
uuid: 586319339
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 3, 4)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 


board891230445 = gamma_board(board)
assert board891230445 is not None
assert board891230445 == ("....\n"
"....\n"
"....\n"
".1..\n")
del board891230445
board891230445 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 1 


board638932909 = gamma_board(board)
assert board638932909 is not None
assert board638932909 == ("3.3.\n"
"....\n"
"..2.\n"
".11.\n")
del board638932909
board638932909 = None
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 


gamma_delete(board)
