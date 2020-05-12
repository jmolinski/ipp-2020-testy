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
uuid: 729258262
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 6, 2)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_move(board, 6, 0, 2) == 1 
assert gamma_busy_fields(board, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 


board927104693 = gamma_board(board)
assert board927104693 is not None
assert board927104693 == ("...5\n"
".12.\n"
"6.3.\n"
"4244\n"
"1...\n")
del board927104693
board927104693 = None
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_golden_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 


board485824113 = gamma_board(board)
assert board485824113 is not None
assert board485824113 == (".3.5\n"
".12.\n"
"6.3.\n"
"4244\n"
"1..5\n")
del board485824113
board485824113 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_golden_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 


gamma_delete(board)
