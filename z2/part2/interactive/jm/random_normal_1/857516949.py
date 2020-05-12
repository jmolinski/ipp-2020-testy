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
uuid: 857516949
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 6, 9)
assert board is not None


assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 6, 5, 0) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_free_fields(board, 1) == 39 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_free_fields(board, 4) == 37 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 5) == 1 
assert gamma_move(board, 5, 2, 5) == 1 
assert gamma_busy_fields(board, 5) == 3 


board209853357 = gamma_board(board)
assert board209853357 is not None
assert board209853357 == ("......\n"
"......\n"
"..5.15\n"
"..3211\n"
"2.....\n"
"3.....\n"
"....2.\n"
"3...56\n")
del board209853357
board209853357 = None
assert gamma_move(board, 6, 4, 3) == 1 
assert gamma_move(board, 6, 2, 7) == 1 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_free_fields(board, 2) == 32 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_golden_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_free_fields(board, 5) == 32 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 7, 0) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_free_fields(board, 4) == 27 
assert gamma_move(board, 5, 1, 7) == 1 
assert gamma_move(board, 6, 1, 0) == 1 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 3, 5, 7) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_golden_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 5, 7, 0) == 0 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_free_fields(board, 4) == 18 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_free_fields(board, 3) == 8 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_golden_possible(board, 3) == 0 


board610492592 = gamma_board(board)
assert board610492592 is not None
assert board610492592 == (".56..3\n"
".3..11\n"
"5.5513\n"
"243211\n"
"23266.\n"
"3261.1\n"
".3.221\n"
"363.56\n")
del board610492592
board610492592 = None
assert gamma_move(board, 4, 0, 7) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_busy_fields(board, 5) == 5 


board405956565 = gamma_board(board)
assert board405956565 is not None
assert board405956565 == ("456..3\n"
".3..11\n"
"5.5513\n"
"243211\n"
"23266.\n"
"3261.1\n"
".3.221\n"
"363.56\n")
del board405956565
board405956565 = None
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 1, 1) == 0 


board911109782 = gamma_board(board)
assert board911109782 is not None
assert board911109782 == ("456..3\n"
".3..11\n"
"5.5513\n"
"243211\n"
"23266.\n"
"3261.1\n"
".3.221\n"
"363.56\n")
del board911109782
board911109782 = None
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 7, 3) == 0 
assert gamma_move(board, 6, 3, 0) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 5, 6) == 0 
assert gamma_golden_possible(board, 5) == 1 


board553890105 = gamma_board(board)
assert board553890105 is not None
assert board553890105 == ("456..3\n"
".3..11\n"
"5.5513\n"
"243211\n"
"23266.\n"
"3261.1\n"
".3.221\n"
"363656\n")
del board553890105
board553890105 = None
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 6, 3, 6) == 1 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_free_fields(board, 6) == 9 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_golden_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_golden_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 6, 6, 0) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 3, 7) == 1 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_golden_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_busy_fields(board, 6) == 9 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 6, 0) == 0 
assert gamma_move(board, 6, 4, 5) == 0 


gamma_delete(board)
