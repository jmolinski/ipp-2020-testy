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
uuid: 514875153
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 5)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_golden_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 


board421762141 = gamma_board(board)
assert board421762141 is not None
assert board421762141 == ("43..\n"
"..22\n"
"124.\n"
"1...\n")
del board421762141
board421762141 = None
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_golden_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 3, 3) == 1 


board803805090 = gamma_board(board)
assert board803805090 is not None
assert board803805090 == ("43.1\n"
".422\n"
"1244\n"
"1.1.\n")
del board803805090
board803805090 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 1 


gamma_delete(board)
