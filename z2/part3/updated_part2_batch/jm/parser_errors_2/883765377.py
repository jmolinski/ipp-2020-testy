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
uuid: 883765377
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 4, 2)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 


board485539007 = gamma_board(board)
assert board485539007 is not None
assert board485539007 == ("1.\n"
".3\n"
"33\n"
"14\n"
"4.\n")
del board485539007
board485539007 = None
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 


gamma_delete(board)
