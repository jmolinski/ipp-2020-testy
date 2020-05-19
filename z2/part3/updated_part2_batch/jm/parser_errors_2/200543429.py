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
uuid: 200543429
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 3, 5)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 1, 3, 0) == 1
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 1, 0) == 1
assert gamma_free_fields(board, 3) == 7
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 1, 4, 1) == 1
assert gamma_golden_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_golden_move(board, 1, 0, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 1, 4, 0) == 1
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 3, 1) == 1
assert gamma_move(board, 3, 2, 0) == 1
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 1, 4, 0) == 0


board667167615 = gamma_board(board)
assert board667167615 is not None
assert board667167615 == ("22.21\n" "13311\n")
del board667167615
board667167615 = None
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_golden_move(board, 2, 0, 3) == 0


gamma_delete(board)
