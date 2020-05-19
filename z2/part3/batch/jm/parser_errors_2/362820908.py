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
uuid: 362820908
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 6)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 1, 4, 2) == 0
assert gamma_move(board, 1, 3, 4) == 1
assert gamma_busy_fields(board, 1) == 2
assert gamma_move(board, 2, 3, 0) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_busy_fields(board, 1) == 3
assert gamma_golden_move(board, 1, 0, 3) == 0
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_move(board, 2, 1, 4) == 1
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_move(board, 1, 2, 1) == 0


board358029183 = gamma_board(board)
assert board358029183 is not None
assert board358029183 == (".2.1\n" "..1.\n" "....\n" ".12.\n" "1.22\n")
del board358029183
board358029183 = None
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_move(board, 1, 0, 4) == 1
assert gamma_busy_fields(board, 1) == 5
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_golden_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_free_fields(board, 2) == 10
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_move(board, 2, 0, 0) == 0


board792791024 = gamma_board(board)
assert board792791024 is not None
assert board792791024 == ("12.1\n" "..1.\n" "....\n" ".12.\n" "1222\n")
del board792791024
board792791024 = None
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 2, 1, 3) == 1
assert gamma_move(board, 2, 0, 3) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 2, 4) == 1
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_golden_move(board, 1, 0, 3) == 1


board224927122 = gamma_board(board)
assert board224927122 is not None
assert board224927122 == ("1211\n" "121.\n" "....\n" ".12.\n" "1222\n")
del board224927122
board224927122 = None
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_busy_fields(board, 2) == 6
assert gamma_free_fields(board, 2) == 7
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 2, 1, 3) == 0
assert gamma_golden_move(board, 2, 4, 3) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_golden_possible(board, 1) == 0
assert gamma_golden_move(board, 1, 3, 1) == 0
assert gamma_move(board, 2, 1, 2) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_busy_fields(board, 2) == 8
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 3, 0) == 0


board208558001 = gamma_board(board)
assert board208558001 is not None
assert board208558001 == ("1211\n" "121.\n" ".22.\n" ".12.\n" "1222\n")
del board208558001
board208558001 = None
assert gamma_move(board, 2, 3, 4) == 0


gamma_delete(board)
