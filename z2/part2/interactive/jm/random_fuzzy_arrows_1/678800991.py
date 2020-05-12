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
uuid: 678800991
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 6, 4)
assert board is not None


assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_free_fields(board, 6) == 43 


board778999428 = gamma_board(board)
assert board778999428 is not None
assert board778999428 == ("..2.....\n"
".1......\n"
"....3...\n"
"........\n"
"...3....\n"
"....4...\n")
del board778999428
board778999428 = None
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_golden_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 


board167145566 = gamma_board(board)
assert board167145566 is not None
assert board167145566 == ("..2.....\n"
".1..2...\n"
"...13...\n"
"........\n"
"...3....\n"
".3..4...\n")
del board167145566
board167145566 = None
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 5) == 1 
assert gamma_move(board, 6, 5, 0) == 1 
assert gamma_move(board, 1, 7, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 6, 1, 7) == 0 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_free_fields(board, 4) == 34 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_free_fields(board, 4) == 31 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_move(board, 5, 5, 3) == 1 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_golden_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 5, 4, 3) == 0 


board784333214 = gamma_board(board)
assert board784333214 is not None
assert board784333214 == ("532.5..1\n"
".1..2...\n"
"..1135..\n"
"..632...\n"
".163.4..\n"
"432346..\n")
del board784333214
board784333214 = None
assert gamma_move(board, 6, 5, 5) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 1, 7) == 0 
assert gamma_move(board, 5, 7, 5) == 0 
assert gamma_free_fields(board, 5) == 22 
assert gamma_move(board, 6, 2, 2) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_golden_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_move(board, 6, 6, 3) == 1 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_move(board, 6, 5, 6) == 0 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 4, 1, 2) == 0 


board197058824 = gamma_board(board)
assert board197058824 is not None
assert board197058824 == ("532.56.1\n"
".1.13...\n"
"..11356.\n"
".2632...\n"
"4163.4..\n"
"432346..\n")
del board197058824
board197058824 = None
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 5, 7, 5) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 6, 3, 7) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 1, 1, 5) == 0 


board178734317 = gamma_board(board)
assert board178734317 is not None
assert board178734317 == ("532.56.1\n"
".1213...\n"
"..11356.\n"
".2632...\n"
"4163544.\n"
"432346..\n")
del board178734317
board178734317 = None
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 4, 5) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_golden_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 4, 6) == 0 


board179768002 = gamma_board(board)
assert board179768002 is not None
assert board179768002 == ("532.56.1\n"
"41213...\n"
"..11356.\n"
".2632...\n"
"4163544.\n"
"432346..\n")
del board179768002
board179768002 = None
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 6, 5, 4) == 1 
assert gamma_move(board, 6, 6, 2) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_free_fields(board, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_free_fields(board, 4) == 5 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 7, 5) == 0 
assert gamma_move(board, 6, 4, 6) == 0 
assert gamma_move(board, 6, 7, 4) == 0 


gamma_delete(board)
