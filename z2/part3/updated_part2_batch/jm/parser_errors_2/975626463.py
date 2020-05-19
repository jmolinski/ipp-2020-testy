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
uuid: 975626463
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 7)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 1 


board819068969 = gamma_board(board)
assert board819068969 is not None
assert board819068969 == ("...\n"
"1..\n"
"...\n"
"...\n"
"1..\n")
del board819068969
board819068969 = None
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 


board939860053 = gamma_board(board)
assert board939860053 is not None
assert board939860053 == ("112\n"
"1.2\n"
"331\n"
"212\n"
"113\n")
del board939860053
board939860053 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 


gamma_delete(board)
