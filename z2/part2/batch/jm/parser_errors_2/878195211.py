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
uuid: 878195211
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 1)
assert board is not None


assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_free_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 


board843312873 = gamma_board(board)
assert board843312873 is not None
assert board843312873 == ("..21.\n"
".....\n"
"...34\n"
".....\n"
".....\n")
del board843312873
board843312873 = None
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 


board919267315 = gamma_board(board)
assert board919267315 is not None
assert board919267315 == ("..21.\n"
"..33.\n"
"...34\n"
"...34\n"
"....4\n")
del board919267315
board919267315 = None
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 


board793537922 = gamma_board(board)
assert board793537922 is not None
assert board793537922 == ("..21.\n"
"..334\n"
"...34\n"
"...34\n"
"....4\n")
del board793537922
board793537922 = None
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 


board158160251 = gamma_board(board)
assert board158160251 is not None
assert board158160251 == ("..21.\n"
".3334\n"
"...34\n"
"...34\n"
"...34\n")
del board158160251
board158160251 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_free_fields(board, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_busy_fields(board, 2) == 1 


board549334696 = gamma_board(board)
assert board549334696 is not None
assert board549334696 == ("..214\n"
".3334\n"
"...34\n"
"...34\n"
"...34\n")
del board549334696
board549334696 = None


gamma_delete(board)
