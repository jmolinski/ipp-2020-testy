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
uuid: 887393323
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 3, 5)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 1 


board460727038 = gamma_board(board)
assert board460727038 is not None
assert board460727038 == ("...\n"
"..2\n"
".31\n"
"...\n")
del board460727038
board460727038 = None
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 


board773436430 = gamma_board(board)
assert board773436430 is not None
assert board773436430 == ("22.\n"
"312\n"
"331\n"
".2.\n")
del board773436430
board773436430 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 


board845783369 = gamma_board(board)
assert board845783369 is not None
assert board845783369 == ("22.\n"
"312\n"
"331\n"
".21\n")
del board845783369
board845783369 = None
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 


gamma_delete(board)
