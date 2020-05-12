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
uuid: 283779181
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 4, 5, 4)
assert board is not None


assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 4, 4, 3) == 1 


board212285990 = gamma_board(board)
assert board212285990 is not None
assert board212285990 == (".1..4..\n"
".....1.\n"
"2.4....\n"
"2..4...\n")
del board212285990
board212285990 = None
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_golden_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_free_fields(board, 1) == 19 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_golden_move(board, 2, 3, 4) == 0 


board467354025 = gamma_board(board)
assert board467354025 is not None
assert board467354025 == (".15.4..\n"
".....11\n"
"224....\n"
"2..4...\n")
del board467354025
board467354025 = None
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 15 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 6, 0) == 1 
assert gamma_golden_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_free_fields(board, 4) == 7 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 0 


board479184755 = gamma_board(board)
assert board479184755 is not None
assert board479184755 == (".1534.3\n"
"442..11\n"
"224....\n"
"2..4535\n")
del board479184755
board479184755 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_golden_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 6) == 0 


board802096773 = gamma_board(board)
assert board802096773 is not None
assert board802096773 == ("51534.3\n"
"4421.11\n"
"2242...\n"
"21.4535\n")
del board802096773
board802096773 = None
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_golden_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 2, 1) == 0 


board424553290 = gamma_board(board)
assert board424553290 is not None
assert board424553290 == ("51534.3\n"
"4421.11\n"
"2242...\n"
"21.4535\n")
del board424553290
board424553290 = None
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 


gamma_delete(board)
