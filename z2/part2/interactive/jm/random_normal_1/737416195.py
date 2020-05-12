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
uuid: 737416195
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 3, 14)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_free_fields(board, 2) == 24 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 3, 3) == 1 


board649804236 = gamma_board(board)
assert board649804236 is not None
assert board649804236 == ("....\n"
"....\n"
"....\n"
"...1\n"
"21.2\n"
"..1.\n"
"...1\n")
del board649804236
board649804236 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_free_fields(board, 3) == 16 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 2 


board353832585 = gamma_board(board)
assert board353832585 is not None
assert board353832585 == ("2211\n"
"2331\n"
"2.21\n"
".221\n"
"2132\n"
"3213\n"
"1321\n")
del board353832585
board353832585 = None
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 0 


gamma_delete(board)
