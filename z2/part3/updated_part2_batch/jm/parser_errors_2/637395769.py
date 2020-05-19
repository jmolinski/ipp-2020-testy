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
uuid: 637395769
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 7)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_free_fields(board, 2) == 22 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_free_fields(board, 4) == 13 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_free_fields(board, 2) == 11 


board774071270 = gamma_board(board)
assert board774071270 is not None
assert board774071270 == (".4332\n"
"14.2.\n"
"2.131\n"
".1...\n"
".2..3\n")
del board774071270
board774071270 = None
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 4, 2) == 0 


board555930657 = gamma_board(board)
assert board555930657 is not None
assert board555930657 == ("14332\n"
"14.2.\n"
"2.131\n"
"313..\n"
"42..3\n")
del board555930657
board555930657 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_golden_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 


board989072328 = gamma_board(board)
assert board989072328 is not None
assert board989072328 == ("14332\n"
"1422.\n"
"2.131\n"
"3131.\n"
"42..3\n")
del board989072328
board989072328 = None
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 0 


board102771480 = gamma_board(board)
assert board102771480 is not None
assert board102771480 == ("14332\n"
"14222\n"
"2.131\n"
"3131.\n"
"42.33\n")
del board102771480
board102771480 = None
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 


board521090547 = gamma_board(board)
assert board521090547 is not None
assert board521090547 == ("14332\n"
"14222\n"
"2.131\n"
"3131.\n"
"42.33\n")
del board521090547
board521090547 = None
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 


gamma_delete(board)
