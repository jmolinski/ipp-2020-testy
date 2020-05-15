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
uuid: 179915388
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 13)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 1 


board559612704 = gamma_board(board)
assert board559612704 is not None
assert board559612704 == ("..1..\n"
"1...1\n"
".1.1.\n"
"2112.\n"
".2.1.\n")
del board559612704
board559612704 = None
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 1 


board101751716 = gamma_board(board)
assert board101751716 is not None
assert board101751716 == ("..1..\n"
"1...1\n"
".1.1.\n"
"21122\n"
"2211.\n")
del board101751716
board101751716 = None
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 


board141010443 = gamma_board(board)
assert board141010443 is not None
assert board141010443 == ("..1.1\n"
"1...1\n"
".1.1.\n"
"21122\n"
"2211.\n")
del board141010443
board141010443 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 1 


board357675975 = gamma_board(board)
assert board357675975 is not None
assert board357675975 == ("2.121\n"
"11.11\n"
".111.\n"
"21122\n"
"22112\n")
del board357675975
board357675975 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_golden_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 4 


board139384347 = gamma_board(board)
assert board139384347 is not None
assert board139384347 == ("2.122\n"
"11.11\n"
".111.\n"
"11122\n"
"22112\n")
del board139384347
board139384347 = None
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_golden_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 8 


gamma_delete(board)
