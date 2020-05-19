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
uuid: 727439983
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 2, 2)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 


board761761487 = gamma_board(board)
assert board761761487 is not None
assert board761761487 == ("222.\n"
"2212\n"
"1111\n")
del board761761487
board761761487 = None
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_busy_fields(board, 2) == 7 


board968580124 = gamma_board(board)
assert board968580124 is not None
assert board968580124 == ("2222\n"
"2212\n"
"1111\n")
del board968580124
board968580124 = None


gamma_delete(board)
