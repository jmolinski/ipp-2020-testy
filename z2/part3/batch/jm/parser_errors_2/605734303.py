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
uuid: 605734303
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 2 


board197316863 = gamma_board(board)
assert board197316863 is not None
assert board197316863 == ("2.\n"
"..\n"
".1\n"
"34\n")
del board197316863
board197316863 = None
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 1 


board199228618 = gamma_board(board)
assert board199228618 is not None
assert board199228618 == ("22\n"
"..\n"
".1\n"
"34\n")
del board199228618
board199228618 = None
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 


gamma_delete(board)
