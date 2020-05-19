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
uuid: 185577748
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 3, 1)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 3, 2, 0) == 1
assert gamma_move(board, 3, 3, 0) == 1
assert gamma_free_fields(board, 3) == 3
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 2, 1) == 1
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_free_fields(board, 3) == 2


board925373165 = gamma_board(board)
assert board925373165 is not None
assert board925373165 == ("123.\n" "1.33\n")
del board925373165
board925373165 = None
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_busy_fields(board, 1) == 2


gamma_delete(board)
