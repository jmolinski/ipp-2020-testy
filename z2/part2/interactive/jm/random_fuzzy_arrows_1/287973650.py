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
uuid: 287973650
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 5, 11)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 5, 6, 3) == 1 
assert gamma_move(board, 1, 7, 1) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 4, 1, 4) == 1 


board567497060 = gamma_board(board)
assert board567497060 is not None
assert board567497060 == ("2.......\n"
".43.....\n"
".1....5.\n"
"......2.\n"
".....3.1\n"
"........\n")
del board567497060
board567497060 = None
assert gamma_move(board, 5, 5, 0) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_free_fields(board, 5) == 35 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_free_fields(board, 5) == 33 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_busy_fields(board, 5) == 5 


board161217536 = gamma_board(board)
assert board161217536 is not None
assert board161217536 == ("21.1.3..\n"
".43.3...\n"
".1.51.5.\n"
".2.3422.\n"
"51.5.3.1\n"
"..2..5..\n")
del board161217536
board161217536 = None
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_free_fields(board, 1) == 24 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 7, 4) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_free_fields(board, 2) == 19 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 4) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_golden_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_free_fields(board, 4) == 14 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 5, 2, 5) == 1 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 6, 5) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_busy_fields(board, 5) == 9 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 7, 2) == 1 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_golden_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_free_fields(board, 5) == 7 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_golden_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_free_fields(board, 4) == 7 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 1 


gamma_delete(board)
