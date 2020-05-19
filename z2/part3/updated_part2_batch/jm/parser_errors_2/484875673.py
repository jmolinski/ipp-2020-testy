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
uuid: 484875673
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 4, 5)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 18 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 


board703600597 = gamma_board(board)
assert board703600597 is not None
assert board703600597 == ("3423\n"
".2.1\n"
"4141\n"
"1334\n"
"4.23\n")
del board703600597
board703600597 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 


board396310819 = gamma_board(board)
assert board396310819 is not None
assert board396310819 == ("3423\n"
".2.1\n"
"4141\n"
"1334\n"
"4.23\n")
del board396310819
board396310819 = None
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 


board664249270 = gamma_board(board)
assert board664249270 is not None
assert board664249270 == ("3423\n"
".2.1\n"
"4141\n"
"1334\n"
"4.23\n")
del board664249270
board664249270 = None
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 


gamma_delete(board)
