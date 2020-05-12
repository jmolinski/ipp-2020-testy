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
uuid: 414723703
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 6, 11)
assert board is not None


assert gamma_move(board, 1, 7, 6) == 1 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 6, 7, 2) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_free_fields(board, 4) == 54 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 2, 5) == 1 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 3, 7) == 1 
assert gamma_move(board, 4, 5, 7) == 1 
assert gamma_move(board, 5, 7, 2) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 6, 0, 3) == 1 
assert gamma_move(board, 6, 4, 5) == 1 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 5, 6) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 7, 7) == 1 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 4, 4) == 1 
assert gamma_move(board, 6, 7, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_move(board, 4, 1, 7) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 4) == 1 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 6, 4, 1) == 1 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 6, 4, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 3, 2, 6) == 1 
assert gamma_golden_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 7) == 1 
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 4, 6, 6) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_golden_move(board, 5, 4, 3) == 1 
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 5, 3) == 0 


board791313350 = gamma_board(board)
assert board791313350 is not None
assert board791313350 == ("44.3.4.4\n"
".2336241\n"
"5.6.61..\n"
".32465.6\n"
"65.653..\n"
"4.61.116\n"
"..4661..\n"
"55.12...\n")
del board791313350
board791313350 = None
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_move(board, 6, 0, 7) == 0 
assert gamma_move(board, 6, 4, 2) == 1 
assert gamma_free_fields(board, 6) == 22 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 6, 3) == 1 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 6, 5, 0) == 1 
assert gamma_move(board, 1, 4, 6) == 0 


board901236666 = gamma_board(board)
assert board901236666 is not None
assert board901236666 == ("44.3.4.4\n"
".2336241\n"
"5.6.61..\n"
".32465.6\n"
"65.6535.\n"
"4.616116\n"
"..4661..\n"
"551126..\n")
del board901236666
board901236666 = None
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 6, 1) == 1 
assert gamma_golden_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 6, 5, 1) == 0 
assert gamma_move(board, 6, 1, 5) == 1 
assert gamma_golden_move(board, 6, 6, 6) == 1 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 0, 6) == 1 


board618007408 = gamma_board(board)
assert board618007408 is not None
assert board618007408 == ("44.3.4.4\n"
"42336261\n"
"566.61..\n"
".32465.6\n"
"65.6535.\n"
"4.616116\n"
".346615.\n"
"551126..\n")
del board618007408
board618007408 = None
assert gamma_move(board, 5, 7, 0) == 1 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 5, 7, 6) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 6, 7) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 


board156220217 = gamma_board(board)
assert board156220217 is not None
assert board156220217 == ("44.3.414\n"
"42336261\n"
"566.61..\n"
".32465.6\n"
"65.6535.\n"
"43616116\n"
".346615.\n"
"551126.5\n")
del board156220217
board156220217 = None
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 0, 5) == 0 


board840750507 = gamma_board(board)
assert board840750507 is not None
assert board840750507 == ("44.3.414\n"
"42336261\n"
"566.61..\n"
".32465.6\n"
"65.6535.\n"
"43616116\n"
".346615.\n"
"551126.5\n")
del board840750507
board840750507 = None
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_move(board, 5, 7, 6) == 0 
assert gamma_free_fields(board, 5) == 12 
assert gamma_move(board, 6, 7, 4) == 0 
assert gamma_busy_fields(board, 6) == 15 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 6, 7, 2) == 0 
assert gamma_move(board, 6, 6, 4) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_move(board, 6, 7, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_move(board, 2, 7, 6) == 1 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 5, 7, 7) == 0 
assert gamma_move(board, 6, 5, 7) == 0 
assert gamma_busy_fields(board, 6) == 16 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 1, 2, 7) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_golden_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 6, 0, 6) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_free_fields(board, 6) == 9 
assert gamma_golden_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 6, 7) == 0 
assert gamma_move(board, 2, 3, 7) == 0 


gamma_delete(board)
