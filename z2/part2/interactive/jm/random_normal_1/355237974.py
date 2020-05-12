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
uuid: 355237974
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 5, 5)
assert board is not None


assert gamma_busy_fields(board, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_golden_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_golden_move(board, 5, 3, 3) == 1 


board541986966 = gamma_board(board)
assert board541986966 is not None
assert board541986966 == ("..4..\n"
"22455\n"
"....5\n"
"33242\n"
".141.\n")
del board541986966
board541986966 = None
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 


board618311998 = gamma_board(board)
assert board618311998 is not None
assert board618311998 == (".34.4\n"
"22455\n"
"...45\n"
"33242\n"
".1414\n")
del board618311998
board618311998 = None
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_free_fields(board, 5) == 5 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_golden_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_free_fields(board, 4) == 1 


board563339742 = gamma_board(board)
assert board563339742 is not None
assert board563339742 == (".34.4\n"
"22455\n"
"..245\n"
"33242\n"
"31414\n")
del board563339742
board563339742 = None
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 


gamma_delete(board)
