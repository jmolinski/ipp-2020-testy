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
uuid: 948722412
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 4, 10)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_free_fields(board, 2) == 46 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_free_fields(board, 1) == 42 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_golden_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_free_fields(board, 4) == 36 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_free_fields(board, 2) == 34 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 7, 4) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_free_fields(board, 1) == 29 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_free_fields(board, 4) == 24 
assert gamma_move(board, 1, 7, 0) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 7, 5) == 1 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_free_fields(board, 4) == 22 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_free_fields(board, 2) == 22 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 22 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 6, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 0 


board381301991 = gamma_board(board)
assert board381301991 is not None
assert board381301991 == (".113.3.3\n"
".1.12442\n"
"2423134.\n"
"..33234.\n"
"311112..\n"
"23143131\n")
del board381301991
board381301991 = None
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 


board999958134 = gamma_board(board)
assert board999958134 is not None
assert board999958134 == (".113.3.3\n"
".1.12442\n"
"2423134.\n"
"..33234.\n"
"311112..\n"
"23143131\n")
del board999958134
board999958134 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 6, 5) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_busy_fields(board, 1) == 12 


board761799539 = gamma_board(board)
assert board761799539 is not None
assert board761799539 == (".113.333\n"
".1.12442\n"
"2423134.\n"
"..33234.\n"
"311112..\n"
"23143131\n")
del board761799539
board761799539 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 7, 3) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 7, 2) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_golden_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 7, 4) == 0 


gamma_delete(board)
