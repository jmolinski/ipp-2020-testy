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
uuid: 715407187
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 13)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 1 


board222946624 = gamma_board(board)
assert board222946624 is not None
assert board222946624 == (".1..\n"
"1...\n"
"....\n"
"....\n")
del board222946624
board222946624 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 


board196483150 = gamma_board(board)
assert board196483150 is not None
assert board196483150 == (".111\n"
"1211\n"
".1.2\n"
"1222\n")
del board196483150
board196483150 = None
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 


gamma_delete(board)
