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
uuid: 356441068
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 4, 1)
assert board is not None


assert gamma_move(board, 2, 0, 2) == 1
assert gamma_move(board, 2, 0, 1) == 1


board970694896 = gamma_board(board)
assert board970694896 is not None
assert board970694896 == ("..\n" "2.\n" "2.\n" "..\n")
del board970694896
board970694896 = None
assert gamma_move(board, 4, 2, 1) == 0
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 4, 0, 0) == 1
assert gamma_move(board, 4, 0, 3) == 0
assert gamma_move(board, 2, 1, 2) == 1
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 4, 0, 0) == 0
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_busy_fields(board, 1) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_free_fields(board, 3) == 3
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_move(board, 4, 0, 1) == 0


gamma_delete(board)
