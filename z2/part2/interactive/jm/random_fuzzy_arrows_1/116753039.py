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
uuid: 116753039
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 3, 6)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_free_fields(board, 3) == 28 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_golden_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_free_fields(board, 2) == 23 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_free_fields(board, 3) == 21 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_golden_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_move(board, 3, 2, 3) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_golden_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 


board537179194 = gamma_board(board)
assert board537179194 is not None
assert board537179194 == ("..2..\n"
"2233.\n"
"3..2.\n"
".3331\n"
".3123\n"
"31..1\n"
"13312\n")
del board537179194
board537179194 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 0 


board429240621 = gamma_board(board)
assert board429240621 is not None
assert board429240621 == (".32..\n"
"22333\n"
"33322\n"
".3331\n"
".3123\n"
"31..1\n"
"13312\n")
del board429240621
board429240621 = None
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 


gamma_delete(board)
