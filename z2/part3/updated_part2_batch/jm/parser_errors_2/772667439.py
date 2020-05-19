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
uuid: 772667439
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 4)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_free_fields(board, 1) == 18 


board377195113 = gamma_board(board)
assert board377195113 is not None
assert board377195113 == ("1....\n"
".....\n"
"..2..\n"
".....\n")
del board377195113
board377195113 = None
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 1 


board123110725 = gamma_board(board)
assert board123110725 is not None
assert board123110725 == ("112.2\n"
"11...\n"
"..2..\n"
".2...\n")
del board123110725
board123110725 = None
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 


board732516991 = gamma_board(board)
assert board732516991 is not None
assert board732516991 == ("11212\n"
"111..\n"
"..2..\n"
"221..\n")
del board732516991
board732516991 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 


board432724899 = gamma_board(board)
assert board432724899 is not None
assert board432724899 == ("11212\n"
"111.1\n"
"1222.\n"
"221..\n")
del board432724899
board432724899 = None
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 


gamma_delete(board)
