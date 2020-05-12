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
uuid: 735752244
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 5, 6, 3)
assert board is not None


assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_busy_fields(board, 6) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 


board370736363 = gamma_board(board)
assert board370736363 is not None
assert board370736363 == (".4.1..\n"
"...3..\n"
"236.5.\n"
"...4..\n"
"3.1..2\n")
del board370736363
board370736363 = None
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 4, 0) == 1 
assert gamma_free_fields(board, 6) == 18 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 6, 1, 0) == 1 
assert gamma_move(board, 6, 5, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_free_fields(board, 6) == 3 
assert gamma_golden_move(board, 6, 4, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 1, 1) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_free_fields(board, 6) == 1 
assert gamma_golden_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 4, 5) == 0 


board612052041 = gamma_board(board)
assert board612052041 is not None
assert board612052041 == ("54214.\n"
"...3..\n"
"23645.\n"
"561462\n"
"361462\n")
del board612052041
board612052041 = None
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


board488648202 = gamma_board(board)
assert board488648202 is not None
assert board488648202 == ("54214.\n"
"...3..\n"
"23645.\n"
"561462\n"
"361462\n")
del board488648202
board488648202 = None
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 6, 2, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_golden_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_free_fields(board, 6) == 0 


gamma_delete(board)
