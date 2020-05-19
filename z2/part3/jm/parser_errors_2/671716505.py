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
uuid: 671716505
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 4, 2)
assert board is not None


assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_golden_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_free_fields(board, 4) == 7 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 2 


board938515808 = gamma_board(board)
assert board938515808 is not None
assert board938515808 == ("3441\n"
"4342\n"
".22.\n"
"111.\n")
del board938515808
board938515808 = None
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 0 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 


board143745438 = gamma_board(board)
assert board143745438 is not None
assert board143745438 == ("3441\n"
"4342\n"
".22.\n"
"111.\n")
del board143745438
board143745438 = None
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 


gamma_delete(board)
