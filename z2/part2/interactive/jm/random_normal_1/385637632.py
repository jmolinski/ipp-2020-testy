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
uuid: 385637632
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 5)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_free_fields(board, 1) == 16 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_free_fields(board, 1) == 13 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 


board656998510 = gamma_board(board)
assert board656998510 is not None
assert board656998510 == ("1....\n"
"3.132\n"
"1132.\n"
"..22.\n")
del board656998510
board656998510 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 


board182391461 = gamma_board(board)
assert board182391461 is not None
assert board182391461 == ("11.2.\n"
"3.132\n"
"11322\n"
"2.22.\n")
del board182391461
board182391461 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 1 


board903189996 = gamma_board(board)
assert board903189996 is not None
assert board903189996 == ("11.2.\n"
"3.132\n"
"11322\n"
"2.221\n")
del board903189996
board903189996 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 


gamma_delete(board)
