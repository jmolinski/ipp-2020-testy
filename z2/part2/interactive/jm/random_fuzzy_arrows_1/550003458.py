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
uuid: 550003458
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 6, 4, 4)
assert board is not None


assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 4, 2) == 1 


board271301581 = gamma_board(board)
assert board271301581 is not None
assert board271301581 == (".1...\n"
".....\n"
".3...\n"
"3...4\n"
".....\n"
".....\n")
del board271301581
board271301581 = None
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 4, 2) == 0 


board702136173 = gamma_board(board)
assert board702136173 is not None
assert board702136173 == (".1...\n"
"....2\n"
".31..\n"
"3...4\n"
".....\n"
".1...\n")
del board702136173
board702136173 = None
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 0 


board173208714 = gamma_board(board)
assert board173208714 is not None
assert board173208714 == (".1...\n"
"...12\n"
".31..\n"
"3..34\n"
"..44.\n"
".1...\n")
del board173208714
board173208714 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_golden_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_free_fields(board, 2) == 15 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_golden_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_golden_move(board, 3, 4, 0) == 0 


board261039390 = gamma_board(board)
assert board261039390 is not None
assert board261039390 == ("21...\n"
"2..12\n"
".31..\n"
"3.134\n"
".444.\n"
"2133.\n")
del board261039390
board261039390 = None
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_golden_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_free_fields(board, 4) == 7 
assert gamma_golden_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 


board776676148 = gamma_board(board)
assert board776676148 is not None
assert board776676148 == ("21..2\n"
"2.412\n"
"1311.\n"
"3.134\n"
".4442\n"
"2143.\n")
del board776676148
board776676148 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_free_fields(board, 4) == 7 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 


gamma_delete(board)
