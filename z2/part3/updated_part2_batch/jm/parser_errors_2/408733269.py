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
uuid: 408733269
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 3, 3, 2)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 4 


board941848873 = gamma_board(board)
assert board941848873 is not None
assert board941848873 == ("3211\n"
"311.\n"
"1...\n")
del board941848873
board941848873 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_free_fields(board, 3) == 2 


gamma_delete(board)
