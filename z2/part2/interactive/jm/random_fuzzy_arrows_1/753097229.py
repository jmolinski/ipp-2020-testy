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
uuid: 753097229
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 6, 6, 3)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_free_fields(board, 2) == 22 
assert gamma_golden_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_free_fields(board, 4) == 19 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 6, 5, 1) == 0 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_free_fields(board, 6) == 13 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 3, 0) == 1 


board717240267 = gamma_board(board)
assert board717240267 is not None
assert board717240267 == ("44..\n"
"2...\n"
"..11\n"
"4.63\n"
"2412\n"
".5.5\n")
del board717240267
board717240267 = None
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_busy_fields(board, 6) == 1 
assert gamma_free_fields(board, 6) == 8 


gamma_delete(board)
