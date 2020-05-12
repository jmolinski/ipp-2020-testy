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
uuid: 538594750
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 6, 3, 14)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_free_fields(board, 3) == 32 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_free_fields(board, 1) == 25 


board270768204 = gamma_board(board)
assert board270768204 is not None
assert board270768204 == ("......\n"
".3.31.\n"
"2.....\n"
".1..1.\n"
".313..\n"
".22...\n")
del board270768204
board270768204 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 18 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_golden_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_golden_possible(board, 2) == 0 


board867834630 = gamma_board(board)
assert board867834630 is not None
assert board867834630 == ("2..221\n"
".3.31.\n"
"2..3.1\n"
".11.1.\n"
".313.2\n"
"122.2.\n")
del board867834630
board867834630 = None
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_free_fields(board, 3) == 14 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 0 


board533168350 = gamma_board(board)
assert board533168350 is not None
assert board533168350 == ("213221\n"
".3331.\n"
"2233.1\n"
".11.1.\n"
".313.2\n"
"122.2.\n")
del board533168350
board533168350 = None
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_free_fields(board, 3) == 9 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_golden_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 


board334829451 = gamma_board(board)
assert board334829451 is not None
assert board334829451 == ("213221\n"
".3331.\n"
"2233.1\n"
".11.12\n"
".313.2\n"
"122.2.\n")
del board334829451
board334829451 = None
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_golden_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 2, 5) == 0 


gamma_delete(board)
