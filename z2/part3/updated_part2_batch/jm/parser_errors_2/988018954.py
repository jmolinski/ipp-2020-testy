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
uuid: 988018954
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 3, 3)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 1 


board194637881 = gamma_board(board)
assert board194637881 is not None
assert board194637881 == ("2...\n"
"....\n"
"..2.\n")
del board194637881
board194637881 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_golden_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 4 


board892019059 = gamma_board(board)
assert board892019059 is not None
assert board892019059 == ("2211\n"
".2..\n"
".211\n")
del board892019059
board892019059 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 


gamma_delete(board)
