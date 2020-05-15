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
uuid: 244835448
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 6)
assert board is not None


assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_golden_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 


board167980894 = gamma_board(board)
assert board167980894 is not None
assert board167980894 == ("...3.\n"
"1.3..\n"
".14..\n"
".43.1\n")
del board167980894
board167980894 = None
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 


board339045832 = gamma_board(board)
assert board339045832 is not None
assert board339045832 == ("22.32\n"
"1433.\n"
".14..\n"
".43.1\n")
del board339045832
board339045832 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 3, 2) == 0 


gamma_delete(board)
