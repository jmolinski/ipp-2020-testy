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
uuid: 814437615
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 14)
assert board is not None


assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 


board227435576 = gamma_board(board)
assert board227435576 is not None
assert board227435576 == ("..12\n"
".222\n"
"1211\n"
".212\n"
"22.2\n")
del board227435576
board227435576 = None
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 0 


board278379093 = gamma_board(board)
assert board278379093 is not None
assert board278379093 == ("..12\n"
"1222\n"
"1211\n"
"2212\n"
"22.2\n")
del board278379093
board278379093 = None
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 


board772036913 = gamma_board(board)
assert board772036913 is not None
assert board772036913 == ("..12\n"
"1222\n"
"1211\n"
"2212\n"
"22.2\n")
del board772036913
board772036913 = None
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 


board396208078 = gamma_board(board)
assert board396208078 is not None
assert board396208078 == ("..12\n"
"1222\n"
"1211\n"
"2212\n"
"22.2\n")
del board396208078
board396208078 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
