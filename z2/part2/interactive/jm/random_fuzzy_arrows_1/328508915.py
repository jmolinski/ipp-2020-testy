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
uuid: 328508915
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 5, 5)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 


board876321243 = gamma_board(board)
assert board876321243 is not None
assert board876321243 == ("....\n"
"2..3\n"
".3.1\n"
"....\n"
"....\n")
del board876321243
board876321243 = None
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 0, 0) == 1 


board948975179 = gamma_board(board)
assert board948975179 is not None
assert board948975179 == (".2..\n"
"2..3\n"
".3.1\n"
"....\n"
"354.\n")
del board948975179
board948975179 = None
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 


board415590126 = gamma_board(board)
assert board415590126 is not None
assert board415590126 == (".2..\n"
"2..3\n"
".3.1\n"
"....\n"
"354.\n")
del board415590126
board415590126 = None
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_free_fields(board, 5) == 7 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_free_fields(board, 4) == 1 
assert gamma_free_fields(board, 5) == 1 


gamma_delete(board)
