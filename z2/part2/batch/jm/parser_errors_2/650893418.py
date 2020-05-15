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
uuid: 650893418
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 3)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 1 


board938703258 = gamma_board(board)
assert board938703258 is not None
assert board938703258 == ("1112.\n"
"..1..\n"
"..1..\n"
".2221\n")
del board938703258
board938703258 = None
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 7 


board979300393 = gamma_board(board)
assert board979300393 is not None
assert board979300393 == ("11123\n"
"21121\n"
".31..\n"
"22221\n")
del board979300393
board979300393 = None
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 


board837477878 = gamma_board(board)
assert board837477878 is not None
assert board837477878 == ("11123\n"
"21121\n"
".31..\n"
"22221\n")
del board837477878
board837477878 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 


gamma_delete(board)
