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
uuid: 955447123
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 10)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_golden_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 1 


board588483991 = gamma_board(board)
assert board588483991 is not None
assert board588483991 == ("2.33.\n"
"11..1\n"
"..23.\n"
"..11.\n")
del board588483991
board588483991 = None
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 


board398714567 = gamma_board(board)
assert board398714567 is not None
assert board398714567 == ("2.33.\n"
"112.1\n"
"3.231\n"
".311.\n")
del board398714567
board398714567 = None
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 8 


gamma_delete(board)
