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
uuid: 694912875
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 3, 7)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 1 


board883444428 = gamma_board(board)
assert board883444428 is not None
assert board883444428 == ("1..1\n"
"..21\n"
"....\n"
"1...\n")
del board883444428
board883444428 = None
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 0 


board488204880 = gamma_board(board)
assert board488204880 is not None
assert board488204880 == ("1..1\n"
"2221\n"
"....\n"
"1...\n")
del board488204880
board488204880 = None
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 8 


board100631094 = gamma_board(board)
assert board100631094 is not None
assert board100631094 == ("1..1\n"
"2221\n"
".1..\n"
"1...\n")
del board100631094
board100631094 = None
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
