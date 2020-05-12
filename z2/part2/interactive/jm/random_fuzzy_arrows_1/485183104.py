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
uuid: 485183104
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 3, 3)
assert board is not None


assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 1 


board210543413 = gamma_board(board)
assert board210543413 is not None
assert board210543413 == (".....\n"
".....\n"
".....\n"
"..1.1\n"
".....\n"
".....\n"
".....\n")
del board210543413
board210543413 = None
assert gamma_move(board, 3, 0, 4) == 1 


board651133260 = gamma_board(board)
assert board651133260 is not None
assert board651133260 == (".....\n"
".....\n"
"3....\n"
"..1.1\n"
".....\n"
".....\n"
".....\n")
del board651133260
board651133260 = None
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 2, 6) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 1 


board306156103 = gamma_board(board)
assert board306156103 is not None
assert board306156103 == (".23..\n"
".....\n"
"3....\n"
"..1.1\n"
"1....\n"
"2....\n"
"3....\n")
del board306156103
board306156103 = None
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_free_fields(board, 3) == 25 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_golden_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_busy_fields(board, 2) == 4 


board242505971 = gamma_board(board)
assert board242505971 is not None
assert board242505971 == (".23..\n"
".....\n"
"33111\n"
".11.1\n"
"1.3..\n"
"2....\n"
"2..2.\n")
del board242505971
board242505971 = None
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_free_fields(board, 1) == 18 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_busy_fields(board, 1) == 14 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 0 


board574269599 = gamma_board(board)
assert board574269599 is not None
assert board574269599 == ("2231.\n"
".3111\n"
"33111\n"
".1111\n"
"1133.\n"
"2.13.\n"
"2..2.\n")
del board574269599
board574269599 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 15 


gamma_delete(board)
