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
uuid: 545896497
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 4, 6, 4)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_free_fields(board, 2) == 25 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_golden_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 6, 0, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_golden_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 6, 4, 1) == 1 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_golden_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_move(board, 6, 6, 0) == 1 
assert gamma_golden_move(board, 6, 0, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 5, 2) == 0 


board673676841 = gamma_board(board)
assert board673676841 is not None
assert board673676841 == ("11.4...\n"
"6.33.22\n"
"641.6.3\n"
"354.3.6\n")
del board673676841
board673676841 = None
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 6, 6, 3) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_golden_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_free_fields(board, 5) == 6 
assert gamma_move(board, 6, 0, 5) == 0 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_golden_possible(board, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 1 


board464396775 = gamma_board(board)
assert board464396775 is not None
assert board464396775 == ("1134..6\n"
"6133.22\n"
"64126.3\n"
"35443.6\n")
del board464396775
board464396775 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_golden_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 6, 6, 0) == 0 
assert gamma_golden_possible(board, 6) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 6, 2) == 0 


gamma_delete(board)
