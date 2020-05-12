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
uuid: 536640276
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 5, 5, 6)
assert board is not None


assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 1 


board682909523 = gamma_board(board)
assert board682909523 is not None
assert board682909523 == ("1..1..\n"
"......\n"
"......\n"
"......\n"
"......\n")
del board682909523
board682909523 = None
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_free_fields(board, 2) == 27 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_free_fields(board, 5) == 24 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_move(board, 1, 4, 5) == 0 


board451186797 = gamma_board(board)
assert board451186797 is not None
assert board451186797 == ("13415.\n"
"345..1\n"
"..3..2\n"
"...23.\n"
".1....\n")
del board451186797
board451186797 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 5, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_golden_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_golden_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_golden_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_free_fields(board, 5) == 3 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 


board206274851 = gamma_board(board)
assert board206274851 is not None
assert board206274851 == ("134453\n"
"345221\n"
".135.2\n"
"31223.\n"
"514125\n")
del board206274851
board206274851 = None
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_free_fields(board, 5) == 3 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 5) == 0 


board209749128 = gamma_board(board)
assert board209749128 is not None
assert board209749128 == ("134453\n"
"345221\n"
".13522\n"
"33223.\n"
"514125\n")
del board209749128
board209749128 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 4, 4) == 0 


board353601970 = gamma_board(board)
assert board353601970 is not None
assert board353601970 == ("134453\n"
"345221\n"
".13522\n"
"33223.\n"
"514125\n")
del board353601970
board353601970 = None
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_free_fields(board, 5) == 2 


gamma_delete(board)
