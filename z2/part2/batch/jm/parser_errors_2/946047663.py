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
uuid: 946047663
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 2, 12)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_free_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_free_fields(board, 2) == 2 


board320267567 = gamma_board(board)
assert board320267567 is not None
assert board320267567 == ("2.22.\n"
"21222\n"
"21111\n")
del board320267567
board320267567 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_busy_fields(board, 2) == 8 


gamma_delete(board)
