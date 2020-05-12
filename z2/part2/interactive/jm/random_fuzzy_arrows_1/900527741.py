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
uuid: 900527741
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 8, 4, 5)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 0 


board193509363 = gamma_board(board)
assert board193509363 is not None
assert board193509363 == ("....\n"
"....\n"
".1..\n"
"1...\n"
"....\n"
"....\n"
"....\n"
"....\n")
del board193509363
board193509363 = None
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 0, 7) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_free_fields(board, 2) == 25 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 2, 7) == 1 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_golden_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 20 


board983338811 = gamma_board(board)
assert board983338811 is not None
assert board983338811 == ("4.3.\n"
"....\n"
".1..\n"
"12.2\n"
"1...\n"
"..3.\n"
".142\n"
"1...\n")
del board983338811
board983338811 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_free_fields(board, 4) == 13 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 7) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_busy_fields(board, 1) == 8 


board350754770 = gamma_board(board)
assert board350754770 is not None
assert board350754770 == ("423.\n"
"4...\n"
"11.3\n"
"12.2\n"
"1221\n"
"1333\n"
"3142\n"
"1.24\n")
del board350754770
board350754770 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_busy_fields(board, 4) == 4 


gamma_delete(board)
