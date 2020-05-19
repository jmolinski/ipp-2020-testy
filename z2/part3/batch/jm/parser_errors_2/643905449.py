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
uuid: 643905449
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 


board168524622 = gamma_board(board)
assert board168524622 is not None
assert board168524622 == ("3..\n"
"312\n")
del board168524622
board168524622 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 1 


board838035184 = gamma_board(board)
assert board838035184 is not None
assert board838035184 == ("3..\n"
"312\n")
del board838035184
board838035184 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 0 


gamma_delete(board)