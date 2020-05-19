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
uuid: 347284003
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 3, 1)
assert board is not None


assert gamma_move(board, 2, 3, 1) == 0
assert gamma_free_fields(board, 2) == 8
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 3, 0, 3) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_free_fields(board, 3) == 2
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_busy_fields(board, 3) == 1


board737781292 = gamma_board(board)
assert board737781292 is not None
assert board737781292 == ("3.\n" "..\n" "..\n" "12\n")
del board737781292
board737781292 = None
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_busy_fields(board, 1) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 1, 1, 3) == 0


board777684428 = gamma_board(board)
assert board777684428 is not None
assert board777684428 == ("3.\n" "..\n" "..\n" "12\n")
del board777684428
board777684428 = None


gamma_delete(board)
