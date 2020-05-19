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
uuid: 516830504
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 4)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 


board790892851 = gamma_board(board)
assert board790892851 is not None
assert board790892851 == ("241..\n"
"22..3\n"
"..1..\n")
del board790892851
board790892851 = None
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 1 


board440158652 = gamma_board(board)
assert board440158652 is not None
assert board440158652 == ("2413.\n"
"221.3\n"
"3.1.2\n")
del board440158652
board440158652 = None
assert gamma_move(board, 2, 1, 1) == 0 


gamma_delete(board)
