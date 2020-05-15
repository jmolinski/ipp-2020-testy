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
uuid: 412540908
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 2, 10)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 11 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 


board708133373 = gamma_board(board)
assert board708133373 is not None
assert board708133373 == ("1111.\n"
"22..1\n"
".....\n")
del board708133373
board708133373 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 


board873788301 = gamma_board(board)
assert board873788301 is not None
assert board873788301 == ("11112\n"
"22121\n"
"1.2..\n")
del board873788301
board873788301 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_busy_fields(board, 2) == 7 


gamma_delete(board)
