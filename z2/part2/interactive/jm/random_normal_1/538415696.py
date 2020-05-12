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
uuid: 538415696
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 6, 5, 4)
assert board is not None


assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 5, 1, 2) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_golden_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_free_fields(board, 4) == 15 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 1, 0, 5) == 0 


board498560140 = gamma_board(board)
assert board498560140 is not None
assert board498560140 == (".2151\n"
"..1.2\n"
"52253\n"
".51..\n"
".42.3\n"
"11333\n")
del board498560140
board498560140 = None
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_golden_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 


board545367159 = gamma_board(board)
assert board545367159 is not None
assert board545367159 == (".2151\n"
"..1.2\n"
"52253\n"
".51..\n"
".42.3\n"
"11333\n")
del board545367159
board545367159 = None
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 


board501662886 = gamma_board(board)
assert board501662886 is not None
assert board501662886 == ("42151\n"
".11.2\n"
"52253\n"
".51..\n"
".42.3\n"
"11333\n")
del board501662886
board501662886 = None
assert gamma_move(board, 5, 2, 3) == 0 


gamma_delete(board)
