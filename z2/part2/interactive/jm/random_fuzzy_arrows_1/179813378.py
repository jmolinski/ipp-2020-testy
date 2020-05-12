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
uuid: 179813378
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 3, 6)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 1, 1, 0) == 1 


board998928236 = gamma_board(board)
assert board998928236 is not None
assert board998928236 == ("...1.\n"
"1....\n"
".....\n"
"...3.\n"
".....\n"
"..2..\n"
".1.1.\n")
del board998928236
board998928236 = None
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_busy_fields(board, 3) == 9 


board688832615 = gamma_board(board)
assert board688832615 is not None
assert board688832615 == (".2.11\n"
"12.31\n"
"132.1\n"
".3.32\n"
"1323.\n"
"3.2.3\n"
"31.11\n")
del board688832615
board688832615 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_free_fields(board, 3) == 8 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_free_fields(board, 2) == 4 


board952270548 = gamma_board(board)
assert board952270548 is not None
assert board952270548 == (".2.11\n"
"12131\n"
"13231\n"
"23.32\n"
"1323.\n"
"33213\n"
"31211\n")
del board952270548
board952270548 = None
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 


gamma_delete(board)
