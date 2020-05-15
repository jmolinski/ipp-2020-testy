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
uuid: 158412444
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 1 


board350241760 = gamma_board(board)
assert board350241760 is not None
assert board350241760 == ("3..1\n"
"4...\n")
del board350241760
board350241760 = None
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 


board474074820 = gamma_board(board)
assert board474074820 is not None
assert board474074820 == ("3..1\n"
"4442\n")
del board474074820
board474074820 = None
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 1, 1) == 0 


board130521768 = gamma_board(board)
assert board130521768 is not None
assert board130521768 == ("33.1\n"
"4442\n")
del board130521768
board130521768 = None


gamma_delete(board)
