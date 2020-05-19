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
uuid: 429932588
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 2, 7)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_free_fields(board, 1) == 11 


board722356042 = gamma_board(board)
assert board722356042 is not None
assert board722356042 == ("...\n"
"...\n"
"1..\n"
".1.\n"
"21.\n")
del board722356042
board722356042 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 


board293808330 = gamma_board(board)
assert board293808330 is not None
assert board293808330 == ("..1\n"
"1..\n"
"1..\n"
".12\n"
"21.\n")
del board293808330
board293808330 = None
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_busy_fields(board, 2) == 5 


board666646460 = gamma_board(board)
assert board666646460 is not None
assert board666646460 == ("..1\n"
"122\n"
"12.\n"
"112\n"
"21.\n")
del board666646460
board666646460 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 


gamma_delete(board)
