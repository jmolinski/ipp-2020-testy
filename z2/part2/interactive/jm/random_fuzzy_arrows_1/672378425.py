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
uuid: 672378425
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 4, 3)
assert board is not None


assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 28 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_free_fields(board, 4) == 25 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 


board688517202 = gamma_board(board)
assert board688517202 is not None
assert board688517202 == (".1.1...\n"
"...232.\n"
"..444..\n"
"4..2...\n"
"..13...\n")
del board688517202
board688517202 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 3, 4, 6) == 0 


board371837804 = gamma_board(board)
assert board371837804 is not None
assert board371837804 == ("11.14..\n"
"..3232.\n"
".4444..\n"
"4..2...\n"
"..13...\n")
del board371837804
board371837804 = None
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_free_fields(board, 4) == 9 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 5 


gamma_delete(board)
