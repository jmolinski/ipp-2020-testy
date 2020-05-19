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
uuid: 701469288
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 3, 3)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 


board966608575 = gamma_board(board)
assert board966608575 is not None
assert board966608575 == ("...\n"
".1.\n"
"233\n"
"1.3\n")
del board966608575
board966608575 = None
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 


board114339956 = gamma_board(board)
assert board114339956 is not None
assert board114339956 == ("...\n"
".13\n"
"233\n"
"133\n")
del board114339956
board114339956 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_golden_move(board, 3, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 


board742520709 = gamma_board(board)
assert board742520709 is not None
assert board742520709 == ("132\n"
"213\n"
"233\n"
"333\n")
del board742520709
board742520709 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 


gamma_delete(board)
