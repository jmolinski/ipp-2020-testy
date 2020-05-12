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
uuid: 905158470
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 5, 1)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_golden_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 1 


board979161859 = gamma_board(board)
assert board979161859 is not None
assert board979161859 == ("22.4\n"
"..14\n"
"3.15\n"
"....\n")
del board979161859
board979161859 = None
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_free_fields(board, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_golden_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


gamma_delete(board)
