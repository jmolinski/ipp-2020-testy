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
uuid: 547735774
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 


board667227303 = gamma_board(board)
assert board667227303 is not None
assert board667227303 == (".42\n"
"221\n"
".1.\n"
"41.\n")
del board667227303
board667227303 = None


gamma_delete(board)
