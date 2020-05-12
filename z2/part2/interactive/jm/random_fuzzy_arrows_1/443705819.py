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
uuid: 443705819
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 5, 3)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_free_fields(board, 5) == 18 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 16 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 5, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_free_fields(board, 4) == 10 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_golden_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 1, 5, 0) == 1 


board356654751 = gamma_board(board)
assert board356654751 is not None
assert board356654751 == ("22.1.5\n"
"243445\n"
"245.5.\n"
"313..1\n")
del board356654751
board356654751 = None
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_golden_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 1 


board320806741 = gamma_board(board)
assert board320806741 is not None
assert board320806741 == ("2231.5\n"
"245445\n"
"245.5.\n"
"313.51\n")
del board320806741
board320806741 = None
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_golden_move(board, 3, 2, 0) == 0 


gamma_delete(board)
