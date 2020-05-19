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
uuid: 129194131
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 4)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_free_fields(board, 2) == 13


board695727242 = gamma_board(board)
assert board695727242 is not None
assert board695727242 == (".....\n" ".2...\n" "1....\n")
del board695727242
board695727242 = None
assert gamma_move(board, 3, 4, 2) == 1
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 1, 3, 2) == 1
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_free_fields(board, 2) == 7


board202944596 = gamma_board(board)
assert board202944596 is not None
assert board202944596 == (".1213\n" ".22..\n" "11...\n")
del board202944596
board202944596 = None
assert gamma_move(board, 3, 0, 2) == 1
assert gamma_move(board, 3, 4, 2) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 4, 2) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_busy_fields(board, 2) == 3
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 3, 2, 2) == 0
assert gamma_golden_move(board, 3, 0, 0) == 1
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_busy_fields(board, 1) == 3
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 1, 4, 2) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 1, 3, 0) == 1
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_golden_move(board, 2, 0, 1) == 0
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_golden_move(board, 3, 1, 4) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 2, 3, 1) == 1
assert gamma_move(board, 3, 4, 2) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 4, 0) == 1
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 2, 2) == 0
assert gamma_free_fields(board, 3) == 2


gamma_delete(board)
