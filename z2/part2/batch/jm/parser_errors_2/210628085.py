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
uuid: 210628085
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 3, 4)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 1 


board661880068 = gamma_board(board)
assert board661880068 is not None
assert board661880068 == ("..2..\n"
"1..2.\n")
del board661880068
board661880068 = None
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 


board444351494 = gamma_board(board)
assert board444351494 is not None
assert board444351494 == ("312..\n"
"1232.\n")
del board444351494
board444351494 = None
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_golden_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_free_fields(board, 2) == 2 


gamma_delete(board)
