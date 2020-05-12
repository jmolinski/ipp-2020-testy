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
uuid: 543267831
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 4, 6, 5)
assert board is not None


assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 1, 7, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 26 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_free_fields(board, 4) == 26 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 6, 0, 4) == 0 


board919062756 = gamma_board(board)
assert board919062756 is not None
assert board919062756 == ("..5.....\n"
"...3.1..\n"
".23....1\n"
"...2....\n")
del board919062756
board919062756 = None
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_free_fields(board, 3) == 22 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_golden_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_move(board, 6, 1, 1) == 0 


board769988813 = gamma_board(board)
assert board769988813 is not None
assert board769988813 == (".45.....\n"
"..63.1..\n"
".23.3..1\n"
"5232....\n")
del board769988813
board769988813 = None
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_free_fields(board, 3) == 19 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 5, 7, 1) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 6, 2, 6) == 0 
assert gamma_move(board, 6, 6, 3) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_golden_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 3, 1, 3) == 0 


board870095153 = gamma_board(board)
assert board870095153 is not None
assert board870095153 == (".4541.6.\n"
"..63.1..\n"
".23.3.41\n"
"5232.323\n")
del board870095153
board870095153 = None
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_free_fields(board, 5) == 12 
assert gamma_move(board, 6, 3, 7) == 0 
assert gamma_move(board, 6, 6, 2) == 1 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 3, 4, 1) == 0 


board399802341 = gamma_board(board)
assert board399802341 is not None
assert board399802341 == (".4541.61\n"
"..63.16.\n"
".2323241\n"
"5232.323\n")
del board399802341
board399802341 = None
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 2, 4) == 0 


board639073697 = gamma_board(board)
assert board639073697 is not None
assert board639073697 == (".4541.61\n"
"..63.16.\n"
".2323241\n"
"5232.323\n")
del board639073697
board639073697 = None
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 6, 4, 0) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 4, 7, 3) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_golden_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 1, 1) == 0 


gamma_delete(board)
