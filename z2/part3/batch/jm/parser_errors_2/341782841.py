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
uuid: 341782841
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 4)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 1, 3, 0) == 1


board734156488 = gamma_board(board)
assert board734156488 is not None
assert board734156488 == (".....\n" ".1...\n" ".....\n" "...1.\n")
del board734156488
board734156488 = None
assert gamma_move(board, 2, 4, 2) == 1
assert gamma_move(board, 3, 0, 2) == 1
assert gamma_free_fields(board, 3) == 16


board444117699 = gamma_board(board)
assert board444117699 is not None
assert board444117699 == (".....\n" "31..2\n" ".....\n" "...1.\n")
del board444117699
board444117699 = None
assert gamma_busy_fields(board, 4) == 0
assert gamma_free_fields(board, 4) == 16
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 1, 4, 3) == 1
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 1, 1) == 1
assert gamma_move(board, 3, 4, 2) == 0
assert gamma_move(board, 4, 2, 2) == 0
assert gamma_busy_fields(board, 4) == 0


board906456306 = gamma_board(board)
assert board906456306 is not None
assert board906456306 == ("...21\n" "311.2\n" ".3...\n" "...1.\n")
del board906456306
board906456306 = None
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 0, 3) == 1


board747022968 = gamma_board(board)
assert board747022968 is not None
assert board747022968 == ("2..21\n" "311.2\n" ".3...\n" "1..1.\n")
del board747022968
board747022968 = None
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_move(board, 1, 3, 2) == 1
assert gamma_move(board, 1, 4, 0) == 1
assert gamma_move(board, 2, 1, 3) == 1
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 4, 1, 3) == 0
assert gamma_free_fields(board, 4) == 7
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_free_fields(board, 1) == 7
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 3, 1) == 1
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_move(board, 4, 1, 4) == 0
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_golden_possible(board, 4) == 1
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_free_fields(board, 2) == 3
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_move(board, 4, 0, 2) == 0
assert gamma_move(board, 4, 4, 3) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_busy_fields(board, 2) == 5
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_move(board, 3, 0, 0) == 0
assert gamma_move(board, 4, 0, 2) == 0
assert gamma_move(board, 4, 1, 1) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 2, 4, 1) == 1
assert gamma_busy_fields(board, 2) == 6
assert gamma_move(board, 3, 1, 3) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 3, 3) == 0
assert gamma_move(board, 3, 0, 1) == 1
assert gamma_busy_fields(board, 3) == 4
assert gamma_move(board, 4, 0, 0) == 0
assert gamma_move(board, 4, 1, 2) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 3, 3, 3) == 0
assert gamma_move(board, 4, 1, 1) == 0


gamma_delete(board)
