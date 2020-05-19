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
uuid: 335121758
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 4, 3)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 1, 0, 2) == 1
assert gamma_busy_fields(board, 1) == 2
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 3, 0, 1) == 1
assert gamma_move(board, 4, 0, 0) == 1
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_free_fields(board, 4) == 4
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_move(board, 3, 1, 2) == 1
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_free_fields(board, 1) == 2
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 2, 0) == 1
assert gamma_move(board, 4, 0, 2) == 0


board724472370 = gamma_board(board)
assert board724472370 is not None
assert board724472370 == ("131\n" "32.\n" "413\n")
del board724472370
board724472370 = None
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 4, 0, 0) == 0
assert gamma_move(board, 4, 1, 0) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_golden_move(board, 2, 2, 0) == 1


board252815793 = gamma_board(board)
assert board252815793 is not None
assert board252815793 == ("131\n" "322\n" "412\n")
del board252815793
board252815793 = None


gamma_delete(board)
