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
uuid: 270060854
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 15)
assert board is not None


assert gamma_busy_fields(board, 1) == 0


board809627067 = gamma_board(board)
assert board809627067 is not None
assert board809627067 == (".....\n" ".....\n" ".....\n" ".....\n")
del board809627067
board809627067 = None
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 1, 1, 3) == 1
assert gamma_move(board, 2, 3, 1) == 1
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_move(board, 1, 3, 3) == 0
assert gamma_move(board, 2, 0, 3) == 1
assert gamma_move(board, 2, 3, 3) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 2, 2, 3) == 1
assert gamma_move(board, 1, 0, 2) == 1
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_busy_fields(board, 2) == 6
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 2, 4) == 0


board618849990 = gamma_board(board)
assert board618849990 is not None
assert board618849990 == ("2122.\n" "1.1..\n" "2.22.\n" "..1..\n")
del board618849990
board618849990 = None
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_golden_move(board, 1, 3, 0) == 0
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 0, 2) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 1, 1, 1) == 1
assert gamma_free_fields(board, 1) == 8
assert gamma_move(board, 2, 4, 0) == 1
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_move(board, 1, 4, 2) == 1
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 1, 3, 4) == 0
assert gamma_free_fields(board, 1) == 6
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 2, 2, 3) == 0
assert gamma_free_fields(board, 2) == 6
assert gamma_move(board, 1, 2, 1) == 0


board770853022 = gamma_board(board)
assert board770853022 is not None
assert board770853022 == ("2122.\n" "1.1.1\n" "2122.\n" ".11.2\n")
del board770853022
board770853022 = None
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_golden_move(board, 1, 3, 3) == 1


board110707536 = gamma_board(board)
assert board110707536 is not None
assert board110707536 == ("2121.\n" "1.1.1\n" "2122.\n" ".11.2\n")
del board110707536
board110707536 = None
assert gamma_move(board, 2, 3, 2) == 1
assert gamma_move(board, 1, 4, 2) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 1, 4, 3) == 1
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_move(board, 2, 4, 0) == 0
assert gamma_busy_fields(board, 2) == 8
assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0


gamma_delete(board)
