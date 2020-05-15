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
uuid: 249698808
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 2, 11)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 


board360480711 = gamma_board(board)
assert board360480711 is not None
assert board360480711 == ("222..\n"
"22122\n"
"11211\n")
del board360480711
board360480711 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 


board832554178 = gamma_board(board)
assert board832554178 is not None
assert board832554178 == ("222..\n"
"22122\n"
"11211\n")
del board832554178
board832554178 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 


gamma_delete(board)
