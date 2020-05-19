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
uuid: 384490608
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 3, 9)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_move(board, 3, 1, 0) == 1
assert gamma_move(board, 3, 2, 4) == 1


board915644020 = gamma_board(board)
assert board915644020 is not None
assert board915644020 == ("..3.\n" "....\n" "1...\n" "...1\n" ".3..\n")
del board915644020
board915644020 = None
assert gamma_move(board, 1, 0, 4) == 1
assert gamma_move(board, 1, 1, 4) == 1
assert gamma_move(board, 3, 2, 2) == 1
assert gamma_move(board, 3, 0, 0) == 1
assert gamma_golden_move(board, 3, 4, 1) == 0
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 3, 4) == 1
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_free_fields(board, 2) == 10
assert gamma_golden_move(board, 3, 3, 3) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 3, 2, 3) == 1


board365609422 = gamma_board(board)
assert board365609422 is not None
assert board365609422 == ("1132\n" "..32\n" "1.3.\n" ".1.1\n" "33..\n")
del board365609422
board365609422 = None
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_free_fields(board, 2) == 8
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 3, 3, 4) == 0
assert gamma_move(board, 1, 2, 1) == 1
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_busy_fields(board, 1) == 6
assert gamma_move(board, 2, 3, 0) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 3, 3) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_busy_fields(board, 3) == 5
assert gamma_golden_possible(board, 3) == 1
assert gamma_golden_move(board, 1, 4, 2) == 0
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 3, 3, 4) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_move(board, 3, 2, 4) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_busy_fields(board, 2) == 4
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 3, 3, 4) == 0
assert gamma_free_fields(board, 3) == 5
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 3, 2, 4) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 0, 3) == 1


board896472184 = gamma_board(board)
assert board896472184 is not None
assert board896472184 == ("1132\n" "2.32\n" "1.3.\n" "2111\n" "33.2\n")
del board896472184
board896472184 = None
assert gamma_move(board, 3, 1, 2) == 1
assert gamma_move(board, 3, 3, 4) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_free_fields(board, 1) == 2


gamma_delete(board)
