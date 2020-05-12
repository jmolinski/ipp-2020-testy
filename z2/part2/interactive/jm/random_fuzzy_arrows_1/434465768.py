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
uuid: 434465768
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 6, 2)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_free_fields(board, 5) == 18 
assert gamma_move(board, 6, 0, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 6, 4, 1) == 1 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 2, 0) == 0 


board466589628 = gamma_board(board)
assert board466589628 is not None
assert board466589628 == ("6.4.2\n"
"..1.5\n"
".33..\n"
".52.6\n"
"3..4.\n")
del board466589628
board466589628 = None
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_free_fields(board, 5) == 2 
assert gamma_move(board, 6, 4, 2) == 1 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_golden_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 0 


gamma_delete(board)
