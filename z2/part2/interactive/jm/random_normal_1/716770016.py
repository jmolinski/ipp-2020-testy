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
uuid: 716770016
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 4, 4, 5)
assert board is not None


assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_golden_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 4, 7, 2) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_free_fields(board, 4) == 21 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 7, 1) == 1 
assert gamma_free_fields(board, 2) == 17 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 1 


board777942422 = gamma_board(board)
assert board777942422 is not None
assert board777942422 == (".142....\n"
"1.122..4\n"
"2311.412\n"
".4.41...\n")
del board777942422
board777942422 = None
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 7, 3) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 7, 0) == 1 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 5, 2) == 0 


board288167951 = gamma_board(board)
assert board288167951 is not None
assert board288167951 == (".142...2\n"
"1.1224.4\n"
"2311.412\n"
"24.412.2\n")
del board288167951
board288167951 = None
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_golden_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_golden_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 0 


gamma_delete(board)
