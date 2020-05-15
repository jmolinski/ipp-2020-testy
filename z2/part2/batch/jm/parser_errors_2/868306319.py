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
uuid: 868306319
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 20)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 


board262996775 = gamma_board(board)
assert board262996775 is not None
assert board262996775 == ("....\n"
"...1\n"
"....\n"
"1..2\n"
"....\n")
del board262996775
board262996775 = None
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 


board448869703 = gamma_board(board)
assert board448869703 is not None
assert board448869703 == ("....\n"
"...1\n"
"...1\n"
"1..2\n"
"....\n")
del board448869703
board448869703 = None
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 0, 2) == 0 


board802649070 = gamma_board(board)
assert board802649070 is not None
assert board802649070 == ("2...\n"
"2..1\n"
"11.1\n"
"1..2\n"
"....\n")
del board802649070
board802649070 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_free_fields(board, 1) == 11 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_free_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 0 


board197900215 = gamma_board(board)
assert board197900215 is not None
assert board197900215 == ("2111\n"
"2..1\n"
"1111\n"
"12.2\n"
"2121\n")
del board197900215
board197900215 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 4) == 0 


gamma_delete(board)
