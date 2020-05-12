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
uuid: 698168948
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 6, 4)
assert board is not None


assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_busy_fields(board, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_free_fields(board, 1) == 20 


board845518453 = gamma_board(board)
assert board845518453 is not None
assert board845518453 == ("......\n"
"..413.\n"
".....1\n"
"......\n")
del board845518453
board845518453 = None
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_busy_fields(board, 2) == 2 


board587782880 = gamma_board(board)
assert board587782880 is not None
assert board587782880 == ("......\n"
".2413.\n"
"....21\n"
"......\n")
del board587782880
board587782880 = None
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 6, 1, 1) == 1 
assert gamma_move(board, 6, 3, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_free_fields(board, 2) == 10 


board608936429 = gamma_board(board)
assert board608936429 is not None
assert board608936429 == ("...2..\n"
".2213.\n"
".6.221\n"
"15364.\n")
del board608936429
board608936429 = None
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_busy_fields(board, 6) == 2 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_golden_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_golden_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_move(board, 6, 1, 2) == 0 


board158490729 = gamma_board(board)
assert board158490729 is not None
assert board158490729 == ("3132.4\n"
".22135\n"
"46.521\n"
"153642\n")
del board158490729
board158490729 = None


gamma_delete(board)
