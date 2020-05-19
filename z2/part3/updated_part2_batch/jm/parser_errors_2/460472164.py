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
uuid: 460472164
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_golden_move(board, 3, 2, 1) == 0 


board935712766 = gamma_board(board)
assert board935712766 is not None
assert board935712766 == (".3\n"
".2\n"
".2\n"
".1\n"
"31\n")
del board935712766
board935712766 = None
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 1, 0) == 0 


gamma_delete(board)
