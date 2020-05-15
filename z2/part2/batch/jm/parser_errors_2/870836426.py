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
uuid: 870836426
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 4)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_golden_move(board, 1, 0, 1) == 0 


board224979950 = gamma_board(board)
assert board224979950 is not None
assert board224979950 == (".....\n"
"1....\n"
"1....\n")
del board224979950
board224979950 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_free_fields(board, 1) == 11 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_golden_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 


board672182739 = gamma_board(board)
assert board672182739 is not None
assert board672182739 == (".2221\n"
"11131\n"
"1.2..\n")
del board672182739
board672182739 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 


gamma_delete(board)
