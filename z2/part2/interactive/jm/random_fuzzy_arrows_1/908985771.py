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
uuid: 908985771
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 4, 5)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_free_fields(board, 3) == 25 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_move(board, 2, 3, 1) == 1 


board220929745 = gamma_board(board)
assert board220929745 is not None
assert board220929745 == ("....\n"
"....\n"
"...1\n"
".4.4\n"
"22..\n"
"41.2\n"
"1...\n")
del board220929745
board220929745 = None
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 0 


board536593089 = gamma_board(board)
assert board536593089 is not None
assert board536593089 == (".3..\n"
"....\n"
"...1\n"
".4.4\n"
"22..\n"
"41.2\n"
"1...\n")
del board536593089
board536593089 = None
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 3, 5) == 1 


board513920323 = gamma_board(board)
assert board513920323 is not None
assert board513920323 == (".3..\n"
"...1\n"
".4.1\n"
".4.4\n"
"22.1\n"
"41.2\n"
"1..3\n")
del board513920323
board513920323 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_golden_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 3, 3) == 0 


board668223367 = gamma_board(board)
assert board668223367 is not None
assert board668223367 == (".3.4\n"
"2..1\n"
"44.1\n"
".4.4\n"
"2211\n"
"41.2\n"
"1.13\n")
del board668223367
board668223367 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_golden_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 6, 2) == 0 


gamma_delete(board)
