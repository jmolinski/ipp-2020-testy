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
uuid: 679007319
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 20)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_move(board, 1, 0, 2) == 0 


board661543849 = gamma_board(board)
assert board661543849 is not None
assert board661543849 == (".1111\n"
"2112.\n"
"222..\n"
"1.211\n")
del board661543849
board661543849 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
