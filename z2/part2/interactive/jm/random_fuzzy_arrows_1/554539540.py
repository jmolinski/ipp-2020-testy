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
uuid: 554539540
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 3, 17)
assert board is not None


assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 2, 1, 7) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_golden_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 1 


board251673140 = gamma_board(board)
assert board251673140 is not None
assert board251673140 == (".2....\n"
".2....\n"
"...1..\n"
"32...2\n"
"131.1.\n"
"113.1.\n"
".1...2\n"
".3....\n")
del board251673140
board251673140 = None
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_free_fields(board, 3) == 29 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 7) == 1 


board281476409 = gamma_board(board)
assert board281476409 is not None
assert board281476409 == ("12....\n"
".2....\n"
"3..13.\n"
"32...2\n"
"131.1.\n"
"113.1.\n"
"31...2\n"
".3.3..\n")
del board281476409
board281476409 = None
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 24 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 1, 2, 1) == 1 


board412285252 = gamma_board(board)
assert board412285252 is not None
assert board412285252 == ("12....\n"
".2....\n"
"3..13.\n"
"32..22\n"
"131.1.\n"
"113.1.\n"
"311..2\n"
"13.3..\n")
del board412285252
board412285252 = None
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_free_fields(board, 3) == 23 
assert gamma_golden_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_free_fields(board, 2) == 22 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_free_fields(board, 3) == 21 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 5, 7) == 1 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 2, 5, 6) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 16 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_free_fields(board, 1) == 13 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 1, 7, 2) == 0 


board481507094 = gamma_board(board)
assert board481507094 is not None
assert board481507094 == ("12...1\n"
"2221.2\n"
"31.133\n"
"321.32\n"
"13111.\n"
"112.11\n"
"311332\n"
"1323..\n")
del board481507094
board481507094 = None
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 7) == 1 


board984249076 = gamma_board(board)
assert board984249076 is not None
assert board984249076 == ("122..1\n"
"2221.2\n"
"31.133\n"
"321.32\n"
"13111.\n"
"112.11\n"
"311332\n"
"1323..\n")
del board984249076
board984249076 = None
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 


board492321582 = gamma_board(board)
assert board492321582 is not None
assert board492321582 == ("122..1\n"
"2221.2\n"
"31.133\n"
"321.32\n"
"13111.\n"
"112.11\n"
"311332\n"
"1323..\n")
del board492321582
board492321582 = None
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 2, 1) == 0 


gamma_delete(board)
