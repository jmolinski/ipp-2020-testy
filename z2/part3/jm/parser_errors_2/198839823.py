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
uuid: 198839823
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 4, 1)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 3, 1, 3) == 1
assert gamma_move(board, 4, 1, 1) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 4, 1, 0) == 0


board334281208 = gamma_board(board)
assert board334281208 is not None
assert board334281208 == (".3\n" ".1\n" ".4\n" ".2\n")
del board334281208
board334281208 = None
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_free_fields(board, 2) == 1
assert gamma_move(board, 3, 2, 0) == 0
assert gamma_move(board, 4, 2, 0) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_busy_fields(board, 4) == 1


gamma_delete(board)
