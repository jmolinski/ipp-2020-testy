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
uuid: 482769947
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 4, 4)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_golden_move(board, 1, 1, 2) == 0 


board759768762 = gamma_board(board)
assert board759768762 is not None
assert board759768762 == ("....\n"
"....\n"
"1...\n"
"....\n"
"....\n")
del board759768762
board759768762 = None
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 


board480882406 = gamma_board(board)
assert board480882406 is not None
assert board480882406 == ("....\n"
"..2.\n"
"1...\n"
"..2.\n"
"....\n")
del board480882406
board480882406 = None
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 


board572415819 = gamma_board(board)
assert board572415819 is not None
assert board572415819 == ("....\n"
"212.\n"
"1...\n"
"..2.\n"
"....\n")
del board572415819
board572415819 = None
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 


board741906782 = gamma_board(board)
assert board741906782 is not None
assert board741906782 == ("2111\n"
"2122\n"
"1443\n"
"4223\n"
"122.\n")
del board741906782
board741906782 = None
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 3, 4) == 0 


gamma_delete(board)
