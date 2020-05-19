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
uuid: 868673657
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 4, 2, 1)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 


board534950584 = gamma_board(board)
assert board534950584 is not None
assert board534950584 == ("..\n"
"..\n"
"..\n"
"21\n")
del board534950584
board534950584 = None
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 


board574240617 = gamma_board(board)
assert board574240617 is not None
assert board574240617 == ("..\n"
"..\n"
".1\n"
"21\n")
del board574240617
board574240617 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 1) == 0 


board471905426 = gamma_board(board)
assert board471905426 is not None
assert board471905426 == ("..\n"
"..\n"
"11\n"
"22\n")
del board471905426
board471905426 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 0 


gamma_delete(board)
