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
uuid: 929248851
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 6, 1)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_golden_move(board, 2, 3, 1) == 0 


board315673456 = gamma_board(board)
assert board315673456 is not None
assert board315673456 == ("541.\n"
"33..\n"
"....\n"
".2..\n")
del board315673456
board315673456 = None
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_golden_possible(board, 6) == 1 


board792675866 = gamma_board(board)
assert board792675866 is not None
assert board792675866 == ("541.\n"
"336.\n"
".3..\n"
".2..\n")
del board792675866
board792675866 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_golden_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 0 


gamma_delete(board)
