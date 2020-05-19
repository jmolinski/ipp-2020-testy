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
uuid: 421655818
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 1)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 


board182209606 = gamma_board(board)
assert board182209606 is not None
assert board182209606 == ("...\n"
"...\n"
"143\n"
"1.2\n"
"..2\n")
del board182209606
board182209606 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 


board432962281 = gamma_board(board)
assert board432962281 is not None
assert board432962281 == ("...\n"
"...\n"
"143\n"
"1.2\n"
"1.2\n")
del board432962281
board432962281 = None
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_golden_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 1 


board995626332 = gamma_board(board)
assert board995626332 is not None
assert board995626332 == ("...\n"
"1..\n"
"143\n"
"1.2\n"
"1.2\n")
del board995626332
board995626332 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 2 


gamma_delete(board)
