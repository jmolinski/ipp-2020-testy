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
uuid: 562339226
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 5, 2, 13)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_free_fields(board, 1) == 18 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_golden_move(board, 2, 1, 2) == 0 


board962542044 = gamma_board(board)
assert board962542044 is not None
assert board962542044 == (".22.\n"
"...2\n"
"..11\n"
".112\n"
"1111\n")
del board962542044
board962542044 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


board394269240 = gamma_board(board)
assert board394269240 is not None
assert board394269240 == (".22.\n"
"..22\n"
"..11\n"
".112\n"
"1111\n")
del board394269240
board394269240 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 


gamma_delete(board)
