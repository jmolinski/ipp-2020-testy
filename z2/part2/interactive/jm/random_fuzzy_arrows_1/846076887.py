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
uuid: 846076887
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 3, 3)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_free_fields(board, 2) == 22 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 


board532287395 = gamma_board(board)
assert board532287395 is not None
assert board532287395 == ("......\n"
"3...31\n"
"......\n"
"1.....\n")
del board532287395
board532287395 = None
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_free_fields(board, 2) == 18 
assert gamma_golden_move(board, 2, 2, 0) == 0 


board419787114 = gamma_board(board)
assert board419787114 is not None
assert board419787114 == ("1.3...\n"
"3...31\n"
"......\n"
"1.....\n")
del board419787114
board419787114 = None
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_golden_possible(board, 3) == 1 


board601579411 = gamma_board(board)
assert board601579411 is not None
assert board601579411 == ("1.3.3.\n"
"3...31\n"
"......\n"
"1.....\n")
del board601579411
board601579411 = None
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 1, 5, 0) == 0 


board103205090 = gamma_board(board)
assert board103205090 is not None
assert board103205090 == ("113.3.\n"
"32..31\n"
"32..3.\n"
"11....\n")
del board103205090
board103205090 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 


board746052037 = gamma_board(board)
assert board746052037 is not None
assert board746052037 == ("113.3.\n"
"32..31\n"
"32..3.\n"
"11....\n")
del board746052037
board746052037 = None
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 5, 1) == 1 


board338763184 = gamma_board(board)
assert board338763184 is not None
assert board338763184 == ("113.3.\n"
"32..31\n"
"32..32\n"
"11....\n")
del board338763184
board338763184 = None
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 3) == 0 


board649624310 = gamma_board(board)
assert board649624310 is not None
assert board649624310 == ("113.3.\n"
"32..31\n"
"32..32\n"
"11....\n")
del board649624310
board649624310 = None
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 


gamma_delete(board)
