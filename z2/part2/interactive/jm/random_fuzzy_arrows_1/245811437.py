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
uuid: 245811437
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 6, 3)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 23 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_free_fields(board, 5) == 15 
assert gamma_move(board, 6, 0, 1) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_move(board, 6, 1, 0) == 1 
assert gamma_free_fields(board, 6) == 2 


board207404899 = gamma_board(board)
assert board207404899 is not None
assert board207404899 == (".341.4\n"
"......\n"
"6561.2\n"
"5641..\n")
del board207404899
board207404899 = None
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 0, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_free_fields(board, 6) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 4) == 0 


board837162003 = gamma_board(board)
assert board837162003 is not None
assert board837162003 == (".341.4\n"
"625...\n"
"6561.2\n"
"5641.2\n")
del board837162003
board837162003 = None
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 3, 3) == 0 


gamma_delete(board)
