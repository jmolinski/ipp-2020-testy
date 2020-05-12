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
uuid: 825428511
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 7, 3, 4)
assert board is not None


assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_golden_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 0, 5) == 0 


board466093362 = gamma_board(board)
assert board466093362 is not None
assert board466093362 == (".3...1\n"
"..2.32\n"
"..1232\n"
"..3233\n"
"1.....\n"
"..221.\n"
".3..1.\n")
del board466093362
board466093362 = None
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_golden_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_golden_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 


board161246729 = gamma_board(board)
assert board161246729 is not None
assert board161246729 == (".3...1\n"
".32.32\n"
"..1232\n"
".33233\n"
"1.3.3.\n"
"..2211\n"
".3..1.\n")
del board161246729
board161246729 = None
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 1, 5) == 0 


board394172245 = gamma_board(board)
assert board394172245 is not None
assert board394172245 == (".3...1\n"
".32.32\n"
"..1232\n"
".33233\n"
"1.3.3.\n"
"..2211\n"
".3..1.\n")
del board394172245
board394172245 = None
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 5, 6) == 0 


board781801792 = gamma_board(board)
assert board781801792 is not None
assert board781801792 == (".3...1\n"
".32.32\n"
"..1232\n"
".33233\n"
"1.3.33\n"
"..2211\n"
".3.11.\n")
del board781801792
board781801792 = None
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_golden_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 


board401778497 = gamma_board(board)
assert board401778497 is not None
assert board401778497 == (".3...1\n"
"332.32\n"
"..1232\n"
"333233\n"
"113.33\n"
".22211\n"
".3.11.\n")
del board401778497
board401778497 = None
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 6, 3) == 0 


board342069703 = gamma_board(board)
assert board342069703 is not None
assert board342069703 == (".3...1\n"
"332.32\n"
"..1232\n"
"333233\n"
"113.33\n"
".22211\n"
".3.11.\n")
del board342069703
board342069703 = None
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_busy_fields(board, 3) == 14 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 1, 5) == 0 


gamma_delete(board)
