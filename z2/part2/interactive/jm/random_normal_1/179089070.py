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
uuid: 179089070
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 6, 2)
assert board is not None


assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_free_fields(board, 4) == 19 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_free_fields(board, 5) == 18 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 1, 1) == 0 


board585955793 = gamma_board(board)
assert board585955793 is not None
assert board585955793 == ("22...3\n"
"3.....\n"
".426..\n"
".5....\n")
del board585955793
board585955793 = None
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_free_fields(board, 6) == 16 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 3, 0) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_free_fields(board, 5) == 2 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_free_fields(board, 4) == 4 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_golden_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_golden_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 3, 1) == 0 


gamma_delete(board)
