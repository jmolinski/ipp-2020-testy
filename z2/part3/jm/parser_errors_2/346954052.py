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
uuid: 346954052
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 3)
assert board is not None


assert gamma_move(board, 2, 1, 2) == 1
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 3, 0, 0) == 1
assert gamma_move(board, 3, 4, 1) == 1
assert gamma_move(board, 4, 2, 3) == 0
assert gamma_move(board, 4, 0, 1) == 1
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 2, 3, 0) == 1
assert gamma_free_fields(board, 3) == 8
assert gamma_move(board, 4, 2, 3) == 0
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_busy_fields(board, 1) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_move(board, 2, 4, 2) == 1
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_move(board, 4, 0, 1) == 0


board898158989 = gamma_board(board)
assert board898158989 is not None
assert board898158989 == (".22.2\n" "41..3\n" "3.22.\n")
del board898158989
board898158989 = None
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_free_fields(board, 2) == 6
assert gamma_move(board, 3, 3, 1) == 1
assert gamma_move(board, 4, 1, 1) == 0
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 0) == 0


board596397912 = gamma_board(board)
assert board596397912 is not None
assert board596397912 == (".22.2\n" "41.33\n" "3.22.\n")
del board596397912
board596397912 = None
assert gamma_move(board, 3, 2, 0) == 0
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 1, 1) == 0
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 4, 2) == 0
assert gamma_free_fields(board, 3) == 5
assert gamma_move(board, 4, 0, 4) == 0
assert gamma_move(board, 4, 3, 0) == 0


board580857843 = gamma_board(board)
assert board580857843 is not None
assert board580857843 == (".22.2\n" "41.33\n" "3.22.\n")
del board580857843
board580857843 = None
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 3, 0, 0) == 0
assert gamma_busy_fields(board, 3) == 3
assert gamma_move(board, 4, 0, 1) == 0


board208222562 = gamma_board(board)
assert board208222562 is not None
assert board208222562 == (".22.2\n" "41.33\n" "3.22.\n")
del board208222562
board208222562 = None
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 2, 0, 1) == 0


gamma_delete(board)
