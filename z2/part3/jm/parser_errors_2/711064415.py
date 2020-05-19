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
uuid: 711064415
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 1)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_golden_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 


board458854153 = gamma_board(board)
assert board458854153 is not None
assert board458854153 == (".22\n"
".22\n"
".2.\n"
".31\n"
"331\n")
del board458854153
board458854153 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 


board366014995 = gamma_board(board)
assert board366014995 is not None
assert board366014995 == (".22\n"
".22\n"
".2.\n"
".31\n"
"331\n")
del board366014995
board366014995 = None
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 


gamma_delete(board)
