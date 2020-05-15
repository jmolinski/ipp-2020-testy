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
uuid: 261077530
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 2, 8)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 


board459037258 = gamma_board(board)
assert board459037258 is not None
assert board459037258 == ("...\n"
"1..\n"
"..2\n"
".21\n"
"2.2\n")
del board459037258
board459037258 = None
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 


board450998382 = gamma_board(board)
assert board450998382 is not None
assert board450998382 == ("...\n"
"1.2\n"
"..2\n"
".21\n"
"1.2\n")
del board450998382
board450998382 = None
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 5 


board131164228 = gamma_board(board)
assert board131164228 is not None
assert board131164228 == (".2.\n"
"122\n"
"..2\n"
"221\n"
"1.2\n")
del board131164228
board131164228 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 


gamma_delete(board)
