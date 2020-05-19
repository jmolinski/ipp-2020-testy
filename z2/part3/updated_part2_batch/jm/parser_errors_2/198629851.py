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
uuid: 198629851
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1
assert gamma_free_fields(board, 1) == 15
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 3, 3, 1) == 1
assert gamma_move(board, 4, 0, 3) == 1
assert gamma_free_fields(board, 4) == 12
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 0, 0) == 1
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 3, 3) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 3, 2) == 1
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 4, 1, 1) == 1
assert gamma_move(board, 4, 0, 0) == 0
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_free_fields(board, 4) == 4
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 3, 3) == 0
assert gamma_free_fields(board, 2) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 4, 2, 0) == 0
assert gamma_move(board, 4, 1, 1) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 4, 0, 3) == 0
assert gamma_move(board, 4, 0, 3) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_busy_fields(board, 1) == 4
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 4, 3, 3) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 3, 1) == 0


board612186021 = gamma_board(board)
assert board612186021 is not None
assert board612186021 == ("4.12\n" "..12\n" ".423\n" "311.\n")
del board612186021
board612186021 = None
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_busy_fields(board, 3) == 2
assert gamma_move(board, 4, 0, 0) == 0


gamma_delete(board)
