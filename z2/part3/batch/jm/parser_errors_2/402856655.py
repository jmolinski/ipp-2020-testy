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
uuid: 402856655
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 6)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 1 


board383679977 = gamma_board(board)
assert board383679977 is not None
assert board383679977 == ("4...2\n"
"1..3.\n"
"....2\n"
".....\n"
".1...\n")
del board383679977
board383679977 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 


board550176012 = gamma_board(board)
assert board550176012 is not None
assert board550176012 == ("41432\n"
"1..33\n"
"4.232\n"
"21314\n"
"11.2.\n")
del board550176012
board550176012 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 1 


board494712804 = gamma_board(board)
assert board494712804 is not None
assert board494712804 == ("41432\n"
"1..33\n"
"44232\n"
"21314\n"
"11.2.\n")
del board494712804
board494712804 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_golden_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 0, 4) == 0 


board817419790 = gamma_board(board)
assert board817419790 is not None
assert board817419790 == ("41432\n"
"14133\n"
"44232\n"
"24314\n"
"11.2.\n")
del board817419790
board817419790 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 0 


gamma_delete(board)
