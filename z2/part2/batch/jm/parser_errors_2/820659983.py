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
uuid: 820659983
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 3, 6)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 2, 3) == 0 


board980380719 = gamma_board(board)
assert board980380719 is not None
assert board980380719 == ("..2.\n"
".1..\n"
"....\n"
"..1.\n")
del board980380719
board980380719 = None
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_busy_fields(board, 3) == 1 


board284910825 = gamma_board(board)
assert board284910825 is not None
assert board284910825 == ("2121\n"
".12.\n"
"....\n"
".31.\n")
del board284910825
board284910825 = None
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 


board223171238 = gamma_board(board)
assert board223171238 is not None
assert board223171238 == ("2121\n"
".12.\n"
"31..\n"
"2311\n")
del board223171238
board223171238 = None
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 1) == 0 


board547608446 = gamma_board(board)
assert board547608446 is not None
assert board547608446 == ("2121\n"
"112.\n"
"31..\n"
"2311\n")
del board547608446
board547608446 = None
assert gamma_move(board, 1, 1, 2) == 0 


board145791009 = gamma_board(board)
assert board145791009 is not None
assert board145791009 == ("2121\n"
"112.\n"
"31..\n"
"2311\n")
del board145791009
board145791009 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 0 


board704315412 = gamma_board(board)
assert board704315412 is not None
assert board704315412 == ("2121\n"
"112.\n"
"31.3\n"
"2311\n")
del board704315412
board704315412 = None
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


gamma_delete(board)
