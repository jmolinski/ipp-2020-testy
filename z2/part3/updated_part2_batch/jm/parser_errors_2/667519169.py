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
uuid: 667519169
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 3, 2)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 


board364116652 = gamma_board(board)
assert board364116652 is not None
assert board364116652 == (".12.\n"
".31.\n"
"....\n")
del board364116652
board364116652 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 1 


board804913475 = gamma_board(board)
assert board804913475 is not None
assert board804913475 == ("112.\n"
".31.\n"
".233\n")
del board804913475
board804913475 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_golden_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


board890480275 = gamma_board(board)
assert board890480275 is not None
assert board890480275 == ("112.\n"
".313\n"
".233\n")
del board890480275
board890480275 = None
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 


board186722075 = gamma_board(board)
assert board186722075 is not None
assert board186722075 == ("112.\n"
"3313\n"
".233\n")
del board186722075
board186722075 = None
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 3) == 0 


gamma_delete(board)
