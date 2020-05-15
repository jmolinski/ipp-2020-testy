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
uuid: 284444327
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 4)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 


board749710687 = gamma_board(board)
assert board749710687 is not None
assert board749710687 == ("223.\n"
"41..\n"
"4133\n"
"2.11\n")
del board749710687
board749710687 = None
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 


board907158233 = gamma_board(board)
assert board907158233 is not None
assert board907158233 == ("2233\n"
"4122\n"
"4133\n"
"2.11\n")
del board907158233
board907158233 = None
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 


board153402039 = gamma_board(board)
assert board153402039 is not None
assert board153402039 == ("2233\n"
"4122\n"
"4133\n"
"2.11\n")
del board153402039
board153402039 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 


gamma_delete(board)
