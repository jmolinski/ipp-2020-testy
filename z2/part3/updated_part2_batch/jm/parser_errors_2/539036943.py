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
uuid: 539036943
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 5)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 1 


board463861289 = gamma_board(board)
assert board463861289 is not None
assert board463861289 == (".....\n"
"1....\n"
"....1\n"
".....\n")
del board463861289
board463861289 = None
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 1 


board836785183 = gamma_board(board)
assert board836785183 is not None
assert board836785183 == ("132..\n"
"11.2.\n"
"4..11\n"
".3...\n")
del board836785183
board836785183 = None
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 4 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 1, 1) == 0 


board105915668 = gamma_board(board)
assert board105915668 is not None
assert board105915668 == ("1324.\n"
"11321\n"
"42311\n"
"13.14\n")
del board105915668
board105915668 = None


gamma_delete(board)
