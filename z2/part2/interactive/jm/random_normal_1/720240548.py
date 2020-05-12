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
uuid: 720240548
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 5, 3, 14)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 5, 4) == 1 


board545072139 = gamma_board(board)
assert board545072139 is not None
assert board545072139 == ("..1312..\n"
"..2.....\n"
".23..2..\n"
"........\n"
"..313.1.\n")
del board545072139
board545072139 = None
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 28 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_free_fields(board, 3) == 26 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 7, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_free_fields(board, 3) == 22 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 2, 2) == 0 


board897602577 = gamma_board(board)
assert board897602577 is not None
assert board897602577 == (".31312.1\n"
".1211...\n"
"3233.2..\n"
".2......\n"
"2.31321.\n")
del board897602577
board897602577 = None
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 7, 2) == 1 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 11 


gamma_delete(board)
