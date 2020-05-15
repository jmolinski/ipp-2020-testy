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
uuid: 854035737
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 3, 4)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 


board739001101 = gamma_board(board)
assert board739001101 is not None
assert board739001101 == ("31\n"
"1.\n"
"..\n"
".1\n"
"11\n")
del board739001101
board739001101 = None
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 1 


gamma_delete(board)
