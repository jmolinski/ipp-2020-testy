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
uuid: 429516674
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 3, 7)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 18 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_free_fields(board, 1) == 14 
assert gamma_golden_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 1 


board600984684 = gamma_board(board)
assert board600984684 is not None
assert board600984684 == ("2.13\n"
"3..1\n"
"2.1.\n"
"..1.\n"
".1..\n")
del board600984684
board600984684 = None
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 10 
assert gamma_golden_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 


board216666462 = gamma_board(board)
assert board216666462 is not None
assert board216666462 == ("2313\n"
"33.2\n"
"2.13\n"
"2312\n"
"211.\n")
del board216666462
board216666462 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_golden_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 


gamma_delete(board)
