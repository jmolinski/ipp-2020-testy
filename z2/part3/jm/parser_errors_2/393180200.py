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
uuid: 393180200
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 3, 2)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1
assert gamma_golden_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 1, 0, 0) == 0


board694664058 = gamma_board(board)
assert board694664058 is not None
assert board694664058 == ("..\n" "..\n" "..\n" ".1\n" "1.\n")
del board694664058
board694664058 = None
assert gamma_move(board, 2, 1, 3) == 1
assert gamma_move(board, 3, 0, 1) == 1
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_busy_fields(board, 3) == 1
assert gamma_free_fields(board, 3) == 6
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 2, 4, 0) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 3, 0, 1) == 0


board122275485 = gamma_board(board)
assert board122275485 is not None
assert board122275485 == ("..\n" ".2\n" ".1\n" "31\n" "1.\n")
del board122275485
board122275485 = None
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_free_fields(board, 3) == 5
assert gamma_golden_move(board, 3, 2, 1) == 0
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 4, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 0, 2) == 1


gamma_delete(board)
