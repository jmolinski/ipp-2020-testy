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
uuid: 947859679
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 3, 3)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_busy_fields(board, 1) == 1 


board416595220 = gamma_board(board)
assert board416595220 is not None
assert board416595220 == ("....\n"
"....\n"
"..1.\n"
"....\n"
"....\n")
del board416595220
board416595220 = None
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 


board904639699 = gamma_board(board)
assert board904639699 is not None
assert board904639699 == ("....\n"
".1.2\n"
"..1.\n"
".31.\n"
"2.23\n")
del board904639699
board904639699 = None
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 


gamma_delete(board)