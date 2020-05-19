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
uuid: 125359744
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 4, 4)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 1, 0, 2) == 1
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 3, 0, 0) == 1
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_free_fields(board, 2) == 8
assert gamma_move(board, 3, 1, 1) == 1
assert gamma_move(board, 3, 0, 1) == 1
assert gamma_busy_fields(board, 3) == 3
assert gamma_move(board, 4, 2, 2) == 1
assert gamma_move(board, 4, 2, 0) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 2, 0, 1) == 0


board860826090 = gamma_board(board)
assert board860826090 is not None
assert board860826090 == ("..1\n" "114\n" "33.\n" "324\n")
del board860826090
board860826090 = None
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 0, 3) == 1
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_move(board, 4, 1, 1) == 0
assert gamma_golden_possible(board, 4) == 1


board371322770 = gamma_board(board)
assert board371322770 is not None
assert board371322770 == ("3.1\n" "114\n" "33.\n" "324\n")
del board371322770
board371322770 = None
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_move(board, 4, 2, 3) == 0
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_move(board, 4, 0, 3) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_free_fields(board, 1) == 2
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_busy_fields(board, 3) == 4
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 1, 3) == 1
assert gamma_move(board, 4, 1, 3) == 0


gamma_delete(board)
