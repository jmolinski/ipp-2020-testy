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
uuid: 399858992
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 3, 6)
assert board is not None


assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_golden_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 1 


board341325053 = gamma_board(board)
assert board341325053 is not None
assert board341325053 == ("....\n"
"...1\n"
"3...\n"
"....\n"
"....\n")
del board341325053
board341325053 = None
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 1) == 13 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 


board616509254 = gamma_board(board)
assert board616509254 is not None
assert board616509254 == ("3.13\n"
"...1\n"
"3112\n"
"31.3\n"
"2..2\n")
del board616509254
board616509254 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 


board887076785 = gamma_board(board)
assert board887076785 is not None
assert board887076785 == ("3.13\n"
".111\n"
"3112\n"
"31.3\n"
"2..2\n")
del board887076785
board887076785 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 


gamma_delete(board)
