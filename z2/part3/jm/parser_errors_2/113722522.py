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
uuid: 113722522
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 3, 3)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 2, 0, 3) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 3, 1, 1) == 1
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_golden_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_golden_move(board, 2, 0, 0) == 1
assert gamma_move(board, 3, 2, 0) == 0
assert gamma_free_fields(board, 3) == 5
assert gamma_golden_move(board, 3, 2, 2) == 1


board955365480 = gamma_board(board)
assert board955365480 is not None
assert board955365480 == ("2..\n" "..3\n" ".12\n" "221\n")
del board955365480
board955365480 = None
assert gamma_move(board, 1, 1, 3) == 1
assert gamma_busy_fields(board, 1) == 3
assert gamma_golden_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_busy_fields(board, 1) == 3
assert gamma_free_fields(board, 1) == 3
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_free_fields(board, 1) == 3
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 3, 0, 2) == 1
assert gamma_golden_move(board, 3, 0, 2) == 0
assert gamma_move(board, 2, 3, 2) == 0
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 3, 1, 1) == 0


gamma_delete(board)
