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
uuid: 205227290
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 7)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 22 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_free_fields(board, 2) == 20 


board142046198 = gamma_board(board)
assert board142046198 is not None
assert board142046198 == (".11..\n"
"3....\n"
"....4\n"
"..2..\n"
".....\n")
del board142046198
board142046198 = None
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_free_fields(board, 4) == 14 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 


board390817808 = gamma_board(board)
assert board390817808 is not None
assert board390817808 == ("21112\n"
"32413\n"
"13244\n"
"34232\n"
".4.43\n")
del board390817808
board390817808 = None
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 


gamma_delete(board)
