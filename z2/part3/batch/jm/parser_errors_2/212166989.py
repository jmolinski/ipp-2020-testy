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
uuid: 212166989
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 6)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 1, 1, 3) == 1
assert gamma_move(board, 1, 4, 1) == 1
assert gamma_move(board, 2, 3, 0) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_golden_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 4, 3) == 1
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 3, 3) == 0
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_golden_move(board, 2, 0, 0) == 1
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 1, 4, 3) == 0
assert gamma_free_fields(board, 1) == 8
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 4, 0) == 1
assert gamma_move(board, 2, 4, 2) == 1
assert gamma_move(board, 2, 3, 2) == 1
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_free_fields(board, 2) == 5
assert gamma_golden_possible(board, 2) == 0
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 1, 0, 3) == 1
assert gamma_move(board, 2, 1, 2) == 0


board452201627 = gamma_board(board)
assert board452201627 is not None
assert board452201627 == ("11122\n" ".1122\n" "21..1\n" "21221\n")
del board452201627
board452201627 = None
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_free_fields(board, 1) == 3
assert gamma_golden_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 3, 2) == 0
assert gamma_free_fields(board, 2) == 3
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_free_fields(board, 2) == 3
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 2, 0, 2) == 1
assert gamma_move(board, 1, 3, 3) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_free_fields(board, 2) == 2


gamma_delete(board)
