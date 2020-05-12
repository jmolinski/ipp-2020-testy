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
uuid: 341917792
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 6, 5, 3)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 6, 5) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 5, 6, 2) == 1 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 0, 6) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_busy_fields(board, 5) == 4 


board134285018 = gamma_board(board)
assert board134285018 is not None
assert board134285018 == ("2..12.5\n"
".532.4.\n"
"....4.3\n"
".....55\n"
"1.31...\n"
"..4....\n")
del board134285018
board134285018 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 6, 4) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_golden_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_golden_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 6, 4) == 0 


board964608384 = gamma_board(board)
assert board964608384 is not None
assert board964608384 == ("22.1235\n"
"2532333\n"
"....4.3\n"
"4.31.55\n"
"1131...\n"
"1.4....\n")
del board964608384
board964608384 = None
assert gamma_move(board, 5, 5, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 4, 0, 5) == 0 


board468071154 = gamma_board(board)
assert board468071154 is not None
assert board468071154 == ("2221235\n"
"2532333\n"
"....4.3\n"
"4331.55\n"
"113115.\n"
"1.4....\n")
del board468071154
board468071154 = None
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 0, 5) == 0 


gamma_delete(board)
