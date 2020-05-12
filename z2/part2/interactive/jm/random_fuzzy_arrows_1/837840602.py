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
uuid: 837840602
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 5, 6, 5)
assert board is not None


assert gamma_move(board, 1, 7, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 7, 2) == 1 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 6, 2, 4) == 1 
assert gamma_free_fields(board, 6) == 35 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_free_fields(board, 1) == 27 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 3, 3, 5) == 0 


board333242641 = gamma_board(board)
assert board333242641 is not None
assert board333242641 == ("2.614...\n"
"..24....\n"
".......2\n"
".156...1\n"
"...3.2..\n")
del board333242641
board333242641 = None
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 7, 3) == 1 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 6, 5, 1) == 1 
assert gamma_move(board, 6, 0, 3) == 1 
assert gamma_free_fields(board, 6) == 23 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_move(board, 6, 6, 4) == 1 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_golden_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_free_fields(board, 1) == 21 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_free_fields(board, 4) == 19 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_busy_fields(board, 6) == 5 
assert gamma_move(board, 1, 4, 7) == 0 


board797384596 = gamma_board(board)
assert board797384596 is not None
assert board797384596 == ("2.614.6.\n"
"6.24...4\n"
"....2..2\n"
"415626.1\n"
"5..3.2..\n")
del board797384596
board797384596 = None
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 5, 6, 3) == 1 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 5, 3) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_move(board, 6, 6, 4) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 7, 2) == 0 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_free_fields(board, 6) == 7 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 0, 7) == 0 
assert gamma_move(board, 6, 4, 7) == 0 
assert gamma_move(board, 6, 1, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_free_fields(board, 5) == 8 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 7, 4) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 


gamma_delete(board)
