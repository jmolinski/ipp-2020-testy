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
uuid: 150874732
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 2, 5)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1
assert gamma_busy_fields(board, 1) == 1


board146860326 = gamma_board(board)
assert board146860326 is not None
assert board146860326 == ("...\n" "...\n" "...\n" "1..\n" "...\n")
del board146860326
board146860326 = None
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 1, 4, 0) == 0
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 1, 2, 1) == 1


board322353231 = gamma_board(board)
assert board322353231 is not None
assert board322353231 == ("...\n" "...\n" "..2\n" "1.1\n" "..2\n")
del board322353231
board322353231 = None
assert gamma_move(board, 1, 0, 0) == 1


board624005709 = gamma_board(board)
assert board624005709 is not None
assert board624005709 == ("...\n" "...\n" "..2\n" "1.1\n" "1.2\n")
del board624005709
board624005709 = None
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 2, 0, 3) == 1
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_busy_fields(board, 1) == 3
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 3, 2) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 1, 1, 3) == 1
assert gamma_move(board, 2, 4, 1) == 0
assert gamma_busy_fields(board, 2) == 4
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 4) == 1
assert gamma_move(board, 2, 3, 2) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 1, 4) == 1
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 2, 1, 3) == 0


gamma_delete(board)
