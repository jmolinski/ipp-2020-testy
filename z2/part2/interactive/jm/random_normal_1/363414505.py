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
uuid: 363414505
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 6, 6)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_free_fields(board, 2) == 32 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_golden_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_free_fields(board, 5) == 28 
assert gamma_move(board, 6, 2, 5) == 1 
assert gamma_move(board, 6, 0, 1) == 1 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 0, 3) == 1 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 


board535806241 = gamma_board(board)
assert board535806241 is not None
assert board535806241 == (".2.4.\n"
".26..\n"
"...5.\n"
"6..3.\n"
"1.1..\n"
"6...2\n"
"..4.2\n")
del board535806241
board535806241 = None
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 1, 3) == 1 


board258815922 = gamma_board(board)
assert board258815922 is not None
assert board258815922 == (".2.4.\n"
".26..\n"
"...5.\n"
"63.3.\n"
"1.1..\n"
"6...2\n"
"..4.2\n")
del board258815922
board258815922 = None
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_move(board, 6, 1, 0) == 1 


board907886397 = gamma_board(board)
assert board907886397 is not None
assert board907886397 == ("42.4.\n"
".26..\n"
"...55\n"
"63.3.\n"
"1.1..\n"
"6...2\n"
".64.2\n")
del board907886397
board907886397 = None
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_free_fields(board, 2) == 16 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 6, 2, 4) == 1 
assert gamma_move(board, 6, 4, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 6, 4, 6) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 6, 5, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 6, 5, 4) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_golden_possible(board, 3) == 1 


board643516091 = gamma_board(board)
assert board643516091 is not None
assert board643516091 == ("42.46\n"
"326..\n"
"..655\n"
"6343.\n"
"1.126\n"
"63452\n"
"56432\n")
del board643516091
board643516091 = None
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 


board302687165 = gamma_board(board)
assert board302687165 is not None
assert board302687165 == ("42.46\n"
"326..\n"
"..655\n"
"6343.\n"
"11126\n"
"63452\n"
"56432\n")
del board302687165
board302687165 = None
assert gamma_move(board, 4, 5, 4) == 0 


gamma_delete(board)
