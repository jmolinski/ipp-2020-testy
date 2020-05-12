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
uuid: 259562279
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 6, 5, 3)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_free_fields(board, 3) == 27 


board161997258 = gamma_board(board)
assert board161997258 is not None
assert board161997258 == (".....\n"
"...2.\n"
".....\n"
".....\n"
".31..\n"
".....\n")
del board161997258
board161997258 = None
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_free_fields(board, 2) == 16 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_free_fields(board, 2) == 8 
assert gamma_golden_possible(board, 2) == 1 


board620408324 = gamma_board(board)
assert board620408324 is not None
assert board620408324 == ("13..3\n"
"...22\n"
"15..5\n"
"4.2..\n"
".31.5\n"
"2.4.5\n")
del board620408324
board620408324 = None
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 2, 5) == 1 


board602035533 = gamma_board(board)
assert board602035533 is not None
assert board602035533 == ("13433\n"
"...22\n"
"15..5\n"
"4.2..\n"
".31.5\n"
"2.4.5\n")
del board602035533
board602035533 = None
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_free_fields(board, 5) == 6 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 


board172664753 = gamma_board(board)
assert board172664753 is not None
assert board172664753 == ("13433\n"
"...22\n"
"15.25\n"
"4.2..\n"
".3115\n"
"224.5\n")
del board172664753
board172664753 = None
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_free_fields(board, 4) == 4 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_busy_fields(board, 5) == 4 


gamma_delete(board)
