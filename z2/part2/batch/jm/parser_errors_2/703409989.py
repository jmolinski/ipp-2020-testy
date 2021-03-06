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
uuid: 703409989
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 9)
assert board is not None


assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 


board338845988 = gamma_board(board)
assert board338845988 is not None
assert board338845988 == ("..2.\n"
"..1.\n"
"....\n"
"1..2\n")
del board338845988
board338845988 = None
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 1 


board410447955 = gamma_board(board)
assert board410447955 is not None
assert board410447955 == ("2122\n"
".11.\n"
".22.\n"
"1212\n")
del board410447955
board410447955 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 


gamma_delete(board)
