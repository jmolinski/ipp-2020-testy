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
uuid: 619999256
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 18)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_free_fields(board, 1) == 18 
assert gamma_move(board, 2, 3, 0) == 1 


board496511468 = gamma_board(board)
assert board496511468 is not None
assert board496511468 == (".....\n"
"..1..\n"
"....1\n"
"...2.\n")
del board496511468
board496511468 = None
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 0 


board291643237 = gamma_board(board)
assert board291643237 is not None
assert board291643237 == ("21..2\n"
".1112\n"
"1.221\n"
"2.121\n")
del board291643237
board291643237 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 3, 3) == 1 


board163607802 = gamma_board(board)
assert board163607802 is not None
assert board163607802 == ("21.12\n"
".1112\n"
"1.221\n"
"2.121\n")
del board163607802
board163607802 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 


board135806769 = gamma_board(board)
assert board135806769 is not None
assert board135806769 == ("21.12\n"
".1112\n"
"12221\n"
"2.121\n")
del board135806769
board135806769 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_busy_fields(board, 2) == 10 


gamma_delete(board)
