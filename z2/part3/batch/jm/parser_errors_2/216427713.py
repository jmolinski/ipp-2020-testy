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
uuid: 216427713
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 4, 3)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_move(board, 2, 2, 3) == 1
assert gamma_move(board, 3, 2, 0) == 0
assert gamma_move(board, 4, 4, 1) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 3, 3, 3) == 1
assert gamma_move(board, 3, 1, 2) == 1
assert gamma_move(board, 4, 2, 2) == 1
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 1, 1, 0) == 0


board205995092 = gamma_board(board)
assert board205995092 is not None
assert board205995092 == ("....\n" "..23\n" ".34.\n" "1..1\n" ".22.\n")
del board205995092
board205995092 = None
assert gamma_move(board, 2, 0, 3) == 1
assert gamma_move(board, 2, 1, 3) == 1
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_busy_fields(board, 3) == 2
assert gamma_move(board, 4, 4, 3) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_busy_fields(board, 2) == 5
assert gamma_move(board, 3, 4, 3) == 0
assert gamma_move(board, 4, 4, 1) == 0
assert gamma_move(board, 4, 0, 0) == 1
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 3, 4, 3) == 0
assert gamma_move(board, 4, 0, 0) == 0
assert gamma_golden_possible(board, 4) == 1
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_move(board, 4, 2, 3) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 4, 3) == 0
assert gamma_move(board, 2, 2, 4) == 1
assert gamma_move(board, 3, 4, 0) == 0
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 0, 4) == 1
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_free_fields(board, 3) == 6
assert gamma_move(board, 4, 3, 0) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 2, 4, 1) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 3, 3, 0) == 1
assert gamma_move(board, 4, 4, 1) == 0


board580339120 = gamma_board(board)
assert board580339120 is not None
assert board580339120 == ("4.2.\n" "2223\n" ".34.\n" "11.1\n" "4223\n")
del board580339120
board580339120 = None
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 3, 4, 1) == 0
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 1, 0) == 0
assert gamma_move(board, 4, 0, 2) == 0


gamma_delete(board)
