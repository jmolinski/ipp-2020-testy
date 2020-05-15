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
uuid: 556971938
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 2, 6)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 13 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 


board275107504 = gamma_board(board)
assert board275107504 is not None
assert board275107504 == (".1...\n"
"....2\n"
".1...\n")
del board275107504
board275107504 = None
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
