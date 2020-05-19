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
uuid: 149308630
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 9)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1
assert gamma_move(board, 1, 0, 4) == 1


board255654614 = gamma_board(board)
assert board255654614 is not None
assert board255654614 == ("1....\n" ".....\n" ".....\n" "....1\n" ".....\n")
del board255654614
board255654614 = None
assert gamma_move(board, 2, 4, 3) == 1
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 1, 3, 2) == 1
assert gamma_move(board, 2, 1, 2) == 1
assert gamma_move(board, 2, 3, 3) == 1
assert gamma_move(board, 1, 2, 4) == 1
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 2, 2, 3) == 1
assert gamma_move(board, 1, 3, 1) == 1
assert gamma_move(board, 1, 2, 2) == 1
assert gamma_busy_fields(board, 1) == 7
assert gamma_golden_possible(board, 1) == 1


board135758591 = gamma_board(board)
assert board135758591 is not None
assert board135758591 == ("1.1..\n" "..222\n" ".211.\n" "...11\n" "..1..\n")
del board135758591
board135758591 = None
assert gamma_move(board, 2, 0, 3) == 1


board208799086 = gamma_board(board)
assert board208799086 is not None
assert board208799086 == ("1.1..\n" "2.222\n" ".211.\n" "...11\n" "..1..\n")
del board208799086
board208799086 = None
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 2, 3, 1) == 0
assert gamma_move(board, 1, 3, 4) == 1
assert gamma_move(board, 2, 4, 1) == 0
assert gamma_move(board, 1, 4, 4) == 1
assert gamma_move(board, 1, 4, 4) == 0
assert gamma_free_fields(board, 1) == 10


board338173549 = gamma_board(board)
assert board338173549 is not None
assert board338173549 == ("1.111\n" "2.222\n" ".211.\n" "...11\n" "1.1..\n")
del board338173549
board338173549 = None
assert gamma_move(board, 2, 1, 0) == 1
assert gamma_move(board, 2, 0, 2) == 1
assert gamma_busy_fields(board, 2) == 7
assert gamma_free_fields(board, 2) == 8
assert gamma_golden_move(board, 2, 2, 2) == 1
assert gamma_move(board, 2, 2, 2) == 0
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_busy_fields(board, 2) == 8
assert gamma_move(board, 1, 3, 3) == 0
assert gamma_move(board, 2, 1, 3) == 1
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_busy_fields(board, 1) == 9


board855870792 = gamma_board(board)
assert board855870792 is not None
assert board855870792 == ("1.111\n" "22222\n" "2221.\n" "...11\n" "121..\n")
del board855870792
board855870792 = None
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_busy_fields(board, 2) == 10
assert gamma_golden_move(board, 2, 4, 3) == 0
assert gamma_move(board, 1, 4, 1) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_busy_fields(board, 1) == 9
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 1, 3, 2) == 0
assert gamma_move(board, 1, 0, 3) == 0


board702072760 = gamma_board(board)
assert board702072760 is not None
assert board702072760 == ("1.111\n" "22222\n" "2221.\n" ".2.11\n" "121..\n")
del board702072760
board702072760 = None
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 2, 1, 4) == 1
assert gamma_free_fields(board, 2) == 5
assert gamma_move(board, 1, 3, 3) == 0
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_move(board, 2, 3, 4) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 1, 4, 3) == 0
assert gamma_move(board, 1, 0, 1) == 1
assert gamma_move(board, 2, 4, 0) == 1
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_golden_possible(board, 2) == 0
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_move(board, 1, 2, 3) == 0
assert gamma_busy_fields(board, 1) == 10
assert gamma_free_fields(board, 1) == 3
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 1, 2, 4) == 0
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_golden_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 4, 2) == 1
assert gamma_busy_fields(board, 2) == 13
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 1, 4, 4) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 4, 2) == 0
assert gamma_free_fields(board, 2) == 2
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 1, 4, 0) == 0


board548298017 = gamma_board(board)
assert board548298017 is not None
assert board548298017 == ("12111\n" "22222\n" "22212\n" "12.11\n" "121.2\n")
del board548298017
board548298017 = None
assert gamma_move(board, 2, 3, 2) == 0
assert gamma_move(board, 2, 3, 1) == 0


board168532167 = gamma_board(board)
assert board168532167 is not None
assert board168532167 == ("12111\n" "22222\n" "22212\n" "12.11\n" "121.2\n")
del board168532167
board168532167 = None
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0


gamma_delete(board)
