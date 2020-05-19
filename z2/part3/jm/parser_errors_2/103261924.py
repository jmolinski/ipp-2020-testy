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
uuid: 103261924
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 1)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_busy_fields(board, 1) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 3, 3, 0) == 1
assert gamma_busy_fields(board, 3) == 1
assert gamma_free_fields(board, 1) == 3
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_busy_fields(board, 2) == 2
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_free_fields(board, 3) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 4, 1) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_busy_fields(board, 3) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 3, 2, 4) == 0
assert gamma_free_fields(board, 3) == 1
assert gamma_move(board, 1, 3, 2) == 1
assert gamma_move(board, 1, 4, 2) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 1, 4, 2) == 0
assert gamma_golden_move(board, 1, 0, 3) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_busy_fields(board, 3) == 1
assert gamma_free_fields(board, 3) == 1
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 3, 2, 0) == 0


board572461969 = gamma_board(board)
assert board572461969 is not None
assert board572461969 == ("..111\n" ".2.11\n" "2223.\n")
del board572461969
board572461969 = None
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_busy_fields(board, 1) == 5
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_free_fields(board, 2) == 3
assert gamma_move(board, 3, 1, 0) == 0


board921494096 = gamma_board(board)
assert board921494096 is not None
assert board921494096 == ("..111\n" ".2.11\n" "2223.\n")
del board921494096
board921494096 = None


gamma_delete(board)
