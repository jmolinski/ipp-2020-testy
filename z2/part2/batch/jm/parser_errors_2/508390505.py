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
uuid: 508390505
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 1)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 


board295012933 = gamma_board(board)
assert board295012933 is not None
assert board295012933 == ("...\n"
"1..\n"
"...\n"
".32\n"
"...\n")
del board295012933
board295012933 = None
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 3 


board103772327 = gamma_board(board)
assert board103772327 is not None
assert board103772327 == ("...\n"
"1..\n"
"...\n"
".32\n"
"...\n")
del board103772327
board103772327 = None
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 0) == 0 


board997266873 = gamma_board(board)
assert board997266873 is not None
assert board997266873 == ("...\n"
"1..\n"
"...\n"
".32\n"
"..2\n")
del board997266873
board997266873 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 


board466067250 = gamma_board(board)
assert board466067250 is not None
assert board466067250 == ("...\n"
"1..\n"
"...\n"
"332\n"
"..2\n")
del board466067250
board466067250 = None
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 0 


gamma_delete(board)
