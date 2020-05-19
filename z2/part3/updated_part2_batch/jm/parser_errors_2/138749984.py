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
uuid: 138749984
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 4, 2)
assert board is not None


assert gamma_busy_fields(board, 1) == 0
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 2, 2, 0) == 1
assert gamma_busy_fields(board, 2) == 2
assert gamma_free_fields(board, 2) == 8
assert gamma_move(board, 3, 1, 0) == 1


board580516127 = gamma_board(board)
assert board580516127 is not None
assert board580516127 == ("..2..\n" ".32..\n")
del board580516127
board580516127 = None
assert gamma_move(board, 4, 1, 0) == 0
assert gamma_golden_possible(board, 4) == 1
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_busy_fields(board, 1) == 1
assert gamma_free_fields(board, 1) == 6
assert gamma_move(board, 2, 0, 1) == 1


board373235482 = gamma_board(board)
assert board373235482 is not None
assert board373235482 == ("2.2..\n" "132..\n")
del board373235482
board373235482 = None
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_move(board, 3, 3, 1) == 1
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 1, 1) == 1
assert gamma_move(board, 1, 3, 0) == 1
assert gamma_busy_fields(board, 1) == 2
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 4, 0, 4) == 0
assert gamma_free_fields(board, 4) == 2
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_golden_possible(board, 2) == 1


board730927527 = gamma_board(board)
assert board730927527 is not None
assert board730927527 == ("2423.\n" "1321.\n")
del board730927527
board730927527 = None
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 3, 2, 0) == 0
assert gamma_move(board, 4, 1, 4) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_busy_fields(board, 2) == 3
assert gamma_move(board, 3, 0, 4) == 0
assert gamma_free_fields(board, 3) == 1


board831262932 = gamma_board(board)
assert board831262932 is not None
assert board831262932 == ("2423.\n" "1321.\n")
del board831262932
board831262932 = None


gamma_delete(board)
