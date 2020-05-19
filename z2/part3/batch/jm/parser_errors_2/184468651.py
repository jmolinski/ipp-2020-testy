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
uuid: 184468651
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 16)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_busy_fields(board, 1) == 2
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 1, 3, 2) == 1
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_free_fields(board, 1) == 16
assert gamma_move(board, 2, 4, 0) == 0
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 3, 1) == 0


board669046357 = gamma_board(board)
assert board669046357 is not None
assert board669046357 == ("....\n" "...2\n" ".1.1\n" ".2.1\n" ".1..\n")
del board669046357
board669046357 = None
assert gamma_move(board, 2, 3, 2) == 0
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_free_fields(board, 1) == 13
assert gamma_busy_fields(board, 2) == 3
assert gamma_move(board, 1, 1, 2) == 0


board899034678 = gamma_board(board)
assert board899034678 is not None
assert board899034678 == ("....\n" "...2\n" ".121\n" ".2.1\n" ".1..\n")
del board899034678
board899034678 = None
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 2, 3, 0) == 1
assert gamma_move(board, 2, 3, 3) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_busy_fields(board, 1) == 4
assert gamma_free_fields(board, 1) == 12
assert gamma_move(board, 2, 0, 4) == 1
assert gamma_move(board, 1, 0, 3) == 1
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_free_fields(board, 2) == 10
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 1, 0, 2) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_golden_move(board, 2, 1, 3) == 0
assert gamma_move(board, 1, 3, 3) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 3, 4) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 1, 1, 3) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_busy_fields(board, 1) == 7
assert gamma_free_fields(board, 1) == 7
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_busy_fields(board, 2) == 6
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 2, 2, 3) == 1
assert gamma_free_fields(board, 2) == 4
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0


gamma_delete(board)
