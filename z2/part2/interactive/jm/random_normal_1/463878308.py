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
uuid: 463878308
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 6, 6, 3)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_free_fields(board, 3) == 29 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_free_fields(board, 4) == 28 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 5, 5) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 6, 2, 4) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_free_fields(board, 5) == 17 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 5) == 0 


board964821874 = gamma_board(board)
assert board964821874 is not None
assert board964821874 == ("..3.16\n"
".4622.\n"
".3.6..\n"
".1.25.\n"
"42..51\n"
"..55.3\n")
del board964821874
board964821874 = None
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_busy_fields(board, 6) == 3 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_golden_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 6, 2, 3) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 


board455698278 = gamma_board(board)
assert board455698278 is not None
assert board455698278 == ("..3116\n"
"44622.\n"
".366..\n"
".1.25.\n"
"42.251\n"
"5.55.3\n")
del board455698278
board455698278 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 


board995577683 = gamma_board(board)
assert board995577683 is not None
assert board995577683 == ("..3116\n"
"44622.\n"
".366..\n"
".1.25.\n"
"42.251\n"
"5.55.3\n")
del board995577683
board995577683 = None
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_free_fields(board, 5) == 5 


board670804334 = gamma_board(board)
assert board670804334 is not None
assert board670804334 == ("..3116\n"
"44622.\n"
".366.4\n"
".1.25.\n"
"42.251\n"
"5.55.3\n")
del board670804334
board670804334 = None
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 3) == 1 


board397825260 = gamma_board(board)
assert board397825260 is not None
assert board397825260 == ("..3116\n"
"44622.\n"
".36644\n"
".1.25.\n"
"42.251\n"
"5.55.3\n")
del board397825260
board397825260 = None
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_free_fields(board, 5) == 3 
assert gamma_move(board, 6, 5, 5) == 0 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 0, 5) == 0 


board495675822 = gamma_board(board)
assert board495675822 is not None
assert board495675822 == ("..3116\n"
"44622.\n"
".36644\n"
".1225.\n"
"425251\n"
"5.55.3\n")
del board495675822
board495675822 = None
assert gamma_move(board, 6, 1, 0) == 1 
assert gamma_move(board, 6, 4, 5) == 0 


gamma_delete(board)
