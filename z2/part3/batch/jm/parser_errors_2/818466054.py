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
uuid: 818466054
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 3, 4)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 1 


board211625288 = gamma_board(board)
assert board211625288 is not None
assert board211625288 == ("121\n"
"...\n"
"113\n")
del board211625288
board211625288 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 3 


board520134392 = gamma_board(board)
assert board520134392 is not None
assert board520134392 == ("121\n"
"...\n"
"113\n")
del board520134392
board520134392 = None
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 


board427519876 = gamma_board(board)
assert board427519876 is not None
assert board427519876 == ("121\n"
"13.\n"
"113\n")
del board427519876
board427519876 = None


gamma_delete(board)
