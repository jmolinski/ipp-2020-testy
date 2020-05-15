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
uuid: 999282548
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 11)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


board488064873 = gamma_board(board)
assert board488064873 is not None
assert board488064873 == ("1122\n"
"1.2.\n"
".1.1\n"
".111\n")
del board488064873
board488064873 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 


gamma_delete(board)
