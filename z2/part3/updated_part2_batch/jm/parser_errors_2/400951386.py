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
uuid: 400951386
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 3, 2)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 2, 1, 3) == 0


board805513652 = gamma_board(board)
assert board805513652 is not None
assert board805513652 == ("....\n" "..1.\n")
del board805513652
board805513652 = None
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_golden_possible(board, 3) == 1


board638629771 = gamma_board(board)
assert board638629771 is not None
assert board638629771 == ("2...\n" "..1.\n")
del board638629771
board638629771 = None
assert gamma_move(board, 1, 0, 0) == 1
assert gamma_move(board, 1, 1, 0) == 1
assert gamma_busy_fields(board, 1) == 3
assert gamma_golden_move(board, 1, 1, 0) == 0


board191567097 = gamma_board(board)
assert board191567097 is not None
assert board191567097 == ("2...\n" "111.\n")
del board191567097
board191567097 = None
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_free_fields(board, 2) == 4
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 3, 3, 0) == 1
assert gamma_move(board, 1, 1, 2) == 0
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 2, 1, 2) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 2, 2, 0) == 0
assert gamma_busy_fields(board, 2) == 1
assert gamma_move(board, 3, 1, 1) == 1
assert gamma_move(board, 3, 2, 0) == 0


gamma_delete(board)
