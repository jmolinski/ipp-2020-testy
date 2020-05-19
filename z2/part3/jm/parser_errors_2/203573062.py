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
uuid: 203573062
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1


board261992751 = gamma_board(board)
assert board261992751 is not None
assert board261992751 == ("...\n" ".1.\n")
del board261992751
board261992751 = None
assert gamma_move(board, 2, 1, 0) == 0
assert gamma_move(board, 3, 1, 2) == 0
assert gamma_move(board, 3, 0, 1) == 1
assert gamma_move(board, 4, 0, 2) == 0
assert gamma_move(board, 1, 1, 1) == 1


board990152409 = gamma_board(board)
assert board990152409 is not None
assert board990152409 == ("31.\n" ".1.\n")
del board990152409
board990152409 = None
assert gamma_move(board, 3, 2, 1) == 0


board857629617 = gamma_board(board)
assert board857629617 is not None
assert board857629617 == ("31.\n" ".1.\n")
del board857629617
board857629617 = None
assert gamma_move(board, 4, 0, 0) == 1
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 4, 2, 1) == 0
assert gamma_busy_fields(board, 4) == 1
assert gamma_free_fields(board, 4) == 0


gamma_delete(board)
