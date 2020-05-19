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
uuid: 549381831
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 2, 5)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 


board176292778 = gamma_board(board)
assert board176292778 is not None
assert board176292778 == ("..\n"
"..\n"
"1.\n")
del board176292778
board176292778 = None
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 1 


board759024663 = gamma_board(board)
assert board759024663 is not None
assert board759024663 == (".1\n"
"1.\n"
"11\n")
del board759024663
board759024663 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 


gamma_delete(board)
