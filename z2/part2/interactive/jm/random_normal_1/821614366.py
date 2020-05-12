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
uuid: 821614366
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 6, 9)
assert board is not None


assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 4, 0, 7) == 1 
assert gamma_move(board, 5, 7, 1) == 0 
assert gamma_move(board, 6, 4, 4) == 1 
assert gamma_golden_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_busy_fields(board, 1) == 3 


board396009397 = gamma_board(board)
assert board396009397 is not None
assert board396009397 == ("4.....\n"
"..2...\n"
"......\n"
"1.136.\n"
"1.....\n"
"......\n"
"......\n"
".....3\n")
del board396009397
board396009397 = None
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 2, 4, 0) == 1 


board682215487 = gamma_board(board)
assert board682215487 is not None
assert board682215487 == ("4.....\n"
"..2...\n"
"..2...\n"
"1.136.\n"
"1.....\n"
"......\n"
"......\n"
"....23\n")
del board682215487
board682215487 = None
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 0, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_golden_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_golden_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 4, 7) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 5, 3, 3) == 0 


board361509262 = gamma_board(board)
assert board361509262 is not None
assert board361509262 == ("4...2.\n"
"..2...\n"
"3.2.2.\n"
"1.136.\n"
"1.454.\n"
"6...1.\n"
".34...\n"
"1...23\n")
del board361509262
board361509262 = None
assert gamma_move(board, 6, 4, 1) == 1 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_golden_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_free_fields(board, 4) == 23 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 7, 1) == 0 
assert gamma_free_fields(board, 6) == 23 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_free_fields(board, 3) == 21 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_move(board, 5, 7, 2) == 0 
assert gamma_move(board, 6, 3, 5) == 0 
assert gamma_move(board, 6, 5, 7) == 1 
assert gamma_busy_fields(board, 6) == 4 
assert gamma_move(board, 1, 1, 4) == 1 


board468518928 = gamma_board(board)
assert board468518928 is not None
assert board468518928 == ("4..226\n"
"4.2...\n"
"3.212.\n"
"11136.\n"
"15454.\n"
"6...1.\n"
".34.61\n"
"12..23\n")
del board468518928
board468518928 = None
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 6, 4) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 3, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 6, 1, 7) == 1 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 


board280625238 = gamma_board(board)
assert board280625238 is not None
assert board280625238 == ("46.226\n"
"4.2.3.\n"
"3.2123\n"
"11136.\n"
"15454.\n"
"6.3.12\n"
"534.61\n"
"12.423\n")
del board280625238
board280625238 = None
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 6, 2, 7) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 5, 3) == 1 


board836708134 = gamma_board(board)
assert board836708134 is not None
assert board836708134 == ("466226\n"
"4.2.3.\n"
"322123\n"
"11136.\n"
"154544\n"
"6.3.12\n"
"534.61\n"
"12.423\n")
del board836708134
board836708134 = None
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 1, 6) == 1 
assert gamma_golden_move(board, 6, 4, 0) == 1 


gamma_delete(board)
