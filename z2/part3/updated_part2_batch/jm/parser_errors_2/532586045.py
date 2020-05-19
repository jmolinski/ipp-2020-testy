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
uuid: 532586045
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 4, 1)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 1 


board418078839 = gamma_board(board)
assert board418078839 is not None
assert board418078839 == ("....\n"
"....\n"
".2..\n"
"....\n"
"..13\n")
del board418078839
board418078839 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_golden_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 


board128008578 = gamma_board(board)
assert board128008578 is not None
assert board128008578 == (".2..\n"
".244\n"
".24.\n"
"....\n"
"..13\n")
del board128008578
board128008578 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 0 


board746533569 = gamma_board(board)
assert board746533569 is not None
assert board746533569 == (".2..\n"
".244\n"
".24.\n"
"....\n"
"..13\n")
del board746533569
board746533569 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 


board514911207 = gamma_board(board)
assert board514911207 is not None
assert board514911207 == (".2..\n"
".244\n"
".24.\n"
"..1.\n"
"..13\n")
del board514911207
board514911207 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 


board284855846 = gamma_board(board)
assert board284855846 is not None
assert board284855846 == (".2..\n"
".244\n"
".24.\n"
"..1.\n"
"..13\n")
del board284855846
board284855846 = None
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 4, 0) == 0 


gamma_delete(board)
