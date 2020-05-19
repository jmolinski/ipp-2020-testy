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
uuid: 662199733
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 3)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_busy_fields(board, 4) == 2 


board222579920 = gamma_board(board)
assert board222579920 is not None
assert board222579920 == ("21.4.\n"
"23111\n"
"..4.3\n"
"22...\n")
del board222579920
board222579920 = None
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 1, 0) == 0 


board733207531 = gamma_board(board)
assert board733207531 is not None
assert board733207531 == ("21.4.\n"
"23111\n"
".44.3\n"
"22...\n")
del board733207531
board733207531 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


board121874798 = gamma_board(board)
assert board121874798 is not None
assert board121874798 == ("21.4.\n"
"23111\n"
".44.3\n"
"22...\n")
del board121874798
board121874798 = None
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 3, 2) == 0 


board863106466 = gamma_board(board)
assert board863106466 is not None
assert board863106466 == ("21.4.\n"
"23111\n"
".44.3\n"
"22...\n")
del board863106466
board863106466 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_free_fields(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 


gamma_delete(board)
