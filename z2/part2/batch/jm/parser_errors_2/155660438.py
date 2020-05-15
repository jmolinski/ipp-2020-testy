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
uuid: 155660438
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 19)
assert board is not None


assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 1 


board766643937 = gamma_board(board)
assert board766643937 is not None
assert board766643937 == ("..2.\n"
"1.11\n"
"..2.\n"
"2..1\n"
"2222\n")
del board766643937
board766643937 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 


board552667439 = gamma_board(board)
assert board552667439 is not None
assert board552667439 == (".12.\n"
"1.11\n"
"..2.\n"
"2.21\n"
"2222\n")
del board552667439
board552667439 = None
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 2, 2, 0) == 0 


board619830108 = gamma_board(board)
assert board619830108 is not None
assert board619830108 == (".122\n"
"1.11\n"
"222.\n"
"2221\n"
"2222\n")
del board619830108
board619830108 = None
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_golden_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 


board865467144 = gamma_board(board)
assert board865467144 is not None
assert board865467144 == ("1122\n"
"1111\n"
"222.\n"
"2221\n"
"2222\n")
del board865467144
board865467144 = None
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 


gamma_delete(board)
