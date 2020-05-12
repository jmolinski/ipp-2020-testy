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
uuid: 305084984
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 6, 4)
assert board is not None


assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 6, 4, 6) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_move(board, 6, 4, 4) == 1 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 22 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_free_fields(board, 4) == 21 
assert gamma_move(board, 5, 1, 6) == 1 
assert gamma_move(board, 6, 0, 1) == 1 
assert gamma_busy_fields(board, 6) == 4 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 6, 0, 3) == 0 


board554887423 = gamma_board(board)
assert board554887423 is not None
assert board554887423 == (".5..6\n"
"..1.2\n"
"2.116\n"
"...65\n"
"..12.\n"
"63..2\n"
"5.4..\n")
del board554887423
board554887423 = None
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_free_fields(board, 4) == 15 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 1, 5) == 1 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_move(board, 6, 3, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 6, 6, 0) == 0 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_busy_fields(board, 1) == 6 


board374933349 = gamma_board(board)
assert board374933349 is not None
assert board374933349 == (".5.46\n"
"551.2\n"
"2.116\n"
"22.65\n"
".4121\n"
"634.2\n"
"5.4.1\n")
del board374933349
board374933349 = None
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 5, 2, 0) == 0 


board729753162 = gamma_board(board)
assert board729753162 is not None
assert board729753162 == (".5.46\n"
"551.2\n"
"2.116\n"
"22.65\n"
".4121\n"
"634.2\n"
"5.4.1\n")
del board729753162
board729753162 = None
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 6, 1, 6) == 0 
assert gamma_free_fields(board, 6) == 2 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 1 


gamma_delete(board)
