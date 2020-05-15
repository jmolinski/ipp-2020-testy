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
uuid: 957727259
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 4)
assert board is not None


assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_golden_move(board, 4, 2, 3) == 0 


board754839759 = gamma_board(board)
assert board754839759 is not None
assert board754839759 == (".3.4\n"
".443\n"
"3.1.\n"
"3..2\n")
del board754839759
board754839759 = None
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 


board733631534 = gamma_board(board)
assert board733631534 is not None
assert board733631534 == (".3.2\n"
"1443\n"
"3.1.\n"
"3412\n")
del board733631534
board733631534 = None
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 


board251074116 = gamma_board(board)
assert board251074116 is not None
assert board251074116 == (".3.2\n"
"1443\n"
"3.1.\n"
"3412\n")
del board251074116
board251074116 = None


gamma_delete(board)
