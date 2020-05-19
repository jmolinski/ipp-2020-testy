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
uuid: 550596705
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 3, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 


board757112109 = gamma_board(board)
assert board757112109 is not None
assert board757112109 == ("...\n"
".1.\n"
"322\n")
del board757112109
board757112109 = None
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_move(board, 3, 1, 1) == 0 


board925817955 = gamma_board(board)
assert board925817955 is not None
assert board925817955 == ("...\n"
".12\n"
"322\n")
del board925817955
board925817955 = None
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 2) == 0 


gamma_delete(board)
