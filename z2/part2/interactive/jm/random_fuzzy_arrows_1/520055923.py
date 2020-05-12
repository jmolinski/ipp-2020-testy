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
uuid: 520055923
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 6, 5)
assert board is not None


assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_golden_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 3, 7) == 1 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 6, 3, 4) == 1 
assert gamma_move(board, 6, 2, 3) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 7, 1) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_free_fields(board, 4) == 20 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 5, 4, 6) == 1 
assert gamma_move(board, 6, 2, 6) == 1 
assert gamma_move(board, 6, 2, 7) == 1 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 6, 2, 7) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 6, 2, 6) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_free_fields(board, 4) == 14 
assert gamma_move(board, 5, 2, 4) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_free_fields(board, 5) == 5 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_golden_possible(board, 4) == 1 


board264444165 = gamma_board(board)
assert board264444165 is not None
assert board264444165 == ("..64.\n"
"..635\n"
"4.211\n"
"5356.\n"
"3.612\n"
"23435\n"
".5422\n"
"15..1\n")
del board264444165
board264444165 = None
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_move(board, 6, 4, 7) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 7, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 


board999128798 = gamma_board(board)
assert board999128798 is not None
assert board999128798 == ("..646\n"
"..635\n"
"4.211\n"
"5356.\n"
"3.612\n"
"23435\n"
".5422\n"
"15..1\n")
del board999128798
board999128798 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 1, 7) == 1 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 6, 4, 6) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_golden_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 6, 6, 0) == 0 
assert gamma_move(board, 6, 4, 7) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 2, 4) == 0 


gamma_delete(board)
