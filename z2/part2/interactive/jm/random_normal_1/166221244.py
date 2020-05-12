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
uuid: 166221244
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 7, 3, 15)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 1) == 41 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 5, 6) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_free_fields(board, 3) == 35 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_free_fields(board, 1) == 30 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_move(board, 2, 0, 5) == 1 


board296102555 = gamma_board(board)
assert board296102555 is not None
assert board296102555 == ("13..22\n"
"22..2.\n"
".31..1\n"
".2.11.\n"
".2....\n"
".1...1\n"
".13..3\n")
del board296102555
board296102555 = None
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 5, 1) == 0 


board365013368 = gamma_board(board)
assert board365013368 is not None
assert board365013368 == ("13..22\n"
"221.21\n"
"331..1\n"
".2.112\n"
".2....\n"
".1...1\n"
".13..3\n")
del board365013368
board365013368 = None
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_free_fields(board, 2) == 15 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 1 


board378778656 = gamma_board(board)
assert board378778656 is not None
assert board378778656 == ("13..22\n"
"221221\n"
"331.11\n"
"32.112\n"
".22.2.\n"
".13..1\n"
"113..3\n")
del board378778656
board378778656 = None
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 


board828334214 = gamma_board(board)
assert board828334214 is not None
assert board828334214 == ("13..22\n"
"221221\n"
"331.11\n"
"32.112\n"
".22.2.\n"
".13..1\n"
"113..3\n")
del board828334214
board828334214 = None
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 


board368195120 = gamma_board(board)
assert board368195120 is not None
assert board368195120 == ("13..22\n"
"221221\n"
"331.11\n"
"323112\n"
".2232.\n"
".13..1\n"
"113..3\n")
del board368195120
board368195120 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 


board106956447 = gamma_board(board)
assert board106956447 is not None
assert board106956447 == ("131.22\n"
"221221\n"
"331.11\n"
"323112\n"
".2232.\n"
".33.31\n"
"113..3\n")
del board106956447
board106956447 = None
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_golden_move(board, 2, 3, 0) == 0 


board448382458 = gamma_board(board)
assert board448382458 is not None
assert board448382458 == ("131.22\n"
"221221\n"
"331.11\n"
"323112\n"
".2232.\n"
".33.31\n"
"113..3\n")
del board448382458
board448382458 = None
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 


gamma_delete(board)
