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
uuid: 245552376
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 6, 5, 5)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 1) == 22 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 1 


board637157071 = gamma_board(board)
assert board637157071 is not None
assert board637157071 == ("....\n"
"..1.\n"
"....\n"
"1...\n"
"2...\n"
".3..\n")
del board637157071
board637157071 = None
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_free_fields(board, 5) == 6 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 


gamma_delete(board)
