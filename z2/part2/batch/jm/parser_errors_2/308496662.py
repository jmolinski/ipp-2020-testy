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
uuid: 308496662
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 17)
assert board is not None


assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_golden_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 


board720852176 = gamma_board(board)
assert board720852176 is not None
assert board720852176 == ("...22\n"
"2...1\n"
"..2.1\n"
"2....\n"
"1.222\n")
del board720852176
board720852176 = None
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 


board479282556 = gamma_board(board)
assert board479282556 is not None
assert board479282556 == ("...22\n"
"2.1.1\n"
".22.1\n"
"2..1.\n"
"11222\n")
del board479282556
board479282556 = None
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_golden_possible(board, 1) == 1 


board404886090 = gamma_board(board)
assert board404886090 is not None
assert board404886090 == (".1.22\n"
"2.1.1\n"
"222.1\n"
"2..1.\n"
"11222\n")
del board404886090
board404886090 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_golden_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


gamma_delete(board)
