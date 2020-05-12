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
uuid: 397974996
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 5, 8)
assert board is not None


assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_free_fields(board, 4) == 23 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 1 


board260237854 = gamma_board(board)
assert board260237854 is not None
assert board260237854 == (".2...1.\n"
"..54.1.\n"
"322.1..\n"
"1...34.\n"
".353..2\n")
del board260237854
board260237854 = None
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_golden_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_golden_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 6, 4) == 1 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_free_fields(board, 5) == 10 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 5, 0, 0) == 0 


board477402857 = gamma_board(board)
assert board477402857 is not None
assert board477402857 == ("12.4.13\n"
"..52.1.\n"
"322.14.\n"
"1352344\n"
"1353.22\n")
del board477402857
board477402857 = None
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_free_fields(board, 5) == 7 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_golden_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_golden_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 5, 6, 1) == 0 


gamma_delete(board)
