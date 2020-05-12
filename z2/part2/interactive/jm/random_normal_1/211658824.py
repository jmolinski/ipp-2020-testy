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
uuid: 211658824
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 5, 4, 9)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 4, 3, 0) == 1 


board102722018 = gamma_board(board)
assert board102722018 is not None
assert board102722018 == ("....4.\n"
"......\n"
"2.....\n"
".2..1.\n"
"...4..\n")
del board102722018
board102722018 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_busy_fields(board, 4) == 3 


board199336572 = gamma_board(board)
assert board199336572 is not None
assert board199336572 == ("2.4.41\n"
".33.2.\n"
"2..3..\n"
".2.31.\n"
".1.4.1\n")
del board199336572
board199336572 = None
assert gamma_move(board, 2, 4, 0) == 1 


board634005867 = gamma_board(board)
assert board634005867 is not None
assert board634005867 == ("2.4.41\n"
".33.2.\n"
"2..3..\n"
".2.31.\n"
".1.421\n")
del board634005867
board634005867 = None
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_free_fields(board, 4) == 9 
assert gamma_golden_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 1 


gamma_delete(board)
