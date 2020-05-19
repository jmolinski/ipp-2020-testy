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
uuid: 321986209
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 2, 10)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 4, 0) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_golden_move(board, 2, 1, 1) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_busy_fields(board, 2) == 3
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_golden_possible(board, 2) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_busy_fields(board, 1) == 2
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 1, 4, 1) == 1
assert gamma_golden_move(board, 1, 0, 1) == 0
assert gamma_free_fields(board, 2) == 3
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_move(board, 1, 4, 0) == 0


board870541285 = gamma_board(board)
assert board870541285 is not None
assert board870541285 == (".2.11\n" "221.2\n")
del board870541285
board870541285 = None
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_golden_possible(board, 2) == 0
assert gamma_golden_move(board, 2, 1, 3) == 0
assert gamma_busy_fields(board, 1) == 3


gamma_delete(board)
