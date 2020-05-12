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
uuid: 241187367
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 6, 6, 6)
assert board is not None


assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_busy_fields(board, 6) == 0 


board693336869 = gamma_board(board)
assert board693336869 is not None
assert board693336869 == ("......\n"
".4....\n"
".5.5..\n"
".2.32.\n"
".4....\n"
"....1.\n")
del board693336869
board693336869 = None
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_free_fields(board, 5) == 22 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_golden_move(board, 6, 3, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_free_fields(board, 5) == 17 


board546990599 = gamma_board(board)
assert board546990599 is not None
assert board546990599 == ("544...\n"
".4.6..\n"
".5.51.\n"
".21324\n"
".4....\n"
"12321.\n")
del board546990599
board546990599 = None
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 3, 5) == 1 
assert gamma_busy_fields(board, 6) == 2 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_free_fields(board, 1) == 15 
assert gamma_golden_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_free_fields(board, 3) == 15 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 


board420884110 = gamma_board(board)
assert board420884110 is not None
assert board420884110 == ("5446..\n"
"54.6..\n"
".5.51.\n"
".21324\n"
".4....\n"
"123211\n")
del board420884110
board420884110 = None
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 0, 3) == 1 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_free_fields(board, 5) == 10 


board990723528 = gamma_board(board)
assert board990723528 is not None
assert board990723528 == ("5446..\n"
"54.621\n"
"65.51.\n"
".21324\n"
".4..5.\n"
"123211\n")
del board990723528
board990723528 = None
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_move(board, 6, 2, 3) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_free_fields(board, 5) == 6 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_golden_possible(board, 6) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_golden_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 6, 2, 1) == 1 


gamma_delete(board)
