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
uuid: 215943069
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 


board206156590 = gamma_board(board)
assert board206156590 is not None
assert board206156590 == ("...\n"
"111\n"
"423\n"
"4..\n")
del board206156590
board206156590 = None
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


board165676891 = gamma_board(board)
assert board165676891 is not None
assert board165676891 == ("...\n"
"111\n"
"423\n"
"4..\n")
del board165676891
board165676891 = None
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 


gamma_delete(board)
