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
uuid: 874266124
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 4, 1)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 


board996249633 = gamma_board(board)
assert board996249633 is not None
assert board996249633 == ("..\n"
"..\n"
"1.\n"
".3\n"
".4\n")
del board996249633
board996249633 = None
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 


board190207093 = gamma_board(board)
assert board190207093 is not None
assert board190207093 == ("..\n"
"..\n"
"1.\n"
".3\n"
"24\n")
del board190207093
board190207093 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 


gamma_delete(board)
