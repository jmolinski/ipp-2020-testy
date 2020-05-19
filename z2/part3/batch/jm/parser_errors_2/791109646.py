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
uuid: 791109646
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 5)
assert board is not None


assert gamma_golden_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 


board224875839 = gamma_board(board)
assert board224875839 is not None
assert board224875839 == ("2.11.\n"
".1.3.\n"
".22..\n"
"33333\n"
"2.22.\n")
del board224875839
board224875839 = None
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 1 


board502391255 = gamma_board(board)
assert board502391255 is not None
assert board502391255 == ("2111.\n"
".1.3.\n"
".22..\n"
"33333\n"
"2.22.\n")
del board502391255
board502391255 = None
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 


board202735039 = gamma_board(board)
assert board202735039 is not None
assert board202735039 == ("2111.\n"
".1.3.\n"
".22.2\n"
"33333\n"
"2.22.\n")
del board202735039
board202735039 = None
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_golden_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 0 


gamma_delete(board)
