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
uuid: 613566861
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 5, 4, 7)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 4, 6, 2) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 


board564774384 = gamma_board(board)
assert board564774384 is not None
assert board564774384 == ("42.42..\n"
".132.4.\n"
"..4.1.4\n"
".41..11\n"
"2232...\n")
del board564774384
board564774384 = None
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 


board619051289 = gamma_board(board)
assert board619051289 is not None
assert board619051289 == ("42.42..\n"
".132.4.\n"
"..4.1.4\n"
".41..11\n"
"2232...\n")
del board619051289
board619051289 = None
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 2) == 1 


board375775435 = gamma_board(board)
assert board375775435 is not None
assert board375775435 == ("42.42..\n"
".132.4.\n"
"2.4.1.4\n"
".41.311\n"
"2232...\n")
del board375775435
board375775435 = None
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_free_fields(board, 2) == 5 


board580183913 = gamma_board(board)
assert board580183913 is not None
assert board580183913 == ("4214242\n"
"4133.43\n"
"234.144\n"
"141.311\n"
"22324..\n")
del board580183913
board580183913 = None
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_busy_fields(board, 2) == 7 


gamma_delete(board)
