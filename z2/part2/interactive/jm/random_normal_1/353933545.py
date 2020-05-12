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
uuid: 353933545
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 6, 2)
assert board is not None




board719771147 = gamma_board(board)
assert board719771147 is not None
assert board719771147 == ("....\n"
"....\n"
"....\n"
"....\n"
"....\n")
del board719771147
board719771147 = None
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 6, 3, 2) == 1 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 6, 0, 1) == 1 
assert gamma_golden_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_busy_fields(board, 6) == 2 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_golden_possible(board, 4) == 1 


board999765755 = gamma_board(board)
assert board999765755 is not None
assert board999765755 == (".4..\n"
"...1\n"
".3.6\n"
"6513\n"
"5413\n")
del board999765755
board999765755 = None


gamma_delete(board)
