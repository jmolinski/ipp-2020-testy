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
uuid: 184523783
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 3, 2)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 23 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_golden_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 


board665867109 = gamma_board(board)
assert board665867109 is not None
assert board665867109 == ("....\n"
"....\n"
"....\n"
"2..3\n"
"..21\n"
"..3.\n"
"1.3.\n")
del board665867109
board665867109 = None
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 6 


board311765053 = gamma_board(board)
assert board311765053 is not None
assert board311765053 == ("....\n"
"....\n"
"....\n"
"2..3\n"
"..21\n"
"..3.\n"
"1.3.\n")
del board311765053
board311765053 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 6, 3) == 0 


board377355144 = gamma_board(board)
assert board377355144 is not None
assert board377355144 == ("....\n"
"....\n"
"...3\n"
"2..3\n"
"2.21\n"
"333.\n"
"113.\n")
del board377355144
board377355144 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 3, 5) == 1 


board993165283 = gamma_board(board)
assert board993165283 is not None
assert board993165283 == ("....\n"
"...3\n"
"...3\n"
"2..3\n"
"2221\n"
"3333\n"
"113.\n")
del board993165283
board993165283 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 13 
assert gamma_golden_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
