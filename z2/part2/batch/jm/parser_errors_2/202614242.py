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
uuid: 202614242
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


board826264874 = gamma_board(board)
assert board826264874 is not None
assert board826264874 == (".4\n"
"..\n"
"21\n")
del board826264874
board826264874 = None
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 1 


gamma_delete(board)
