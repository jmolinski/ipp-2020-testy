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
uuid: 243832994
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 8, 3, 7)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 54 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 4, 2) == 1 


board323111714 = gamma_board(board)
assert board323111714 is not None
assert board323111714 == (".......\n"
"....3..\n"
".......\n"
"1......\n"
"..1....\n"
"....3..\n"
"...2.1.\n"
".2.....\n")
del board323111714
board323111714 = None
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 6, 4) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 16 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_free_fields(board, 2) == 37 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_free_fields(board, 2) == 36 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 5, 0) == 0 


board170502095 = gamma_board(board)
assert board170502095 is not None
assert board170502095 == (".......\n"
"....3..\n"
"...221.\n"
"13..3.1\n"
"..1.33.\n"
".2..31.\n"
"...2.11\n"
"12.3.21\n")
del board170502095
board170502095 = None
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 1, 6) == 1 


board220713495 = gamma_board(board)
assert board220713495 is not None
assert board220713495 == ("....1..\n"
".3..3..\n"
"..3221.\n"
"13.23.1\n"
"..1333.\n"
".2..31.\n"
"3..2.11\n"
"12.3.21\n")
del board220713495
board220713495 = None
assert gamma_move(board, 2, 5, 6) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_free_fields(board, 3) == 14 
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_free_fields(board, 2) == 21 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 


board120817959 = gamma_board(board)
assert board120817959 is not None
assert board120817959 == ("....1..\n"
".3..32.\n"
".23221.\n"
"13.23.1\n"
"..13331\n"
".21.311\n"
"3212.11\n"
"1223.21\n")
del board120817959
board120817959 = None
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 


board823370210 = gamma_board(board)
assert board823370210 is not None
assert board823370210 == ("....1..\n"
".3..32.\n"
".23221.\n"
"13.23.1\n"
"..13331\n"
".21.311\n"
"3212.11\n"
"1223.21\n")
del board823370210
board823370210 = None
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_busy_fields(board, 1) == 14 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_busy_fields(board, 1) == 15 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_golden_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 5, 7) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 5, 1) == 0 


board348766460 = gamma_board(board)
assert board348766460 is not None
assert board348766460 == ("....12.\n"
".3..321\n"
".232212\n"
"13.23.2\n"
"..13331\n"
"221.311\n"
"3212.11\n"
"1223.21\n")
del board348766460
board348766460 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 1, 6, 7) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_golden_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_golden_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_busy_fields(board, 2) == 15 


board759422924 = gamma_board(board)
assert board759422924 is not None
assert board759422924 == ("....121\n"
".3..321\n"
".232212\n"
"13.23.2\n"
"..13331\n"
"221.311\n"
"3212.11\n"
"1223.21\n")
del board759422924
board759422924 = None
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_busy_fields(board, 1) == 15 


gamma_delete(board)
