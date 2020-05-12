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
uuid: 105128420
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 3, 13)
assert board is not None


assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 2) == 29 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_free_fields(board, 1) == 28 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_free_fields(board, 2) == 27 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_golden_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 2, 7) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 4, 7) == 1 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_free_fields(board, 3) == 15 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_free_fields(board, 2) == 15 


board283739298 = gamma_board(board)
assert board283739298 is not None
assert board283739298 == ("..123\n"
"23...\n"
"2.221\n"
"21.1.\n"
"113.2\n"
"..1.1\n"
".13.3\n"
"3331.\n")
del board283739298
board283739298 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 9 


board458546661 = gamma_board(board)
assert board458546661 is not None
assert board458546661 == ("3.123\n"
"23.1.\n"
"2.221\n"
"21.13\n"
"11322\n"
"..1.1\n"
"31323\n"
"3331.\n")
del board458546661
board458546661 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 6 


gamma_delete(board)
