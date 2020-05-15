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
uuid: 225433302
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 10)
assert board is not None


assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 


board787784338 = gamma_board(board)
assert board787784338 is not None
assert board787784338 == ("211..\n"
".....\n"
".....\n"
"..3..\n"
".....\n")
del board787784338
board787784338 = None
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_free_fields(board, 3) == 3 


board860585122 = gamma_board(board)
assert board860585122 is not None
assert board860585122 == ("21113\n"
"33..3\n"
".2322\n"
"23321\n"
"22112\n")
del board860585122
board860585122 = None
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 2 


gamma_delete(board)
