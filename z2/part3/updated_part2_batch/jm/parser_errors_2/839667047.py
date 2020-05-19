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
uuid: 839667047
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 2, 8)
assert board is not None


assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 17 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 0 


board104317234 = gamma_board(board)
assert board104317234 is not None
assert board104317234 == ("....2\n"
"1.112\n"
"2....\n"
"2.2.1\n"
"2..21\n")
del board104317234
board104317234 = None
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 1, 4, 2) == 0 


board744583849 = gamma_board(board)
assert board744583849 is not None
assert board744583849 == (".2.12\n"
"1.112\n"
"22112\n"
"21211\n"
"21121\n")
del board744583849
board744583849 = None
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_golden_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 


gamma_delete(board)
