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
uuid: 772950659
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 3, 23)
assert board is not None


assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 7, 2) == 1 
assert gamma_free_fields(board, 1) == 42 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 3, 7, 5) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_free_fields(board, 2) == 38 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_golden_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_free_fields(board, 3) == 34 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_golden_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_free_fields(board, 2) == 29 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_free_fields(board, 3) == 24 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_move(board, 2, 4, 4) == 1 
assert gamma_free_fields(board, 3) == 22 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 22 


board795543184 = gamma_board(board)
assert board795543184 is not None
assert board795543184 == ("211322.3\n"
"..3.2...\n"
"3.23121.\n"
"2333..21\n"
"...1122.\n"
".3......\n")
del board795543184
board795543184 = None
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_free_fields(board, 2) == 22 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 6, 4) == 1 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_free_fields(board, 3) == 14 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_golden_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_busy_fields(board, 2) == 15 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 6, 5) == 1 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_busy_fields(board, 2) == 15 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_busy_fields(board, 3) == 15 


gamma_delete(board)
