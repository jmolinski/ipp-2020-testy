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
uuid: 288376970
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 6, 7)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 6, 4, 2) == 1 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 0, 7) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_busy_fields(board, 5) == 0 
assert gamma_move(board, 6, 4, 1) == 1 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_golden_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 6, 1, 4) == 1 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 1, 7) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 6, 1, 1) == 1 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 5, 7, 2) == 0 
assert gamma_free_fields(board, 5) == 14 
assert gamma_free_fields(board, 6) == 14 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 3, 7) == 1 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_free_fields(board, 4) == 10 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_free_fields(board, 5) == 10 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_busy_fields(board, 5) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 1, 3) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 


board872361505 = gamma_board(board)
assert board872361505 is not None
assert board872361505 == ("1124.\n"
".2.22\n"
"433..\n"
"36.31\n"
"4612.\n"
".1126\n"
".6366\n"
"12223\n")
del board872361505
board872361505 = None
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_free_fields(board, 5) == 9 
assert gamma_move(board, 6, 5, 4) == 0 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 5, 3, 4) == 0 


board328128914 = gamma_board(board)
assert board328128914 is not None
assert board328128914 == ("1124.\n"
".2.22\n"
"433..\n"
"36.31\n"
"4612.\n"
".1126\n"
".6366\n"
"12223\n")
del board328128914
board328128914 = None
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 4, 7) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 6, 4, 7) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 1, 7) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
