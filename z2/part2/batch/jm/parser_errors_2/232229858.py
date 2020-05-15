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
uuid: 232229858
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 5)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 


board265093462 = gamma_board(board)
assert board265093462 is not None
assert board265093462 == ("...3.\n"
".....\n"
".121.\n"
"22.31\n"
"11.12\n")
del board265093462
board265093462 = None
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 


board428059265 = gamma_board(board)
assert board428059265 is not None
assert board428059265 == ("2.332\n"
".....\n"
".121.\n"
"22.31\n"
"11.12\n")
del board428059265
board428059265 = None
assert gamma_move(board, 3, 4, 1) == 0 


board320747839 = gamma_board(board)
assert board320747839 is not None
assert board320747839 == ("2.332\n"
".....\n"
".121.\n"
"22.31\n"
"11.12\n")
del board320747839
board320747839 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_free_fields(board, 3) == 9 


board716590340 = gamma_board(board)
assert board716590340 is not None
assert board716590340 == ("2.332\n"
"....3\n"
".121.\n"
"22.31\n"
"11.12\n")
del board716590340
board716590340 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_golden_move(board, 1, 2, 2) == 1 


board441463176 = gamma_board(board)
assert board441463176 is not None
assert board441463176 == ("21332\n"
"..3.3\n"
".1111\n"
"22331\n"
"11312\n")
del board441463176
board441463176 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 


gamma_delete(board)
