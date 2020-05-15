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
uuid: 912800483
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 7)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 1, 2, 2) == 1 


board654287219 = gamma_board(board)
assert board654287219 is not None
assert board654287219 == ("1...\n"
"2.1.\n"
"111.\n"
"..2.\n")
del board654287219
board654287219 = None
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 1 


board867387183 = gamma_board(board)
assert board867387183 is not None
assert board867387183 == ("1112\n"
"2.1.\n"
"111.\n"
".221\n")
del board867387183
board867387183 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 


board637069540 = gamma_board(board)
assert board637069540 is not None
assert board637069540 == ("1112\n"
"2.1.\n"
"111.\n"
".221\n")
del board637069540
board637069540 = None
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
