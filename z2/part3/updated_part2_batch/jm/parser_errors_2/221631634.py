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
uuid: 221631634
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 2, 3)
assert board is not None


assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_busy_fields(board, 1) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_golden_possible(board, 2) == 1


board932792090 = gamma_board(board)
assert board932792090 is not None
assert board932792090 == ("222\n" "1.1\n")
del board932792090
board932792090 = None
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_busy_fields(board, 1) == 2
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_golden_possible(board, 2) == 1


gamma_delete(board)
