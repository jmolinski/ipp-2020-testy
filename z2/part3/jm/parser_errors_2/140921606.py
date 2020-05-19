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
uuid: 140921606
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 15)
assert board is not None


assert gamma_move(board, 1, 4, 3) == 1
assert gamma_free_fields(board, 1) == 24
assert gamma_move(board, 2, 0, 3) == 1
assert gamma_move(board, 2, 0, 0) == 1
assert gamma_free_fields(board, 2) == 22
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_busy_fields(board, 1) == 2
assert gamma_move(board, 2, 4, 2) == 1
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_move(board, 1, 2, 4) == 1


board664977355 = gamma_board(board)
assert board664977355 is not None
assert board664977355 == ("..1..\n" "2...1\n" "....2\n" "...1.\n" "2....\n")
del board664977355
board664977355 = None
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 2) == 1
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_busy_fields(board, 2) == 4
assert gamma_move(board, 1, 2, 3) == 1


board921107473 = gamma_board(board)
assert board921107473 is not None
assert board921107473 == ("..1..\n" "2.1.1\n" "..2.2\n" "1..1.\n" "2....\n")
del board921107473
board921107473 = None
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 3, 3) == 1
assert gamma_busy_fields(board, 1) == 6
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 4, 4) == 1
assert gamma_free_fields(board, 2) == 14
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_free_fields(board, 2) == 13
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 4, 3) == 0
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_busy_fields(board, 2) == 6
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 4, 2) == 0
assert gamma_move(board, 2, 4, 3) == 0
assert gamma_move(board, 2, 0, 4) == 1
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_free_fields(board, 2) == 12
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 2, 1) == 1
assert gamma_move(board, 1, 4, 4) == 0
assert gamma_free_fields(board, 1) == 11
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_golden_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 4, 1) == 1
assert gamma_move(board, 2, 0, 0) == 0


board711496724 = gamma_board(board)
assert board711496724 is not None
assert board711496724 == ("2.1.2\n" "2.111\n" "..2.2\n" "1.112\n" "1.2..\n")
del board711496724
board711496724 = None
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_busy_fields(board, 1) == 8
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_golden_move(board, 2, 3, 4) == 0
assert gamma_free_fields(board, 1) == 9
assert gamma_move(board, 2, 4, 3) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_golden_move(board, 2, 3, 2) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_golden_possible(board, 1) == 0
assert gamma_golden_move(board, 1, 0, 2) == 0
assert gamma_move(board, 2, 4, 3) == 0
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_busy_fields(board, 2) == 8
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 2, 4, 1) == 0
assert gamma_move(board, 1, 3, 2) == 1
assert gamma_move(board, 1, 3, 0) == 1
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 2, 0, 2) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 2, 1, 3) == 1
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 2, 2, 0) == 0


board301295344 = gamma_board(board)
assert board301295344 is not None
assert board301295344 == ("2.1.2\n" "22111\n" "2.212\n" "12112\n" "1121.\n")
del board301295344
board301295344 = None
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_move(board, 1, 3, 1) == 0
assert gamma_move(board, 2, 4, 3) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_golden_possible(board, 2) == 1


board105840524 = gamma_board(board)
assert board105840524 is not None
assert board105840524 == ("2.1.2\n" "22111\n" "2.212\n" "12112\n" "1121.\n")
del board105840524
board105840524 = None
assert gamma_golden_possible(board, 1) == 0
assert gamma_move(board, 2, 0, 4) == 0


gamma_delete(board)
