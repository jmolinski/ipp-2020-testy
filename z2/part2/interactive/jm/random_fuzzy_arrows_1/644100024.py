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
uuid: 644100024
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 4, 13)
assert board is not None


assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_free_fields(board, 4) == 45 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 7, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_golden_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_free_fields(board, 2) == 35 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 34 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 7, 4) == 1 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_golden_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 5, 5) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 7, 2) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 1, 4, 0) == 0 


board867792177 = gamma_board(board)
assert board867792177 is not None
assert board867792177 == ("423..1..\n"
"31131422\n"
"1.14.441\n"
"4412.3.1\n"
"1323412.\n"
"23233212\n")
del board867792177
board867792177 = None
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_golden_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_golden_move(board, 4, 4, 7) == 0 


gamma_delete(board)
