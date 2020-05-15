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
uuid: 291538679
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_free_fields(board, 4) == 21 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 20 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 


board163068380 = gamma_board(board)
assert board163068380 is not None
assert board163068380 == ("33...\n"
"244.2\n"
"..4.2\n"
"..3..\n"
"111.1\n")
del board163068380
board163068380 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 


board790976973 = gamma_board(board)
assert board790976973 is not None
assert board790976973 == ("33...\n"
"244.2\n"
"..442\n"
".33..\n"
"111.1\n")
del board790976973
board790976973 = None
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 1, 3) == 0 


board960175527 = gamma_board(board)
assert board960175527 is not None
assert board960175527 == ("33...\n"
"244.2\n"
"..442\n"
".33..\n"
"111.1\n")
del board960175527
board960175527 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 0 


gamma_delete(board)
