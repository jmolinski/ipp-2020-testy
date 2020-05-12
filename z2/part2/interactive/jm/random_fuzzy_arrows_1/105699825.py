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
uuid: 105699825
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 6, 6)
assert board is not None


assert gamma_move(board, 1, 2, 7) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 5, 5, 0) == 1 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 1, 5) == 1 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 6) == 1 


board900023902 = gamma_board(board)
assert board900023902 is not None
assert board900023902 == ("..1.....\n"
"126.3...\n"
".6..4..2\n"
".....1..\n"
"......4.\n"
".35.....\n"
"..2.5...\n"
".....5..\n")
del board900023902
board900023902 = None
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 6, 7, 1) == 1 
assert gamma_free_fields(board, 6) == 43 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 1, 6, 7) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_free_fields(board, 3) == 39 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 4, 7, 6) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 6, 3, 0) == 1 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 5, 5, 5) == 1 
assert gamma_move(board, 5, 5, 3) == 1 
assert gamma_free_fields(board, 5) == 12 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_golden_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 1, 3, 7) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 6, 0) == 1 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 5, 1) == 1 
assert gamma_move(board, 2, 7, 4) == 1 
assert gamma_move(board, 3, 6, 5) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_free_fields(board, 3) == 24 
assert gamma_move(board, 4, 3, 0) == 0 


board906295524 = gamma_board(board)
assert board906295524 is not None
assert board906295524 == ("2.11..1.\n"
"126.3.34\n"
".6254532\n"
"..1.41.2\n"
"...6.54.\n"
"3354...3\n"
"..2156.6\n"
"25.6555.\n")
del board906295524
board906295524 = None
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 6, 7, 5) == 0 
assert gamma_busy_fields(board, 6) == 6 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_free_fields(board, 4) == 24 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_free_fields(board, 6) == 10 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 7, 7) == 0 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_golden_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 3, 6) == 1 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_golden_move(board, 2, 6, 7) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 7, 5) == 0 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 5, 7) == 1 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 3, 4, 7) == 0 


board675466864 = gamma_board(board)
assert board675466864 is not None
assert board675466864 == ("2.11111.\n"
"12653.34\n"
".6254532\n"
"..1.41.2\n"
"...6454.\n"
"3354...3\n"
"..2156.6\n"
"25.6555.\n")
del board675466864
board675466864 = None
assert gamma_move(board, 4, 6, 6) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_busy_fields(board, 5) == 10 
assert gamma_move(board, 6, 7, 7) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_free_fields(board, 4) == 20 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_golden_move(board, 5, 1, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 2, 6) == 0 


board661236568 = gamma_board(board)
assert board661236568 is not None
assert board661236568 == ("2.11111.\n"
"12653.34\n"
".6254532\n"
"..1.41.2\n"
"...6454.\n"
"3554...3\n"
".52156.6\n"
"25.6555.\n")
del board661236568
board661236568 = None
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 6, 2, 6) == 0 
assert gamma_move(board, 6, 1, 4) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 7, 7) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 6, 0, 7) == 0 
assert gamma_busy_fields(board, 6) == 7 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_busy_fields(board, 6) == 7 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_golden_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 7, 7) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 6, 7, 1) == 0 


board848135441 = gamma_board(board)
assert board848135441 is not None
assert board848135441 == ("2.111113\n"
"12653.34\n"
"12254532\n"
".61.41.2\n"
"...6454.\n"
"35543..3\n"
".52156.6\n"
"2526555.\n")
del board848135441
board848135441 = None
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 7, 3) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 7, 2) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 0, 4) == 1 
assert gamma_golden_possible(board, 6) == 1 


board836131635 = gamma_board(board)
assert board836131635 is not None
assert board836131635 == ("2.111113\n"
"12653.34\n"
"12254532\n"
"661.41.2\n"
"...64544\n"
"35543..3\n"
".52156.6\n"
"2526555.\n")
del board836131635
board836131635 = None
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_move(board, 3, 6, 2) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 4, 7, 7) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 5, 7, 6) == 0 
assert gamma_move(board, 6, 7, 1) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_busy_fields(board, 5) == 12 
assert gamma_golden_move(board, 5, 2, 7) == 0 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_move(board, 6, 7, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_move(board, 1, 6, 6) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 7) == 0 


gamma_delete(board)
