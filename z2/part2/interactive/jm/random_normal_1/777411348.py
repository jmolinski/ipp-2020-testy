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
uuid: 777411348
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 6, 5, 2)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 5) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 5) == 0 


board593198159 = gamma_board(board)
assert board593198159 is not None
assert board593198159 == ("..5.\n"
"....\n"
"1..4\n"
"...2\n"
"3...\n"
"4.11\n")
del board593198159
board593198159 = None
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 2, 1) == 1 


board255548095 = gamma_board(board)
assert board255548095 is not None
assert board255548095 == ("..5.\n"
"....\n"
"1..4\n"
"2352\n"
"3.51\n"
"4111\n")
del board255548095
board255548095 = None
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 0 


gamma_delete(board)
