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
uuid: 436258375
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 3, 3)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 1 


board223153036 = gamma_board(board)
assert board223153036 is not None
assert board223153036 == ("1....\n"
".1...\n"
"....2\n")
del board223153036
board223153036 = None
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 1 


board882834624 = gamma_board(board)
assert board882834624 is not None
assert board882834624 == ("1.13.\n"
"21...\n"
"....2\n")
del board882834624
board882834624 = None
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_free_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 2, 0) == 0 


board597943207 = gamma_board(board)
assert board597943207 is not None
assert board597943207 == ("1.33.\n"
"2123.\n"
"2.2.2\n")
del board597943207
board597943207 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_golden_move(board, 3, 1, 1) == 0 


gamma_delete(board)
