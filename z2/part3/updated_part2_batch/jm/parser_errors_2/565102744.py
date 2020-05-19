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
uuid: 565102744
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 4, 3)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 


board905986942 = gamma_board(board)
assert board905986942 is not None
assert board905986942 == ("1...\n"
".4..\n"
"...1\n"
"3.1.\n"
".422\n")
del board905986942
board905986942 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 


board365356545 = gamma_board(board)
assert board365356545 is not None
assert board365356545 == ("1243\n"
"4443\n"
"3.31\n"
"331.\n"
"4422\n")
del board365356545
board365356545 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 3, 2) == 0 


gamma_delete(board)
