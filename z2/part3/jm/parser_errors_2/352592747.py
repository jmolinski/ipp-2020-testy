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
uuid: 352592747
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 8)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 1
assert gamma_move(board, 1, 0, 3) == 1
assert gamma_move(board, 2, 4, 4) == 1
assert gamma_move(board, 3, 2, 0) == 1
assert gamma_move(board, 4, 2, 3) == 1
assert gamma_move(board, 4, 3, 2) == 1
assert gamma_move(board, 1, 4, 1) == 1
assert gamma_move(board, 1, 3, 3) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 1, 2) == 1
assert gamma_move(board, 4, 2, 0) == 0
assert gamma_busy_fields(board, 4) == 2
assert gamma_golden_possible(board, 4) == 1
assert gamma_free_fields(board, 1) == 14
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 3, 0, 4) == 1
assert gamma_busy_fields(board, 3) == 3
assert gamma_busy_fields(board, 4) == 2
assert gamma_move(board, 1, 3, 4) == 1


board585913646 = gamma_board(board)
assert board585913646 is not None
assert board585913646 == ("3.112\n" "1.41.\n" ".3.4.\n" "2...1\n" ".23..\n")
del board585913646
board585913646 = None
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 3, 0, 0) == 1
assert gamma_move(board, 3, 4, 2) == 1
assert gamma_free_fields(board, 3) == 10
assert gamma_move(board, 4, 0, 3) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 1, 4, 2) == 0
assert gamma_golden_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_busy_fields(board, 2) == 3
assert gamma_golden_move(board, 2, 3, 2) == 1
assert gamma_move(board, 3, 4, 1) == 0
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 2, 3, 1) == 1
assert gamma_free_fields(board, 2) == 9
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 3, 2, 2) == 1
assert gamma_move(board, 4, 2, 0) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 1, 0, 2) == 1
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 3, 3) == 0
assert gamma_free_fields(board, 3) == 6
assert gamma_move(board, 4, 4, 1) == 0
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 3, 3, 4) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_move(board, 4, 2, 1) == 1
assert gamma_busy_fields(board, 4) == 2
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_golden_move(board, 2, 3, 2) == 0
assert gamma_move(board, 3, 3, 0) == 1


board528792186 = gamma_board(board)
assert board528792186 is not None
assert board528792186 == ("3.112\n" "1.41.\n" "13323\n" "22421\n" "3233.\n")
del board528792186
board528792186 = None
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_move(board, 4, 1, 1) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_busy_fields(board, 2) == 6
assert gamma_golden_possible(board, 2) == 0
assert gamma_move(board, 3, 4, 1) == 0
assert gamma_move(board, 4, 0, 4) == 0
assert gamma_free_fields(board, 4) == 4
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 1, 4) == 1
assert gamma_busy_fields(board, 1) == 7
assert gamma_free_fields(board, 1) == 3
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 3, 1, 3) == 1
assert gamma_move(board, 3, 4, 3) == 1
assert gamma_move(board, 4, 0, 4) == 0
assert gamma_move(board, 2, 0, 4) == 0


gamma_delete(board)
