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
uuid: 683789949
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 5, 1)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 


board767282776 = gamma_board(board)
assert board767282776 is not None
assert board767282776 == (".....\n"
".2..4\n"
"1....\n"
".....\n")
del board767282776
board767282776 = None
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_free_fields(board, 5) == 4 
assert gamma_golden_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 


board676951105 = gamma_board(board)
assert board676951105 is not None
assert board676951105 == ("3....\n"
".2..4\n"
"125..\n"
".....\n")
del board676951105
board676951105 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 1, 2) == 0 


board605026956 = gamma_board(board)
assert board605026956 is not None
assert board605026956 == ("3....\n"
"32..4\n"
"125..\n"
"1....\n")
del board605026956
board605026956 = None
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_free_fields(board, 5) == 3 


gamma_delete(board)
