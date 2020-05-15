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
uuid: 598259602
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 2)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 


board726286581 = gamma_board(board)
assert board726286581 is not None
assert board726286581 == ("...\n"
"...\n"
"..1\n"
"213\n"
"32.\n")
del board726286581
board726286581 = None
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 2 


board646077400 = gamma_board(board)
assert board646077400 is not None
assert board646077400 == ("..1\n"
"..1\n"
"441\n"
"213\n"
"32.\n")
del board646077400
board646077400 = None
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 1 


board619585433 = gamma_board(board)
assert board619585433 is not None
assert board619585433 == ("..1\n"
"..1\n"
"441\n"
"213\n"
"324\n")
del board619585433
board619585433 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 0 


board756911916 = gamma_board(board)
assert board756911916 is not None
assert board756911916 == ("..1\n"
"..1\n"
"441\n"
"213\n"
"324\n")
del board756911916
board756911916 = None
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 


board647144511 = gamma_board(board)
assert board647144511 is not None
assert board647144511 == ("..1\n"
"..1\n"
"441\n"
"213\n"
"324\n")
del board647144511
board647144511 = None


gamma_delete(board)
