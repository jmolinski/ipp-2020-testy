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
uuid: 200288478
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 6, 6, 3)
assert board is not None


assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 


board984008274 = gamma_board(board)
assert board984008274 is not None
assert board984008274 == ("....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"...2\n")
del board984008274
board984008274 = None
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_move(board, 6, 1, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 


board802887318 = gamma_board(board)
assert board802887318 is not None
assert board802887318 == ("...4\n"
"....\n"
"...2\n"
"....\n"
".6..\n"
".2.2\n")
del board802887318
board802887318 = None
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_free_fields(board, 3) == 18 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_free_fields(board, 4) == 17 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 6, 3, 2) == 1 
assert gamma_move(board, 6, 0, 5) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_free_fields(board, 5) == 8 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_free_fields(board, 6) == 4 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 6, 5, 1) == 0 
assert gamma_move(board, 6, 1, 5) == 1 


gamma_delete(board)
