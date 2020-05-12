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
uuid: 549176086
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 6, 2)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 5, 0) == 0 


board520409310 = gamma_board(board)
assert board520409310 is not None
assert board520409310 == ("1...\n"
"....\n"
"....\n"
"1...\n"
"3...\n"
"5.6.\n"
"52..\n")
del board520409310
board520409310 = None
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 6, 2, 0) == 1 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 5, 0, 6) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_busy_fields(board, 6) == 2 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_golden_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_free_fields(board, 5) == 1 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 6, 6, 2) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 0 


board624684821 = gamma_board(board)
assert board624684821 is not None
assert board624684821 == ("1...\n"
"544.\n"
"2...\n"
"1..4\n"
"3.44\n"
"5.63\n"
"526.\n")
del board624684821
board624684821 = None
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 6, 1, 6) == 1 
assert gamma_free_fields(board, 6) == 3 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 


board989845181 = gamma_board(board)
assert board989845181 is not None
assert board989845181 == ("16..\n"
"544.\n"
"2...\n"
"1..4\n"
"3.44\n"
"5.63\n"
"526.\n")
del board989845181
board989845181 = None
assert gamma_move(board, 2, 3, 1) == 0 


gamma_delete(board)
