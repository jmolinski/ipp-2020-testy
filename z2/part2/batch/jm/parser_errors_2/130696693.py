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
uuid: 130696693
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 


board107953461 = gamma_board(board)
assert board107953461 is not None
assert board107953461 == ("...\n"
".1.\n"
"...\n"
"...\n")
del board107953461
board107953461 = None
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 


board630555050 = gamma_board(board)
assert board630555050 is not None
assert board630555050 == ("..2\n"
".12\n"
"...\n"
"..3\n")
del board630555050
board630555050 = None
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 2 


gamma_delete(board)
