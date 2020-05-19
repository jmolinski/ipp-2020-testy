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
uuid: 226171178
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 2, 3)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_busy_fields(board, 2) == 3
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_busy_fields(board, 1) == 3
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_busy_fields(board, 2) == 5
assert gamma_golden_possible(board, 2) == 1


board255575207 = gamma_board(board)
assert board255575207 is not None
assert board255575207 == ("112\n" "222\n" "12.\n")
del board255575207
board255575207 = None
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_free_fields(board, 1) == 1
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_free_fields(board, 1) == 1
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_busy_fields(board, 2) == 5
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_busy_fields(board, 2) == 5


board426797504 = gamma_board(board)
assert board426797504 is not None
assert board426797504 == ("112\n" "222\n" "12.\n")
del board426797504
board426797504 = None


gamma_delete(board)
