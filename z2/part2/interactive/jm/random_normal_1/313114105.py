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
uuid: 313114105
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 6, 5, 8)
assert board is not None


assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 4, 5) == 1 


board180564199 = gamma_board(board)
assert board180564199 is not None
assert board180564199 == ("12..1..\n"
".......\n"
"5......\n"
".31....\n"
".......\n"
"...43..\n")
del board180564199
board180564199 = None
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_free_fields(board, 5) == 30 
assert gamma_golden_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_free_fields(board, 2) == 21 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 


board780320030 = gamma_board(board)
assert board780320030 is not None
assert board780320030 == ("12.51..\n"
".5.25..\n"
"5.32...\n"
"131.53.\n"
"...43.1\n"
".3343.2\n")
del board780320030
board780320030 = None
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 6, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 5, 1, 1) == 0 


board500161545 = gamma_board(board)
assert board500161545 is not None
assert board500161545 == ("12.512.\n"
".5.25.2\n"
"5.32...\n"
"131.535\n"
".5.43.1\n"
"43343.2\n")
del board500161545
board500161545 = None
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 5, 5) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_free_fields(board, 5) == 11 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 


board464854544 = gamma_board(board)
assert board464854544 is not None
assert board464854544 == ("12.5121\n"
".5225.2\n"
"5232...\n"
"131.535\n"
".5243.1\n"
"43343.2\n")
del board464854544
board464854544 = None
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 


board753641231 = gamma_board(board)
assert board753641231 is not None
assert board753641231 == ("12.5121\n"
".5225.2\n"
"5232...\n"
"131.535\n"
".5243.1\n"
"43343.2\n")
del board753641231
board753641231 = None
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 10 
assert gamma_golden_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_busy_fields(board, 5) == 7 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_golden_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 5, 2) == 0 


gamma_delete(board)
