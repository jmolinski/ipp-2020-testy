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
uuid: 789780489
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 8)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 


board214983321 = gamma_board(board)
assert board214983321 is not None
assert board214983321 == (".1...\n"
"...3.\n"
".12..\n"
"...2.\n")
del board214983321
board214983321 = None
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_golden_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 


board152422759 = gamma_board(board)
assert board152422759 is not None
assert board152422759 == ("11.13\n"
"2.13.\n"
"312.2\n"
"3.123\n")
del board152422759
board152422759 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_free_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 


gamma_delete(board)
