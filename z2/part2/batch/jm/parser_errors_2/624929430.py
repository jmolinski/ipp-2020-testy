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
uuid: 624929430
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 4, 4)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 


board270045783 = gamma_board(board)
assert board270045783 is not None
assert board270045783 == ("212.3\n"
".2..1\n"
"13.4.\n")
del board270045783
board270045783 = None
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 1 


board492275666 = gamma_board(board)
assert board492275666 is not None
assert board492275666 == ("21213\n"
".24.1\n"
"33143\n")
del board492275666
board492275666 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 


gamma_delete(board)
