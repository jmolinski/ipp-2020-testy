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
uuid: 226638759
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 1 


board873400412 = gamma_board(board)
assert board873400412 is not None
assert board873400412 == ("..\n"
"2.\n"
".4\n"
".1\n"
"32\n")
del board873400412
board873400412 = None
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 0 


board254375430 = gamma_board(board)
assert board254375430 is not None
assert board254375430 == ("..\n"
"2.\n"
".4\n"
"11\n"
"32\n")
del board254375430
board254375430 = None
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 1) == 0 


gamma_delete(board)
