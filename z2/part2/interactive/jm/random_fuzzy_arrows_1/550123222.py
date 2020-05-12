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
uuid: 550123222
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 6, 4, 4)
assert board is not None


assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_free_fields(board, 2) == 27 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 4) == 1 


board313799173 = gamma_board(board)
assert board313799173 is not None
assert board313799173 == ("..41.\n"
"2...3\n"
"...1.\n"
".....\n"
"122..\n"
"..4..\n")
del board313799173
board313799173 = None
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 


board362727114 = gamma_board(board)
assert board362727114 is not None
assert board362727114 == ("..41.\n"
"2...3\n"
"...1.\n"
"...42\n"
"12234\n"
"..4..\n")
del board362727114
board362727114 = None
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_busy_fields(board, 4) == 5 


gamma_delete(board)
