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
uuid: 919278724
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 2, 3)
assert board is not None


assert gamma_golden_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 0 


board524850340 = gamma_board(board)
assert board524850340 is not None
assert board524850340 == (".122\n"
".2..\n"
"..2.\n")
del board524850340
board524850340 = None
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 


board921746403 = gamma_board(board)
assert board921746403 is not None
assert board921746403 == ("1122\n"
"22.2\n"
"2221\n")
del board921746403
board921746403 = None


gamma_delete(board)
