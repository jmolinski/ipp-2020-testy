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
uuid: 843287845
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 4, 4, 8)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_golden_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_free_fields(board, 1) == 24 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 4, 2) == 0 


board880443772 = gamma_board(board)
assert board880443772 is not None
assert board880443772 == (".21....\n"
"..3.1..\n"
"....2..\n"
"2.34...\n")
del board880443772
board880443772 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_golden_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 0, 1) == 1 


board911028010 = gamma_board(board)
assert board911028010 is not None
assert board911028010 == ("1213114\n"
".2331..\n"
"432.2.1\n"
"21341.3\n")
del board911028010
board911028010 = None
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 


board961307088 = gamma_board(board)
assert board961307088 is not None
assert board961307088 == ("1213114\n"
".2331..\n"
"432.2.1\n"
"2134113\n")
del board961307088
board961307088 = None
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 


board132777314 = gamma_board(board)
assert board132777314 is not None
assert board132777314 == ("1213114\n"
".2331..\n"
"432.231\n"
"2134113\n")
del board132777314
board132777314 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 


board366120167 = gamma_board(board)
assert board366120167 is not None
assert board366120167 == ("1213114\n"
".2331..\n"
"4324231\n"
"2134113\n")
del board366120167
board366120167 = None
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 0 


gamma_delete(board)
