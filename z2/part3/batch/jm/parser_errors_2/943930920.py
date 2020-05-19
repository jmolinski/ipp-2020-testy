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
uuid: 943930920
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 10)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 0 


board509818901 = gamma_board(board)
assert board509818901 is not None
assert board509818901 == ("1.1..\n"
"1.1..\n"
".1..2\n"
"2....\n")
del board509818901
board509818901 = None
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 


board211746660 = gamma_board(board)
assert board211746660 is not None
assert board211746660 == ("121..\n"
"1.1..\n"
"111.2\n"
"22...\n")
del board211746660
board211746660 = None
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 1 


gamma_delete(board)
