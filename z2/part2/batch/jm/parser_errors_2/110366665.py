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
uuid: 110366665
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 4, 2)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 1 


board806525650 = gamma_board(board)
assert board806525650 is not None
assert board806525650 == ("1.\n"
"..\n"
"..\n"
"1.\n")
del board806525650
board806525650 = None
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 1 


board377414033 = gamma_board(board)
assert board377414033 is not None
assert board377414033 == ("1.\n"
"..\n"
"2.\n"
"14\n")
del board377414033
board377414033 = None
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_golden_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 0 


gamma_delete(board)
