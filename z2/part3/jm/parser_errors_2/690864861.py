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
uuid: 690864861
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 6)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 1 


board372090703 = gamma_board(board)
assert board372090703 is not None
assert board372090703 == (".2243\n"
"4441.\n"
"311..\n"
"21.1.\n")
del board372090703
board372090703 = None
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 0) == 1 


board862555635 = gamma_board(board)
assert board862555635 is not None
assert board862555635 == (".2243\n"
"4441.\n"
"311..\n"
"21.14\n")
del board862555635
board862555635 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_free_fields(board, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 0 


gamma_delete(board)
