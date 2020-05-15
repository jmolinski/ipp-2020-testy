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
uuid: 251662118
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 2, 7)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 1 


board487002425 = gamma_board(board)
assert board487002425 is not None
assert board487002425 == (".1...\n"
"..11.\n"
".22..\n"
".2...\n")
del board487002425
board487002425 = None
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 1 


board268937386 = gamma_board(board)
assert board268937386 is not None
assert board268937386 == ("21.2.\n"
"2.111\n"
".2211\n"
"12..1\n")
del board268937386
board268937386 = None
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_free_fields(board, 2) == 2 


board411721946 = gamma_board(board)
assert board411721946 is not None
assert board411721946 == ("21.22\n"
"21111\n"
"12211\n"
"122.1\n")
del board411721946
board411721946 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


gamma_delete(board)
