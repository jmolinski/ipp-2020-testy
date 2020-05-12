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
uuid: 264808565
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 5, 5)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_golden_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_free_fields(board, 4) == 14 
assert gamma_golden_possible(board, 4) == 1 


board670533174 = gamma_board(board)
assert board670533174 is not None
assert board670533174 == (".324\n"
"5.34\n"
".4..\n"
"2.12\n"
"....\n"
"31.5\n"
"..3.\n")
del board670533174
board670533174 = None
assert gamma_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_golden_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 1 


board505004091 = gamma_board(board)
assert board505004091 is not None
assert board505004091 == (".324\n"
"5.34\n"
".4..\n"
"2212\n"
"32..\n"
"31.5\n"
"5.31\n")
del board505004091
board505004091 = None
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 


board837122173 = gamma_board(board)
assert board837122173 is not None
assert board837122173 == ("1324\n"
"5.34\n"
".4..\n"
"2212\n"
"3223\n"
"31.5\n"
"5.31\n")
del board837122173
board837122173 = None
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_free_fields(board, 5) == 5 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 6) == 0 


board424392865 = gamma_board(board)
assert board424392865 is not None
assert board424392865 == ("1324\n"
"5.34\n"
".4.4\n"
"2212\n"
"3223\n"
"31.5\n"
"5.31\n")
del board424392865
board424392865 = None
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_free_fields(board, 1) == 5 


gamma_delete(board)
