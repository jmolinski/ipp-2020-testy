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
uuid: 755589723
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 4, 1)
assert board is not None


assert gamma_busy_fields(board, 1) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 


board748853996 = gamma_board(board)
assert board748853996 is not None
assert board748853996 == ("..\n"
"..\n"
"13\n"
".3\n"
"42\n")
del board748853996
board748853996 = None
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_free_fields(board, 4) == 1 


gamma_delete(board)
