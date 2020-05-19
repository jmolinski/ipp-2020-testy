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
uuid: 153524366
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 2, 10)
assert board is not None


assert gamma_move(board, 2, 3, 1) == 1
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_busy_fields(board, 2) == 2


board379398975 = gamma_board(board)
assert board379398975 is not None
assert board379398975 == (".1..\n" "...2\n" ".12.\n")
del board379398975
board379398975 = None
assert gamma_move(board, 1, 3, 0) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_busy_fields(board, 2) == 3
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_busy_fields(board, 1) == 3
assert gamma_golden_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_busy_fields(board, 1) == 5
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_free_fields(board, 1) == 4
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_busy_fields(board, 2) == 2
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_busy_fields(board, 1) == 6


board629007109 = gamma_board(board)
assert board629007109 is not None
assert board629007109 == (".11.\n" ".1.2\n" "1121\n")
del board629007109
board629007109 = None
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_free_fields(board, 2) == 4
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_golden_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 2, 1, 1) == 0


gamma_delete(board)
