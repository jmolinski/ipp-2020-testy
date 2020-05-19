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
uuid: 983293891
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 2, 3)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 


board127306732 = gamma_board(board)
assert board127306732 is not None
assert board127306732 == (".11\n"
"22.\n")
del board127306732
board127306732 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 1) == 1 


board525256091 = gamma_board(board)
assert board525256091 is not None
assert board525256091 == ("211\n"
"22.\n")
del board525256091
board525256091 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 4 


gamma_delete(board)
