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
uuid: 202075252
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 19)
assert board is not None


assert gamma_move(board, 1, 4, 0) == 0
assert gamma_move(board, 1, 3, 0) == 1
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 2, 2, 4) == 1
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 2, 3, 2) == 1
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_free_fields(board, 2) == 12
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_move(board, 1, 0, 2) == 1
assert gamma_move(board, 2, 4, 1) == 0
assert gamma_move(board, 1, 3, 4) == 1
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_busy_fields(board, 1) == 8
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 0, 4) == 1
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_free_fields(board, 1) == 5
assert gamma_move(board, 2, 2, 3) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_busy_fields(board, 1) == 8
assert gamma_free_fields(board, 1) == 4


board510687383 = gamma_board(board)
assert board510687383 is not None
assert board510687383 == ("2.21\n" "..22\n" "11.2\n" "1221\n" "1211\n")
del board510687383
board510687383 = None
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 2, 0, 3) == 1
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_busy_fields(board, 1) == 8
assert gamma_golden_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 2, 3, 3) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_busy_fields(board, 2) == 9
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 3, 1) == 0


board693086847 = gamma_board(board)
assert board693086847 is not None
assert board693086847 == ("2.21\n" "2.22\n" "1112\n" "1221\n" "1211\n")
del board693086847
board693086847 = None
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 2, 4, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_busy_fields(board, 1) == 9
assert gamma_move(board, 2, 1, 4) == 1
assert gamma_move(board, 2, 3, 1) == 0


board386672345 = gamma_board(board)
assert board386672345 is not None
assert board386672345 == ("2221\n" "2.22\n" "1112\n" "1221\n" "1211\n")
del board386672345
board386672345 = None
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_golden_move(board, 2, 0, 0) == 1
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_busy_fields(board, 1) == 8
assert gamma_golden_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 3, 1) == 0


gamma_delete(board)
