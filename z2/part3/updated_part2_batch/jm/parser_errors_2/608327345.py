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
uuid: 608327345
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 2)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 


board535588385 = gamma_board(board)
assert board535588385 is not None
assert board535588385 == ("...\n"
"...\n"
"...\n"
".1.\n"
"...\n")
del board535588385
board535588385 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_busy_fields(board, 4) == 2 


board537610338 = gamma_board(board)
assert board537610338 is not None
assert board537610338 == ("32.\n"
"3..\n"
"412\n"
".1.\n"
"143\n")
del board537610338
board537610338 = None
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 1, 0) == 0 


board170205939 = gamma_board(board)
assert board170205939 is not None
assert board170205939 == ("32.\n"
"3..\n"
"412\n"
".1.\n"
"143\n")
del board170205939
board170205939 = None
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 


board802330687 = gamma_board(board)
assert board802330687 is not None
assert board802330687 == ("32.\n"
"3..\n"
"412\n"
".1.\n"
"143\n")
del board802330687
board802330687 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
