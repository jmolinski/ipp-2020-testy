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
uuid: 964919153
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 2, 3, 4)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_free_fields(board, 3) == 4 


board371285854 = gamma_board(board)
assert board371285854 is not None
assert board371285854 == ("2...\n"
"1.21\n")
del board371285854
board371285854 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 


board308760829 = gamma_board(board)
assert board308760829 is not None
assert board308760829 == ("2...\n"
"1.21\n")
del board308760829
board308760829 = None
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 


board737143059 = gamma_board(board)
assert board737143059 is not None
assert board737143059 == ("2.1.\n"
"2.21\n")
del board737143059
board737143059 = None
assert gamma_move(board, 2, 2, 1) == 0 


board222131949 = gamma_board(board)
assert board222131949 is not None
assert board222131949 == ("2.1.\n"
"2.21\n")
del board222131949
board222131949 = None
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 


gamma_delete(board)
