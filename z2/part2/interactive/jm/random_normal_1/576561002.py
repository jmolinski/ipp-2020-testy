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
uuid: 576561002
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 6, 2)
assert board is not None


assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 6, 1, 4) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 6, 4, 3) == 1 
assert gamma_free_fields(board, 6) == 4 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 0 


board584257317 = gamma_board(board)
assert board584257317 is not None
assert board584257317 == (".6.4.\n"
"..236\n"
"1.5.3\n"
"1.2..\n"
"45511\n")
del board584257317
board584257317 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 


board783116074 = gamma_board(board)
assert board783116074 is not None
assert board783116074 == (".6.4.\n"
"..236\n"
"1.553\n"
"1.2..\n"
"45511\n")
del board783116074
board783116074 = None
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_golden_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_golden_move(board, 3, 0, 0) == 0 


board915624140 = gamma_board(board)
assert board915624140 is not None
assert board915624140 == (".6.4.\n"
"..236\n"
"1.553\n"
"122..\n"
"45511\n")
del board915624140
board915624140 = None
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_golden_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 


gamma_delete(board)
