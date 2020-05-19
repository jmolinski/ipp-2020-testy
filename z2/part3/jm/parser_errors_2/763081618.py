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
uuid: 763081618
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 


board884828172 = gamma_board(board)
assert board884828172 is not None
assert board884828172 == ("....\n"
".1..\n"
"....\n"
"....\n"
"....\n")
del board884828172
board884828172 = None
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 1 


board110729338 = gamma_board(board)
assert board110729338 is not None
assert board110729338 == ("....\n"
".1..\n"
"31..\n"
"....\n"
"24..\n")
del board110729338
board110729338 = None
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 0 


gamma_delete(board)
