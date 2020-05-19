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
uuid: 625909569
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 5)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_free_fields(board, 1) == 10 
assert gamma_golden_possible(board, 1) == 1 


board425178064 = gamma_board(board)
assert board425178064 is not None
assert board425178064 == ("..3..\n"
"22..1\n"
"34411\n"
"...3.\n")
del board425178064
board425178064 = None
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 


board455154133 = gamma_board(board)
assert board455154133 is not None
assert board455154133 == ("4.34.\n"
"22..1\n"
"34411\n"
"3..3.\n")
del board455154133
board455154133 = None
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 4, 3) == 1 


gamma_delete(board)
