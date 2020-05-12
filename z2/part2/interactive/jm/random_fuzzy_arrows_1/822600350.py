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
uuid: 822600350
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 5, 1)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_free_fields(board, 5) == 3 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_free_fields(board, 5) == 3 
assert gamma_golden_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_golden_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_golden_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 


board534215359 = gamma_board(board)
assert board534215359 is not None
assert board534215359 == ("33..\n"
"...5\n"
"...5\n"
"1444\n"
"1222\n")
del board534215359
board534215359 = None
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_busy_fields(board, 5) == 2 


board128376907 = gamma_board(board)
assert board128376907 is not None
assert board128376907 == ("33..\n"
"...5\n"
"..45\n"
"1444\n"
"1222\n")
del board128376907
board128376907 = None


gamma_delete(board)
