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
uuid: 506280697
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 2, 1)
assert board is not None




board388473900 = gamma_board(board)
assert board388473900 is not None
assert board388473900 == (".....\n"
".....\n")
del board388473900
board388473900 = None
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 


board203110690 = gamma_board(board)
assert board203110690 is not None
assert board203110690 == ("2....\n"
"21...\n")
del board203110690
board203110690 = None
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 1 


board654143786 = gamma_board(board)
assert board654143786 is not None
assert board654143786 == ("22...\n"
"21...\n")
del board654143786
board654143786 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
