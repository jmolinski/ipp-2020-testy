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
uuid: 751569840
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 4, 3)
assert board is not None


assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 1 


board452306734 = gamma_board(board)
assert board452306734 is not None
assert board452306734 == ("..3\n"
".3.\n"
"...\n"
".2.\n")
del board452306734
board452306734 = None
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_golden_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 


gamma_delete(board)
