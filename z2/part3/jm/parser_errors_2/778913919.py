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
uuid: 778913919
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 2)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 4) == 0 


board224524589 = gamma_board(board)
assert board224524589 is not None
assert board224524589 == ("2.111\n"
"11111\n"
".11.1\n"
"11...\n"
"22...\n")
del board224524589
board224524589 = None
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_busy_fields(board, 1) == 14 


board442419720 = gamma_board(board)
assert board442419720 is not None
assert board442419720 == ("2.111\n"
"11111\n"
".11.1\n"
"11..1\n"
"22...\n")
del board442419720
board442419720 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_golden_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 


board904994937 = gamma_board(board)
assert board904994937 is not None
assert board904994937 == ("2.111\n"
"11111\n"
".11.1\n"
"11..1\n"
"221..\n")
del board904994937
board904994937 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 


gamma_delete(board)
