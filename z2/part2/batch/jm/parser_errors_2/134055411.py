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
uuid: 134055411
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 2, 5)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 


board836884919 = gamma_board(board)
assert board836884919 is not None
assert board836884919 == ("1.1.\n"
"2.21\n")
del board836884919
board836884919 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 


board877455278 = gamma_board(board)
assert board877455278 is not None
assert board877455278 == ("111.\n"
"2.21\n")
del board877455278
board877455278 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 


board321426409 = gamma_board(board)
assert board321426409 is not None
assert board321426409 == ("111.\n"
"2.21\n")
del board321426409
board321426409 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_free_fields(board, 2) == 2 


gamma_delete(board)
