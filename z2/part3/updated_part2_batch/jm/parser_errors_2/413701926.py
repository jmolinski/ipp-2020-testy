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
uuid: 413701926
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 2, 4)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 


board750553200 = gamma_board(board)
assert board750553200 is not None
assert board750553200 == ("1.\n"
"..\n"
"..\n"
"..\n")
del board750553200
board750553200 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 


board471621766 = gamma_board(board)
assert board471621766 is not None
assert board471621766 == ("1.\n"
"..\n"
".2\n"
"..\n")
del board471621766
board471621766 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 


gamma_delete(board)
