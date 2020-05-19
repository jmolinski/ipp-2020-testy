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
uuid: 513412216
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 2)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_golden_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 1 


board347118070 = gamma_board(board)
assert board347118070 is not None
assert board347118070 == ("..1\n"
"..2\n"
".21\n"
"422\n"
"434\n")
del board347118070
board347118070 = None
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 


gamma_delete(board)
