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
uuid: 322897846
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 4)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 


board165408318 = gamma_board(board)
assert board165408318 is not None
assert board165408318 == ("...\n"
".12\n"
"...\n"
"3..\n"
"...\n")
del board165408318
board165408318 = None
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_free_fields(board, 1) == 12 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 0) == 0 


board955798866 = gamma_board(board)
assert board955798866 is not None
assert board955798866 == (".32\n"
".12\n"
".22\n"
"31.\n"
"2.2\n")
del board955798866
board955798866 = None
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_golden_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_golden_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 5 


gamma_delete(board)
