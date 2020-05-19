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
uuid: 389322532
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 3, 1, 2) == 1
assert gamma_move(board, 3, 2, 0) == 0
assert gamma_move(board, 4, 2, 2) == 1
assert gamma_move(board, 4, 2, 1) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 2, 2) == 0


board585334642 = gamma_board(board)
assert board585334642 is not None
assert board585334642 == (".34.1\n" "..4..\n" "..2..\n")
del board585334642
board585334642 = None
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 3, 1, 1) == 1
assert gamma_move(board, 3, 0, 0) == 0
assert gamma_busy_fields(board, 3) == 2
assert gamma_move(board, 4, 4, 2) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_golden_possible(board, 1) == 1


board977124637 = gamma_board(board)
assert board977124637 is not None
assert board977124637 == (".34.1\n" ".34..\n" "..2..\n")
del board977124637
board977124637 = None
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_free_fields(board, 2) == 2
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 0, 0) == 0
assert gamma_move(board, 4, 2, 3) == 0
assert gamma_move(board, 4, 1, 0) == 0
assert gamma_busy_fields(board, 4) == 2
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 4, 3, 0) == 0
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_free_fields(board, 2) == 2
assert gamma_move(board, 3, 2, 0) == 0
assert gamma_move(board, 3, 3, 0) == 0
assert gamma_move(board, 4, 0, 3) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_busy_fields(board, 1) == 1
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 3, 4, 0) == 0
assert gamma_move(board, 4, 1, 4) == 0
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 4, 0, 4) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 2, 0, 1) == 1


board822870428 = gamma_board(board)
assert board822870428 is not None
assert board822870428 == (".34.1\n" "234..\n" "222..\n")
del board822870428
board822870428 = None


gamma_delete(board)
