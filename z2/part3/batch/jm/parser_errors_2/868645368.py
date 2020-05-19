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
uuid: 868645368
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 3, 1)
assert board is not None


assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 4 


board517101953 = gamma_board(board)
assert board517101953 is not None
assert board517101953 == ("....\n"
"..11\n"
"22..\n"
"3...\n"
"....\n")
del board517101953
board517101953 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 1 


board391949457 = gamma_board(board)
assert board391949457 is not None
assert board391949457 == ("..1.\n"
"..11\n"
"222.\n"
"33..\n"
"....\n")
del board391949457
board391949457 = None
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_golden_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 


board135043620 = gamma_board(board)
assert board135043620 is not None
assert board135043620 == ("..11\n"
"1111\n"
"222.\n"
"33..\n"
"....\n")
del board135043620
board135043620 = None
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 


gamma_delete(board)
