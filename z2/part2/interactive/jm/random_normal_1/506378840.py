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
uuid: 506378840
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 5, 1)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_possible(board, 4) == 1 


board502074911 = gamma_board(board)
assert board502074911 is not None
assert board502074911 == ("....\n"
"13..\n"
".2..\n"
"....\n"
"....\n")
del board502074911
board502074911 = None
assert gamma_move(board, 5, 3, 3) == 1 


board348559317 = gamma_board(board)
assert board348559317 is not None
assert board348559317 == ("....\n"
"13.5\n"
".2..\n"
"....\n"
"....\n")
del board348559317
board348559317 = None
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 


board116079345 = gamma_board(board)
assert board116079345 is not None
assert board116079345 == ("11..\n"
"13.5\n"
".2.4\n"
".2..\n"
"....\n")
del board116079345
board116079345 = None
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_free_fields(board, 5) == 2 
assert gamma_golden_possible(board, 5) == 1 


gamma_delete(board)
