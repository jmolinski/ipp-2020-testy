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
uuid: 540837905
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 1)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 


board244437624 = gamma_board(board)
assert board244437624 is not None
assert board244437624 == (".24.\n"
"..1.\n"
"331.\n"
"..1.\n")
del board244437624
board244437624 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 


board412987471 = gamma_board(board)
assert board412987471 is not None
assert board412987471 == ("2244\n"
"..11\n"
"331.\n"
"3.1.\n")
del board412987471
board412987471 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_golden_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 2) == 0 


gamma_delete(board)
