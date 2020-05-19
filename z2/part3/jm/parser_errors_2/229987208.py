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
uuid: 229987208
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 3, 0, 3) == 1
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_free_fields(board, 4) == 5
assert gamma_golden_possible(board, 4) == 1


board606380841 = gamma_board(board)
assert board606380841 is not None
assert board606380841 == ("3.\n" "..\n" "21\n" "..\n")
del board606380841
board606380841 = None
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 2, 0, 2) == 1
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_free_fields(board, 3) == 1
assert gamma_move(board, 4, 0, 1) == 0


board466852378 = gamma_board(board)
assert board466852378 is not None
assert board466852378 == ("3.\n" "2.\n" "21\n" "..\n")
del board466852378
board466852378 = None
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_golden_move(board, 3, 1, 0) == 0
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 1, 3) == 1
assert gamma_move(board, 4, 2, 1) == 0
assert gamma_busy_fields(board, 4) == 0
assert gamma_free_fields(board, 4) == 3


gamma_delete(board)
