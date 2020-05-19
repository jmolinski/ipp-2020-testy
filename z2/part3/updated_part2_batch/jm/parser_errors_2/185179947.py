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
uuid: 185179947
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 2, 2, 2)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 2, 0, 1) == 1


board737265096 = gamma_board(board)
assert board737265096 is not None
assert board737265096 == ("2.\n" ".1\n")
del board737265096
board737265096 = None
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_free_fields(board, 2) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_golden_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 1) == 0


gamma_delete(board)