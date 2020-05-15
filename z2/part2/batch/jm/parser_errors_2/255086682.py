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
uuid: 255086682
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 13)
assert board is not None


assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 1 


board955733009 = gamma_board(board)
assert board955733009 is not None
assert board955733009 == (".2.2\n"
"1.11\n"
"....\n"
"..2.\n"
".1..\n")
del board955733009
board955733009 = None
assert gamma_golden_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 


board407427540 = gamma_board(board)
assert board407427540 is not None
assert board407427540 == ("22.2\n"
"1.11\n"
".2.1\n"
"2121\n"
"111.\n")
del board407427540
board407427540 = None
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 4, 1) == 0 


board971947665 = gamma_board(board)
assert board971947665 is not None
assert board971947665 == ("22.2\n"
"1.11\n"
".211\n"
"2121\n"
"111.\n")
del board971947665
board971947665 = None
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 


board846271786 = gamma_board(board)
assert board846271786 is not None
assert board846271786 == ("22.2\n"
"1211\n"
".211\n"
"2121\n"
"111.\n")
del board846271786
board846271786 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 


gamma_delete(board)
