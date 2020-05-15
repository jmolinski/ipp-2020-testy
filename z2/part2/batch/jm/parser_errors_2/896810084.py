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
uuid: 896810084
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 2, 15)
assert board is not None


assert gamma_golden_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 


board920589001 = gamma_board(board)
assert board920589001 is not None
assert board920589001 == (".1...\n"
".....\n"
"..1..\n")
del board920589001
board920589001 = None
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 1 


board184030381 = gamma_board(board)
assert board184030381 is not None
assert board184030381 == ("2112.\n"
".221.\n"
".111.\n")
del board184030381
board184030381 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 


board699440288 = gamma_board(board)
assert board699440288 is not None
assert board699440288 == ("2112.\n"
".221.\n"
".111.\n")
del board699440288
board699440288 = None
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


gamma_delete(board)
