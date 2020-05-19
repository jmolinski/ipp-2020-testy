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
uuid: 460862264
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 16)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 1 


board805648356 = gamma_board(board)
assert board805648356 is not None
assert board805648356 == ("2111.\n"
"..222\n"
"11.2.\n"
"1..22\n"
"211..\n")
del board805648356
board805648356 = None
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 1 


board964345287 = gamma_board(board)
assert board964345287 is not None
assert board964345287 == ("2111.\n"
"..222\n"
"1122.\n"
"1..22\n"
"211..\n")
del board964345287
board964345287 = None
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_golden_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 10 


gamma_delete(board)
