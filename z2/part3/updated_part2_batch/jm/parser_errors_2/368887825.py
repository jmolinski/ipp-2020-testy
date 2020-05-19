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
uuid: 368887825
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 17)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1
assert gamma_move(board, 1, 2, 4) == 1
assert gamma_move(board, 2, 4, 3) == 1
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 2, 1, 1) == 1


board103531492 = gamma_board(board)
assert board103531492 is not None
assert board103531492 == ("..1..\n" ".1..2\n" "..1..\n" ".2...\n" ".....\n")
del board103531492
board103531492 = None
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_move(board, 1, 3, 0) == 1
assert gamma_move(board, 2, 2, 3) == 1
assert gamma_move(board, 1, 1, 2) == 1
assert gamma_move(board, 2, 3, 4) == 1
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 1, 0, 2) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 3, 2) == 1
assert gamma_free_fields(board, 2) == 12
assert gamma_move(board, 1, 0, 4) == 1
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 1, 1, 4) == 1
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 4, 4) == 1
assert gamma_golden_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_free_fields(board, 1) == 8
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_free_fields(board, 2) == 7
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_busy_fields(board, 1) == 9
assert gamma_free_fields(board, 1) == 7
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_busy_fields(board, 2) == 9
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 4, 1) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 4, 4) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 2, 3, 1) == 1
assert gamma_move(board, 1, 0, 2) == 0


board757922683 = gamma_board(board)
assert board757922683 is not None
assert board757922683 == ("11122\n" ".1222\n" "1112.\n" "12221\n" "21.1.\n")
del board757922683
board757922683 = None
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_free_fields(board, 2) == 4
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_golden_move(board, 2, 4, 1) == 1
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 2, 4, 2) == 1
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_busy_fields(board, 1) == 10
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 0) == 0


board888784761 = gamma_board(board)
assert board888784761 is not None
assert board888784761 == ("11122\n" ".1222\n" "11122\n" "12222\n" "2111.\n")
del board888784761
board888784761 = None


gamma_delete(board)
