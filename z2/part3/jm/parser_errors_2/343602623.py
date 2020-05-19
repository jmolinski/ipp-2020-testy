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
uuid: 343602623
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 2, 1)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0


board877888539 = gamma_board(board)
assert board877888539 is not None
assert board877888539 == ("..1\n" "...\n")
del board877888539
board877888539 = None
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_golden_move(board, 2, 1, 2) == 0


board352935465 = gamma_board(board)
assert board352935465 is not None
assert board352935465 == ("..1\n" ".2.\n")
del board352935465
board352935465 = None
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 0, 1) == 0


gamma_delete(board)
