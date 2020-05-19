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
uuid: 393859762
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 4)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 1, 0, 3) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 2, 3, 1) == 1
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 3, 3, 0) == 1
assert gamma_move(board, 4, 0, 2) == 1
assert gamma_move(board, 4, 1, 3) == 1
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_busy_fields(board, 1) == 3
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 3, 2, 2) == 0
assert gamma_busy_fields(board, 4) == 2
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0


board947832388 = gamma_board(board)
assert board947832388 is not None
assert board947832388 == ("141.\n" "412.\n" "...2\n" ".213\n")
del board947832388
board947832388 = None
assert gamma_move(board, 3, 3, 3) == 1
assert gamma_move(board, 3, 2, 2) == 0
assert gamma_move(board, 4, 1, 0) == 0
assert gamma_move(board, 4, 0, 2) == 0
assert gamma_busy_fields(board, 4) == 2
assert gamma_golden_possible(board, 4) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_golden_move(board, 2, 3, 2) == 0
assert gamma_move(board, 3, 2, 1) == 1
assert gamma_move(board, 4, 1, 0) == 0
assert gamma_busy_fields(board, 4) == 2
assert gamma_free_fields(board, 4) == 3
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 2, 3) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_free_fields(board, 1) == 0
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_golden_possible(board, 4) == 1
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_free_fields(board, 1) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_busy_fields(board, 2) == 6
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 3, 3, 2) == 1
assert gamma_move(board, 4, 3, 2) == 0
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_busy_fields(board, 4) == 2
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_busy_fields(board, 1) == 4
assert gamma_move(board, 2, 1, 0) == 0


board501076920 = gamma_board(board)
assert board501076920 is not None
assert board501076920 == ("1413\n" "4123\n" "2232\n" "2213\n")
del board501076920
board501076920 = None
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 4, 0, 2) == 0


gamma_delete(board)
