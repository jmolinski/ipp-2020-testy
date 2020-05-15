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
uuid: 390555244
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 5)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_golden_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_golden_possible(board, 3) == 1 


board393503280 = gamma_board(board)
assert board393503280 is not None
assert board393503280 == (".13\n"
"321\n"
"..2\n"
".21\n"
"322\n")
del board393503280
board393503280 = None


gamma_delete(board)
