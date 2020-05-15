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
uuid: 823081140
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 3)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 0 


board769145310 = gamma_board(board)
assert board769145310 is not None
assert board769145310 == (".32\n"
"..1\n"
"213\n"
"214\n"
"..1\n")
del board769145310
board769145310 = None
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_golden_move(board, 4, 4, 1) == 0 


board607168463 = gamma_board(board)
assert board607168463 is not None
assert board607168463 == (".32\n"
"..1\n"
"213\n"
"214\n"
"4.1\n")
del board607168463
board607168463 = None
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_busy_fields(board, 4) == 3 


board776266046 = gamma_board(board)
assert board776266046 is not None
assert board776266046 == ("432\n"
"..1\n"
"213\n"
"214\n"
"421\n")
del board776266046
board776266046 = None
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 


board987175239 = gamma_board(board)
assert board987175239 is not None
assert board987175239 == ("432\n"
"..1\n"
"213\n"
"214\n"
"421\n")
del board987175239
board987175239 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
