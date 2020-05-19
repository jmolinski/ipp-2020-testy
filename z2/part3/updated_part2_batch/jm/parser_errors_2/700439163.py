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
uuid: 700439163
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 


board323111356 = gamma_board(board)
assert board323111356 is not None
assert board323111356 == ("4113\n"
"4213\n"
"4...\n")
del board323111356
board323111356 = None
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 


board308038155 = gamma_board(board)
assert board308038155 is not None
assert board308038155 == ("4113\n"
"4213\n"
"4...\n")
del board308038155
board308038155 = None
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_busy_fields(board, 4) == 3 


gamma_delete(board)
