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
uuid: 940372554
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 17)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 


board109125656 = gamma_board(board)
assert board109125656 is not None
assert board109125656 == ("11..\n"
"2...\n"
"1..1\n"
"...2\n"
".122\n")
del board109125656
board109125656 = None
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 2) == 0 


board830035125 = gamma_board(board)
assert board830035125 is not None
assert board830035125 == ("11..\n"
"21..\n"
"11.1\n"
".2.2\n"
"1122\n")
del board830035125
board830035125 = None
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_golden_move(board, 2, 4, 0) == 0 


gamma_delete(board)
