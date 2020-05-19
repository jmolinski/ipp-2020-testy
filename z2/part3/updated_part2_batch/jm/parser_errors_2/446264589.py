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
uuid: 446264589
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 3, 2)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 1 


board967052380 = gamma_board(board)
assert board967052380 is not None
assert board967052380 == ("2....\n"
".113.\n")
del board967052380
board967052380 = None
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 


board435120479 = gamma_board(board)
assert board435120479 is not None
assert board435120479 == ("23.11\n"
"21133\n")
del board435120479
board435120479 = None
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 


board101395338 = gamma_board(board)
assert board101395338 is not None
assert board101395338 == ("23.11\n"
"11133\n")
del board101395338
board101395338 = None


gamma_delete(board)
