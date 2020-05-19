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
uuid: 886618633
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 3)
assert board is not None


assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 


board656446527 = gamma_board(board)
assert board656446527 is not None
assert board656446527 == ("4.3.2\n"
".4...\n"
"...1.\n"
"22...\n")
del board656446527
board656446527 = None
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


board283682585 = gamma_board(board)
assert board283682585 is not None
assert board283682585 == ("4.3.2\n"
".41..\n"
".4.1.\n"
"224..\n")
del board283682585
board283682585 = None
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 0 


board331372009 = gamma_board(board)
assert board331372009 is not None
assert board331372009 == ("4.3.2\n"
".41..\n"
".4.1.\n"
"224..\n")
del board331372009
board331372009 = None
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


board428223606 = gamma_board(board)
assert board428223606 is not None
assert board428223606 == ("4.3.2\n"
".41..\n"
".4.1.\n"
"224..\n")
del board428223606
board428223606 = None
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_golden_move(board, 3, 2, 2) == 1 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 


board287389095 = gamma_board(board)
assert board287389095 is not None
assert board287389095 == ("433.2\n"
".43.3\n"
".4.1.\n"
"12433\n")
del board287389095
board287389095 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 


board841056215 = gamma_board(board)
assert board841056215 is not None
assert board841056215 == ("433.2\n"
".43.3\n"
".4.1.\n"
"12433\n")
del board841056215
board841056215 = None
assert gamma_move(board, 4, 1, 2) == 0 


gamma_delete(board)
