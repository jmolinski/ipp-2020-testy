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
uuid: 386326813
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 4, 2)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 


board932146449 = gamma_board(board)
assert board932146449 is not None
assert board932146449 == ("1..\n"
".2.\n")
del board932146449
board932146449 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 2 


board656703566 = gamma_board(board)
assert board656703566 is not None
assert board656703566 == ("32.\n"
"42.\n")
del board656703566
board656703566 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_busy_fields(board, 4) == 2 


gamma_delete(board)
