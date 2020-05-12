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
uuid: 172400382
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 3, 4)
assert board is not None


assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_golden_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 


board619680402 = gamma_board(board)
assert board619680402 is not None
assert board619680402 == ("...1\n"
".311\n"
"232.\n"
"2223\n")
del board619680402
board619680402 = None
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_golden_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_golden_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 


board827184118 = gamma_board(board)
assert board827184118 is not None
assert board827184118 == ("3.32\n"
".311\n"
"2321\n"
"2223\n")
del board827184118
board827184118 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 


board552766583 = gamma_board(board)
assert board552766583 is not None
assert board552766583 == ("3.32\n"
".311\n"
"2321\n"
"2223\n")
del board552766583
board552766583 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 


gamma_delete(board)
