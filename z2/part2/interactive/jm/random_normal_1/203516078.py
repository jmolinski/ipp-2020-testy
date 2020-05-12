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
uuid: 203516078
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 6, 3, 12)
assert board is not None


assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 17 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 2) == 4 


board417640775 = gamma_board(board)
assert board417640775 is not None
assert board417640775 == ("3..1.\n"
"2.313\n"
"13...\n"
".221.\n"
"2....\n"
"3..3.\n")
del board417640775
board417640775 = None
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_golden_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_golden_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 5, 2) == 0 


board561572053 = gamma_board(board)
assert board561572053 is not None
assert board561572053 == ("3..1.\n"
"21313\n"
"23111\n"
"3231.\n"
"21.3.\n"
"3..3.\n")
del board561572053
board561572053 = None
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_golden_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 


gamma_delete(board)
