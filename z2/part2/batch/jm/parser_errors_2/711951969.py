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
uuid: 711951969
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 3, 5)
assert board is not None


assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_busy_fields(board, 3) == 3 


board552690834 = gamma_board(board)
assert board552690834 is not None
assert board552690834 == (".3..\n"
"..31\n"
".3..\n"
"..2.\n"
".2..\n")
del board552690834
board552690834 = None
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 


board471847937 = gamma_board(board)
assert board471847937 is not None
assert board471847937 == (".3..\n"
"1.31\n"
".312\n"
"..21\n"
"3221\n")
del board471847937
board471847937 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 


board702567743 = gamma_board(board)
assert board702567743 is not None
assert board702567743 == (".3..\n"
"1.31\n"
".312\n"
".121\n"
"3221\n")
del board702567743
board702567743 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_free_fields(board, 1) == 5 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 


board409574223 = gamma_board(board)
assert board409574223 is not None
assert board409574223 == ("3332\n"
"1.31\n"
".312\n"
".121\n"
"3221\n")
del board409574223
board409574223 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 


gamma_delete(board)
