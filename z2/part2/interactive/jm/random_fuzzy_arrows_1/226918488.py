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
uuid: 226918488
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 5, 5)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 6) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 5, 2, 5) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_free_fields(board, 4) == 20 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 1, 6) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_free_fields(board, 3) == 17 


board602611692 = gamma_board(board)
assert board602611692 is not None
assert board602611692 == (".13.\n"
"..5.\n"
"3...\n"
"..54\n"
".21.\n"
"....\n"
"114.\n")
del board602611692
board602611692 = None
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_free_fields(board, 5) == 17 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_free_fields(board, 4) == 15 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 1 


board398567841 = gamma_board(board)
assert board398567841 is not None
assert board398567841 == (".132\n"
"..54\n"
"3.31\n"
"..54\n"
".21.\n"
"....\n"
"1141\n")
del board398567841
board398567841 = None
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 0, 6) == 1 


board982677401 = gamma_board(board)
assert board982677401 is not None
assert board982677401 == ("5132\n"
"..54\n"
"3.31\n"
".254\n"
".21.\n"
".25.\n"
"1141\n")
del board982677401
board982677401 = None
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 


gamma_delete(board)
