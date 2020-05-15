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
uuid: 232087050
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 2)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 1, 2, 1) == 1 


board974636423 = gamma_board(board)
assert board974636423 is not None
assert board974636423 == (".....\n"
"1...2\n"
".21..\n"
".21..\n")
del board974636423
board974636423 = None
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 0) == 0 


board219173769 = gamma_board(board)
assert board219173769 is not None
assert board219173769 == ("1....\n"
"1.1.2\n"
".21.2\n"
"221..\n")
del board219173769
board219173769 = None
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 1 


board912708097 = gamma_board(board)
assert board912708097 is not None
assert board912708097 == ("1..12\n"
"111.2\n"
"121.2\n"
"221..\n")
del board912708097
board912708097 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 3 
assert gamma_golden_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


gamma_delete(board)
