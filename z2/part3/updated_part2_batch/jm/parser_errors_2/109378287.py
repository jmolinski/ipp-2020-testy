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
uuid: 109378287
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 2, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 2, 3, 1) == 1
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_golden_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_golden_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 2, 0, 1) == 0


board313238713 = gamma_board(board)
assert board313238713 is not None
assert board313238713 == ("11.2\n" "11..\n")
del board313238713
board313238713 = None
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_busy_fields(board, 2) == 1


gamma_delete(board)
