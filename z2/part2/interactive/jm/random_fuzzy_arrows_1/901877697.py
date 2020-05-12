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
uuid: 901877697
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 6, 5, 4)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_free_fields(board, 5) == 21 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 1 


board825110275 = gamma_board(board)
assert board825110275 is not None
assert board825110275 == ("..423\n"
"51.3.\n"
".4...\n"
"..2..\n"
".5...\n"
"..1..\n")
del board825110275
board825110275 = None
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 0 


board936073187 = gamma_board(board)
assert board936073187 is not None
assert board936073187 == ("..423\n"
"51332\n"
".41..\n"
"..2..\n"
".5.3.\n"
"3.1..\n")
del board936073187
board936073187 = None
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_free_fields(board, 4) == 14 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 


board493010230 = gamma_board(board)
assert board493010230 is not None
assert board493010230 == ("21423\n"
"51332\n"
".414.\n"
"..2.4\n"
"15.3.\n"
"3.15.\n")
del board493010230
board493010230 = None
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 


board567230902 = gamma_board(board)
assert board567230902 is not None
assert board567230902 == ("21423\n"
"51332\n"
".414.\n"
"..2.4\n"
"1533.\n"
"3.15.\n")
del board567230902
board567230902 = None
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 2, 2) == 0 


gamma_delete(board)
