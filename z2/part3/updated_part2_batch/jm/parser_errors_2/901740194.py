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
uuid: 901740194
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 2, 1)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 


board790581035 = gamma_board(board)
assert board790581035 is not None
assert board790581035 == ("..\n"
"..\n"
"..\n"
"22\n"
"1.\n")
del board790581035
board790581035 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 


board735948195 = gamma_board(board)
assert board735948195 is not None
assert board735948195 == ("..\n"
"..\n"
"..\n"
"22\n"
"1.\n")
del board735948195
board735948195 = None
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 


board412304772 = gamma_board(board)
assert board412304772 is not None
assert board412304772 == ("..\n"
"..\n"
"..\n"
"22\n"
"1.\n")
del board412304772
board412304772 = None
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 


gamma_delete(board)
