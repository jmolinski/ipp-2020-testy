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
uuid: 507857314
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 3)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 1 


board295535068 = gamma_board(board)
assert board295535068 is not None
assert board295535068 == (".....\n"
".....\n"
"...1.\n"
".2...\n")
del board295535068
board295535068 = None
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_free_fields(board, 1) == 16 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 1 


board993913590 = gamma_board(board)
assert board993913590 is not None
assert board993913590 == ("...3.\n"
"..14.\n"
"...1.\n"
"32.33\n")
del board993913590
board993913590 = None
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 


board946766181 = gamma_board(board)
assert board946766181 is not None
assert board946766181 == ("...34\n"
"2.14.\n"
"...1.\n"
"32.33\n")
del board946766181
board946766181 = None
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_golden_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_golden_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 1 


gamma_delete(board)
