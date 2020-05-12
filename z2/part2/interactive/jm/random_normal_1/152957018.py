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
uuid: 152957018
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 5, 10)
assert board is not None


assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_golden_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 5, 7, 3) == 1 
assert gamma_move(board, 1, 7, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 28 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 6, 5) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 5, 0) == 1 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 7, 4) == 1 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_free_fields(board, 5) == 13 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 0 


board110484864 = gamma_board(board)
assert board110484864 is not None
assert board110484864 == ("23123232\n"
"5.1.34.3\n"
".22.11.5\n"
"1.5.23.1\n"
".31442..\n"
"2411543.\n")
del board110484864
board110484864 = None
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 0 


board428751681 = gamma_board(board)
assert board428751681 is not None
assert board428751681 == ("23123232\n"
"521.34.3\n"
".22.1125\n"
"1.5.23.1\n"
"531442..\n"
"2411543.\n")
del board428751681
board428751681 = None
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_free_fields(board, 4) == 10 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_free_fields(board, 5) == 10 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_move(board, 4, 7, 0) == 1 


board843137141 = gamma_board(board)
assert board843137141 is not None
assert board843137141 == ("23123232\n"
"521.34.3\n"
".22.1125\n"
"1.5.23.1\n"
"531442..\n"
"24115434\n")
del board843137141
board843137141 = None
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_busy_fields(board, 1) == 10 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 6, 4) == 1 
assert gamma_move(board, 1, 4, 3) == 0 


gamma_delete(board)
