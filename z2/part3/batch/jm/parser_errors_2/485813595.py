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
uuid: 485813595
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 4 


board457777838 = gamma_board(board)
assert board457777838 is not None
assert board457777838 == (".1433\n"
"31.11\n")
del board457777838
board457777838 = None
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 


board153904700 = gamma_board(board)
assert board153904700 is not None
assert board153904700 == ("41433\n"
"31.11\n")
del board153904700
board153904700 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_free_fields(board, 4) == 1 


gamma_delete(board)
