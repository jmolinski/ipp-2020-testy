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
uuid: 115656806
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 1)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1


board182203107 = gamma_board(board)
assert board182203107 is not None
assert board182203107 == (".....\n" ".....\n" "..1..\n")
del board182203107
board182203107 = None
assert gamma_move(board, 2, 0, 4) == 0
assert gamma_move(board, 2, 0, 2) == 1
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 4, 1, 0) == 1
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_golden_move(board, 4, 2, 0) == 1
assert gamma_move(board, 1, 1, 1) == 1


board342627329 = gamma_board(board)
assert board342627329 is not None
assert board342627329 == ("2....\n" ".1...\n" ".44..\n")
del board342627329
board342627329 = None
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 4, 1, 0) == 0
assert gamma_move(board, 2, 4, 1) == 0
assert gamma_move(board, 2, 1, 1) == 0
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 3, 0, 2) == 0
assert gamma_golden_possible(board, 3) == 1
assert gamma_move(board, 4, 1, 1) == 0
assert gamma_free_fields(board, 4) == 3
assert gamma_move(board, 1, 1, 4) == 0
assert gamma_golden_possible(board, 1) == 1
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 2, 4, 0) == 0


board812592798 = gamma_board(board)
assert board812592798 is not None
assert board812592798 == ("2....\n" ".1...\n" ".44..\n")
del board812592798
board812592798 = None
assert gamma_golden_move(board, 3, 0, 2) == 1


board895963755 = gamma_board(board)
assert board895963755 is not None
assert board895963755 == ("3....\n" ".1...\n" ".44..\n")
del board895963755
board895963755 = None
assert gamma_move(board, 4, 2, 1) == 1
assert gamma_free_fields(board, 4) == 4
assert gamma_move(board, 1, 3, 0) == 0
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 3, 2, 4) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 4, 2, 4) == 0
assert gamma_move(board, 4, 2, 2) == 1
assert gamma_golden_possible(board, 4) == 0
assert gamma_move(board, 1, 0, 4) == 0
assert gamma_free_fields(board, 1) == 1
assert gamma_move(board, 2, 3, 2) == 0
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_golden_possible(board, 3) == 0
assert gamma_move(board, 4, 2, 1) == 0
assert gamma_golden_possible(board, 4) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_free_fields(board, 1) == 1
assert gamma_move(board, 2, 2, 4) == 0
assert gamma_move(board, 3, 2, 1) == 0
assert gamma_move(board, 3, 4, 1) == 0
assert gamma_move(board, 4, 1, 3) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_move(board, 1, 0, 0) == 0
assert gamma_busy_fields(board, 1) == 1
assert gamma_move(board, 2, 4, 1) == 0


gamma_delete(board)
