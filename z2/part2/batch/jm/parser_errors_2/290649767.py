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
uuid: 290649767
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 9)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_free_fields(board, 1) == 18 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_free_fields(board, 1) == 13 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_busy_fields(board, 1) == 10 


board596846169 = gamma_board(board)
assert board596846169 is not None
assert board596846169 == (".1.1\n"
"1222\n"
"1.11\n"
"1111\n"
".2..\n")
del board596846169
board596846169 = None
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 


board806705121 = gamma_board(board)
assert board806705121 is not None
assert board806705121 == (".1.1\n"
"1221\n"
"1.11\n"
"1111\n"
"22.2\n")
del board806705121
board806705121 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


gamma_delete(board)
