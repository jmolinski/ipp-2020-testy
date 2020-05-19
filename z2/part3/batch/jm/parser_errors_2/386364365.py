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
uuid: 386364365
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 2, 3)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_move(board, 2, 1, 2) == 1
assert gamma_move(board, 2, 0, 2) == 1
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_busy_fields(board, 1) == 3
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 1, 1, 1) == 0


board826995740 = gamma_board(board)
assert board826995740 is not None
assert board826995740 == ("22\n" "11\n" "11\n")
del board826995740
board826995740 = None
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_busy_fields(board, 2) == 2
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 2, 1, 0) == 0


gamma_delete(board)
