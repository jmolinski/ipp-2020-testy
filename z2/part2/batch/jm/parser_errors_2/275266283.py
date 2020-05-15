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
uuid: 275266283
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 10)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_free_fields(board, 2) == 5 
assert gamma_golden_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 


board425405244 = gamma_board(board)
assert board425405244 is not None
assert board425405244 == ("..21\n"
"1222\n"
"1122\n"
"22.2\n"
"1122\n")
del board425405244
board425405244 = None


gamma_delete(board)
