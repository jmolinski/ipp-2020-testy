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
uuid: 810004687
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 2, 10)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 9 


board967977294 = gamma_board(board)
assert board967977294 is not None
assert board967977294 == (".2.\n"
"...\n"
".1.\n"
".1.\n")
del board967977294
board967977294 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 


board736542677 = gamma_board(board)
assert board736542677 is not None
assert board736542677 == (".21\n"
"212\n"
".11\n"
".11\n")
del board736542677
board736542677 = None
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
