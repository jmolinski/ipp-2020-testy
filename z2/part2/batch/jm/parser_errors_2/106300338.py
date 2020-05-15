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
uuid: 106300338
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 5)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 


board224319609 = gamma_board(board)
assert board224319609 is not None
assert board224319609 == (".42.2\n"
"33.1.\n"
".....\n")
del board224319609
board224319609 = None
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_golden_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_busy_fields(board, 4) == 3 


board922412370 = gamma_board(board)
assert board922412370 is not None
assert board922412370 == (".42.2\n"
"3341.\n"
".4...\n")
del board922412370
board922412370 = None
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 1 


board421586667 = gamma_board(board)
assert board421586667 is not None
assert board421586667 == (".42.2\n"
"33413\n"
".42..\n")
del board421586667
board421586667 = None
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_golden_possible(board, 4) == 1 


board926823608 = gamma_board(board)
assert board926823608 is not None
assert board926823608 == (".4242\n"
"33413\n"
"142.4\n")
del board926823608
board926823608 = None
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 


gamma_delete(board)
