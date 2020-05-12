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
uuid: 169182222
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 6, 3, 12)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_free_fields(board, 2) == 39 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_free_fields(board, 3) == 32 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_busy_fields(board, 3) == 6 


board415637248 = gamma_board(board)
assert board415637248 is not None
assert board415637248 == (".33..1.\n"
"2......\n"
"2.32..2\n"
".3.....\n"
"1.13231\n"
"..1.12.\n")
del board415637248
board415637248 = None
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 0) == 1 


board664477184 = gamma_board(board)
assert board664477184 is not None
assert board664477184 == (".33111.\n"
"2..2..2\n"
"2.32..2\n"
"23..1..\n"
"1113231\n"
"..1212.\n")
del board664477184
board664477184 = None
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_free_fields(board, 3) == 16 


board231313752 = gamma_board(board)
assert board231313752 is not None
assert board231313752 == (".33111.\n"
"2..2..2\n"
"2.32..2\n"
"23..1..\n"
"1113231\n"
"..1212.\n")
del board231313752
board231313752 = None
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 13 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 9 


board786851575 = gamma_board(board)
assert board786851575 is not None
assert board786851575 == (".33111.\n"
"2.22.32\n"
"2132..2\n"
"23311..\n"
"1113231\n"
"121212.\n")
del board786851575
board786851575 = None
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 13 


board597560465 = gamma_board(board)
assert board597560465 is not None
assert board597560465 == (".331112\n"
"2.22.32\n"
"2132..2\n"
"23311..\n"
"1113231\n"
"121212.\n")
del board597560465
board597560465 = None
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 9 


board229999639 = gamma_board(board)
assert board229999639 is not None
assert board229999639 == (".331112\n"
"2322.32\n"
"2132..2\n"
"23311..\n"
"1113231\n"
"121212.\n")
del board229999639
board229999639 = None
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_golden_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 4) == 0 


board511408152 = gamma_board(board)
assert board511408152 is not None
assert board511408152 == (".331112\n"
"2322232\n"
"2132.22\n"
"233113.\n"
"1213231\n"
"121212.\n")
del board511408152
board511408152 = None


gamma_delete(board)
