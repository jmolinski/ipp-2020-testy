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
uuid: 399900551
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 1, 1, 0) == 0


board125489733 = gamma_board(board)
assert board125489733 is not None
assert board125489733 == ("..\n" ".1\n")
del board125489733
board125489733 = None
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 4, 1, 1) == 1
assert gamma_busy_fields(board, 4) == 1
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_golden_possible(board, 1) == 1


board291062097 = gamma_board(board)
assert board291062097 is not None
assert board291062097 == (".4\n" "21\n")
del board291062097
board291062097 = None
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 3, 0, 0) == 0
assert gamma_move(board, 4, 1, 0) == 0


gamma_delete(board)
