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
uuid: 743145486
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 6)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_golden_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_busy_fields(board, 3) == 1 


board267237466 = gamma_board(board)
assert board267237466 is not None
assert board267237466 == (".12\n"
"..2\n"
".11\n"
"11.\n"
"1.3\n")
del board267237466
board267237466 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 


board500603543 = gamma_board(board)
assert board500603543 is not None
assert board500603543 == ("212\n"
".32\n"
"111\n"
"11.\n"
"213\n")
del board500603543
board500603543 = None


gamma_delete(board)
