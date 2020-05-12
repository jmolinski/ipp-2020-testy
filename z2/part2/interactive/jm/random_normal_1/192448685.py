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
uuid: 192448685
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 6, 3)
assert board is not None


assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 5, 3, 6) == 1 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 0, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_busy_fields(board, 4) == 1 


board557482310 = gamma_board(board)
assert board557482310 is not None
assert board557482310 == ("...5\n"
"...2\n"
"....\n"
"3452\n"
"3..1\n"
"6..3\n"
"....\n")
del board557482310
board557482310 = None
assert gamma_move(board, 5, 1, 2) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 0, 6) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_free_fields(board, 5) == 3 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 6, 1, 1) == 1 
assert gamma_free_fields(board, 6) == 13 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 6, 2, 5) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 0 


board448867081 = gamma_board(board)
assert board448867081 is not None
assert board448867081 == ("6..5\n"
"4.62\n"
"11..\n"
"3452\n"
"3531\n"
"66.3\n"
"....\n")
del board448867081
board448867081 = None
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_free_fields(board, 6) == 5 
assert gamma_golden_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 6) == 1 


gamma_delete(board)
