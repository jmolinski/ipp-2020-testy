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
uuid: 428179900
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 5)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 13 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 5 


board967617458 = gamma_board(board)
assert board967617458 is not None
assert board967617458 == ("132.1\n"
"132..\n"
"1.32.\n")
del board967617458
board967617458 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_golden_possible(board, 3) == 0 


board762146640 = gamma_board(board)
assert board762146640 is not None
assert board762146640 == ("13231\n"
"132..\n"
"1.32.\n")
del board762146640
board762146640 = None
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 


gamma_delete(board)
