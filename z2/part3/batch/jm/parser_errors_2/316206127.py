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
uuid: 316206127
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 3)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 3, 3, 3) == 1
assert gamma_move(board, 3, 0, 3) == 1
assert gamma_free_fields(board, 1) == 17
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 3, 0, 2) == 1
assert gamma_move(board, 3, 2, 2) == 1
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 3, 4, 2) == 0
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 3, 4, 0) == 0
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_busy_fields(board, 1) == 2


board872721261 = gamma_board(board)
assert board872721261 is not None
assert board872721261 == ("3.13.\n" "3.3..\n" ".22..\n" "21...\n")
del board872721261
board872721261 = None
assert gamma_move(board, 2, 3, 2) == 1


board395664622 = gamma_board(board)
assert board395664622 is not None
assert board395664622 == ("3.13.\n" "3.32.\n" ".22..\n" "21...\n")
del board395664622
board395664622 = None
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_busy_fields(board, 3) == 4
assert gamma_move(board, 1, 4, 1) == 1
assert gamma_free_fields(board, 1) == 5
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 3, 2, 3) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_busy_fields(board, 1) == 3
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 3, 4, 0) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_busy_fields(board, 1) == 3
assert gamma_free_fields(board, 1) == 5
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 2, 3, 3) == 0
assert gamma_free_fields(board, 2) == 5
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 3, 2, 2) == 0
assert gamma_free_fields(board, 3) == 4
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_golden_move(board, 1, 2, 3) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 3, 2, 2) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_golden_move(board, 2, 1, 3) == 0
assert gamma_move(board, 3, 3, 3) == 0
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_move(board, 1, 0, 2) == 0


gamma_delete(board)
