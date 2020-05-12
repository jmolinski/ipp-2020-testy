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
uuid: 366341977
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 8, 6, 6)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_golden_move(board, 5, 2, 2) == 1 
assert gamma_free_fields(board, 6) == 35 
assert gamma_move(board, 1, 1, 7) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_busy_fields(board, 6) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 2, 7) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 5, 1, 4) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_golden_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_free_fields(board, 5) == 8 


board141382468 = gamma_board(board)
assert board141382468 is not None
assert board141382468 == (".11..\n"
"....3\n"
"4....\n"
".5...\n"
"13.23\n"
"54535\n"
".5.6.\n"
"5....\n")
del board141382468
board141382468 = None
assert gamma_move(board, 6, 7, 4) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_golden_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_free_fields(board, 5) == 5 


board373212911 = gamma_board(board)
assert board373212911 is not None
assert board373212911 == (".11..\n"
"...13\n"
"4....\n"
"25.4.\n"
"13223\n"
"54535\n"
".5.2.\n"
"531..\n")
del board373212911
board373212911 = None
assert gamma_move(board, 6, 4, 5) == 1 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_busy_fields(board, 6) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 


board773953737 = gamma_board(board)
assert board773953737 is not None
assert board773953737 == (".11..\n"
"...13\n"
"4...6\n"
"25.4.\n"
"13223\n"
"54535\n"
".5.2.\n"
"531..\n")
del board773953737
board773953737 = None
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 7, 0) == 0 
assert gamma_free_fields(board, 4) == 16 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_move(board, 6, 4, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_free_fields(board, 5) == 5 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 6, 4, 2) == 0 
assert gamma_free_fields(board, 6) == 10 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_move(board, 2, 0, 1) == 0 


gamma_delete(board)
