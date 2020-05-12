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
uuid: 708300984
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 4, 5)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 1, 1) == 1 


board750170440 = gamma_board(board)
assert board750170440 is not None
assert board750170440 == ("2.3...\n"
"......\n"
".3....\n"
"1..2..\n")
del board750170440
board750170440 = None
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 1, 2, 5) == 0 


board831301979 = gamma_board(board)
assert board831301979 is not None
assert board831301979 == ("213.4.\n"
"......\n"
".3.4..\n"
"12.21.\n")
del board831301979
board831301979 = None
assert gamma_golden_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 


board982362319 = gamma_board(board)
assert board982362319 is not None
assert board982362319 == ("213.4.\n"
"..13.3\n"
".344..\n"
"12221.\n")
del board982362319
board982362319 = None
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_golden_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 5 


board329003791 = gamma_board(board)
assert board329003791 is not None
assert board329003791 == ("21344.\n"
"3.1313\n"
"23442.\n"
"12221.\n")
del board329003791
board329003791 = None
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_move(board, 4, 1, 1) == 0 


gamma_delete(board)
