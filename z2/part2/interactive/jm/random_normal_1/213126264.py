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
uuid: 213126264
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 5, 5, 2)
assert board is not None


assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_move(board, 5, 5, 4) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 24 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 


board320601665 = gamma_board(board)
assert board320601665 is not None
assert board320601665 == ("5.2155\n"
"51.1..\n"
"....34\n"
"4....2\n"
"3.....\n")
del board320601665
board320601665 = None
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 


board297271959 = gamma_board(board)
assert board297271959 is not None
assert board297271959 == ("5.2155\n"
"5121..\n"
"....34\n"
"4....2\n"
"3.....\n")
del board297271959
board297271959 = None
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 5, 0) == 0 


board570617535 = gamma_board(board)
assert board570617535 is not None
assert board570617535 == ("5.2155\n"
"5121..\n"
"....34\n"
"4....2\n"
"3.....\n")
del board570617535
board570617535 = None
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 


board398790552 = gamma_board(board)
assert board398790552 is not None
assert board398790552 == ("5.2155\n"
"5121..\n"
"....34\n"
"4....2\n"
"3.....\n")
del board398790552
board398790552 = None
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 4 


board263818563 = gamma_board(board)
assert board263818563 is not None
assert board263818563 == ("5.2155\n"
"5121..\n"
"....34\n"
"4....2\n"
"3.....\n")
del board263818563
board263818563 = None
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_move(board, 5, 4, 2) == 0 


gamma_delete(board)
