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
uuid: 469439291
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 11)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_free_fields(board, 3) == 23 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_golden_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_free_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 


board117871687 = gamma_board(board)
assert board117871687 is not None
assert board117871687 == ("11113\n"
"3.112\n"
".32.2\n"
"1331.\n"
"32323\n")
del board117871687
board117871687 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 1 


gamma_delete(board)
