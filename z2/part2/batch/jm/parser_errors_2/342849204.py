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
uuid: 342849204
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 5)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 


board174668905 = gamma_board(board)
assert board174668905 is not None
assert board174668905 == ("...\n"
"...\n"
"1..\n"
".2.\n"
"2..\n")
del board174668905
board174668905 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 


board844783479 = gamma_board(board)
assert board844783479 is not None
assert board844783479 == ("...\n"
"...\n"
"11.\n"
"13.\n"
"24.\n")
del board844783479
board844783479 = None
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 


board670985990 = gamma_board(board)
assert board670985990 is not None
assert board670985990 == ("4..\n"
"1..\n"
"112\n"
"13.\n"
"24.\n")
del board670985990
board670985990 = None
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 1, 1) == 1 


board841706904 = gamma_board(board)
assert board841706904 is not None
assert board841706904 == ("4..\n"
"1..\n"
"112\n"
"142\n"
"244\n")
del board841706904
board841706904 = None
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


gamma_delete(board)
