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
uuid: 529957175
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 3)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 3, 2) == 1 


board511398863 = gamma_board(board)
assert board511398863 is not None
assert board511398863 == (".2...\n"
"11234\n"
".....\n"
"...2.\n")
del board511398863
board511398863 = None
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_free_fields(board, 4) == 11 
assert gamma_golden_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 


board241592111 = gamma_board(board)
assert board241592111 is not None
assert board241592111 == (".214.\n"
"11234\n"
".44..\n"
"...23\n")
del board241592111
board241592111 = None
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 


board592897524 = gamma_board(board)
assert board592897524 is not None
assert board592897524 == (".214.\n"
"11234\n"
".44..\n"
"...23\n")
del board592897524
board592897524 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 1, 3) == 0 


board145791087 = gamma_board(board)
assert board145791087 is not None
assert board145791087 == (".214.\n"
"11234\n"
".44..\n"
"...23\n")
del board145791087
board145791087 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 2, 2) == 0 


gamma_delete(board)
