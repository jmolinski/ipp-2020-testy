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
uuid: 815149459
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 2, 9)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 2) == 0 


board111589126 = gamma_board(board)
assert board111589126 is not None
assert board111589126 == (".1\n"
"1.\n"
"2.\n"
".2\n"
"21\n")
del board111589126
board111589126 = None
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 


board306606488 = gamma_board(board)
assert board306606488 is not None
assert board306606488 == (".1\n"
"1.\n"
"21\n"
"22\n"
"21\n")
del board306606488
board306606488 = None
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 1) == 0 


gamma_delete(board)
