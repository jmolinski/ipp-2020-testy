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
uuid: 832693655
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 3, 4)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_free_fields(board, 2) == 2 


board807489207 = gamma_board(board)
assert board807489207 is not None
assert board807489207 == ("1..\n"
"123\n"
"313\n"
"312\n")
del board807489207
board807489207 = None
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 


board636753603 = gamma_board(board)
assert board636753603 is not None
assert board636753603 == ("1..\n"
"123\n"
"313\n"
"312\n")
del board636753603
board636753603 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 


board701388214 = gamma_board(board)
assert board701388214 is not None
assert board701388214 == ("1..\n"
"123\n"
"313\n"
"312\n")
del board701388214
board701388214 = None
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 1) == 0 


gamma_delete(board)
