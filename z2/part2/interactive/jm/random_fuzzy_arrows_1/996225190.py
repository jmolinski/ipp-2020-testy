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
uuid: 996225190
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 5, 5)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_free_fields(board, 5) == 14 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 


board963775519 = gamma_board(board)
assert board963775519 is not None
assert board963775519 == (".4...\n"
".231.\n"
"42...\n"
"1..14\n")
del board963775519
board963775519 = None
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_free_fields(board, 5) == 9 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_golden_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 3, 2) == 0 


gamma_delete(board)
