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
uuid: 312312346
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 1)
assert board is not None


assert gamma_move(board, 1, 4, 4) == 1
assert gamma_move(board, 2, 4, 0) == 1
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_golden_move(board, 2, 4, 4) == 0
assert gamma_move(board, 3, 1, 0) == 1
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_golden_move(board, 3, 0, 4) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 3, 2, 3) == 0


board943187605 = gamma_board(board)
assert board943187605 is not None
assert board943187605 == ("....1\n" ".....\n" ".....\n" ".....\n" ".3..2\n")
del board943187605
board943187605 = None
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 4, 3) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_golden_move(board, 1, 0, 4) == 0
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_busy_fields(board, 3) == 1
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_move(board, 3, 3, 3) == 0
assert gamma_busy_fields(board, 3) == 1
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 2, 3, 3) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 4, 1) == 1
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 1, 3, 3) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 2, 3, 0) == 1
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 3, 2, 4) == 0
assert gamma_busy_fields(board, 3) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_busy_fields(board, 2) == 3
assert gamma_free_fields(board, 2) == 3
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_golden_possible(board, 3) == 1


board485886792 = gamma_board(board)
assert board485886792 is not None
assert board485886792 == ("....1\n" "...11\n" ".....\n" "....2\n" ".3.22\n")
del board485886792
board485886792 = None
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_golden_move(board, 1, 0, 3) == 0


board680371109 = gamma_board(board)
assert board680371109 is not None
assert board680371109 == ("....1\n" "...11\n" ".....\n" "....2\n" ".3.22\n")
del board680371109
board680371109 = None
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 3, 4, 0) == 0


board152034590 = gamma_board(board)
assert board152034590 is not None
assert board152034590 == ("....1\n" "...11\n" ".....\n" "....2\n" ".3.22\n")
del board152034590
board152034590 = None
assert gamma_move(board, 1, 3, 3) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 3, 4, 0) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_free_fields(board, 1) == 4
assert gamma_move(board, 2, 4, 0) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 2, 2, 4) == 0


gamma_delete(board)
