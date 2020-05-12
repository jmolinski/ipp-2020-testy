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
uuid: 751716764
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 7, 5, 7)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 4, 4, 6) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 7, 6) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_free_fields(board, 2) == 46 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_move(board, 5, 7, 3) == 1 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_free_fields(board, 5) == 43 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 5, 4, 4) == 0 


board427163421 = gamma_board(board)
assert board427163421 is not None
assert board427163421 == ("..2.4131\n"
"..421...\n"
"...143..\n"
"....2..5\n"
"...15...\n"
"....5...\n"
".15.....\n")
del board427163421
board427163421 = None
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 6, 1) == 1 


board401140187 = gamma_board(board)
assert board401140187 is not None
assert board401140187 == ("..2.4131\n"
"..421...\n"
"...143..\n"
"....2..5\n"
"..115...\n"
"....5.1.\n"
".15.....\n")
del board401140187
board401140187 = None
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 5, 7, 2) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 31 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 4, 6, 5) == 1 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 5, 1, 7) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_busy_fields(board, 5) == 8 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 0, 6) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_free_fields(board, 4) == 7 
assert gamma_golden_move(board, 4, 6, 2) == 0 


board811563880 = gamma_board(board)
assert board811563880 is not None
assert board811563880 == ("53224131\n"
"42421.4.\n"
".5.143..\n"
"343222.5\n"
"..1155.5\n"
".33.5.1.\n"
"515.422.\n")
del board811563880
board811563880 = None
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_move(board, 5, 7, 5) == 1 
assert gamma_busy_fields(board, 5) == 10 
assert gamma_free_fields(board, 5) == 10 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_free_fields(board, 5) == 8 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_busy_fields(board, 5) == 10 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 6, 6) == 0 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 7) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_free_fields(board, 5) == 7 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 3, 6, 4) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_busy_fields(board, 5) == 10 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_golden_move(board, 3, 6, 7) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 4, 7) == 0 
assert gamma_move(board, 5, 0, 6) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_busy_fields(board, 5) == 10 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 6, 6) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_busy_fields(board, 5) == 10 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_busy_fields(board, 5) == 10 
assert gamma_free_fields(board, 5) == 6 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 5) == 0 


board310680201 = gamma_board(board)
assert board310680201 is not None
assert board310680201 == ("53224131\n"
"42421245\n"
".5.1433.\n"
"34322225\n"
".1115525\n"
"333.5.13\n"
"515.422.\n")
del board310680201
board310680201 = None
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 7) == 0 


gamma_delete(board)
