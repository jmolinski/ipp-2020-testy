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
uuid: 450759361
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 6, 4, 3)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_golden_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 1, 5) == 1 


board953169813 = gamma_board(board)
assert board953169813 is not None
assert board953169813 == (".433\n"
".1..\n"
"1...\n"
"1.42\n"
".142\n"
"3...\n")
del board953169813
board953169813 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 1 


board128945315 = gamma_board(board)
assert board128945315 is not None
assert board128945315 == (".433\n"
"21..\n"
"1..2\n"
"1.42\n"
".242\n"
"32..\n")
del board128945315
board128945315 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 2, 4) == 0 


gamma_delete(board)
