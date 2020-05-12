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
uuid: 830786270
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 7, 6, 4)
assert board is not None


assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_free_fields(board, 2) == 34 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 2, 1) == 1 


board697814153 = gamma_board(board)
assert board697814153 is not None
assert board697814153 == (".....\n"
".....\n"
".....\n"
"....1\n"
".....\n"
"..4..\n"
".....\n")
del board697814153
board697814153 = None
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_free_fields(board, 6) == 31 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 5, 1, 6) == 1 
assert gamma_move(board, 6, 2, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 1, 3) == 1 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_move(board, 6, 5, 1) == 0 
assert gamma_move(board, 6, 0, 5) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_free_fields(board, 3) == 19 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 6, 1, 0) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 1 


board504704750 = gamma_board(board)
assert board504704750 is not None
assert board504704750 == (".5...\n"
"6.13.\n"
"...3.\n"
"256.1\n"
"2..25\n"
".2464\n"
".65.3\n")
del board504704750
board504704750 = None
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 6, 6, 0) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_free_fields(board, 6) == 7 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 4, 4) == 1 


board286443894 = gamma_board(board)
assert board286443894 is not None
assert board286443894 == (".5...\n"
"6.13.\n"
"...34\n"
"256.1\n"
"23125\n"
"12464\n"
"36553\n")
del board286443894
board286443894 = None
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 6, 1, 2) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 5, 4, 3) == 0 


board183828914 = gamma_board(board)
assert board183828914 is not None
assert board183828914 == (".5...\n"
"6.13.\n"
"...34\n"
"256.1\n"
"23125\n"
"12464\n"
"36553\n")
del board183828914
board183828914 = None
assert gamma_move(board, 6, 4, 0) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_golden_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_busy_fields(board, 3) == 5 


board901823667 = gamma_board(board)
assert board901823667 is not None
assert board901823667 == (".5...\n"
"6.13.\n"
"...34\n"
"256.1\n"
"23125\n"
"12464\n"
"36553\n")
del board901823667
board901823667 = None
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 6, 6, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_free_fields(board, 3) == 2 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_free_fields(board, 4) == 2 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 6, 6, 4) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 


board791209252 = gamma_board(board)
assert board791209252 is not None
assert board791209252 == (".5...\n"
"6213.\n"
"..434\n"
"25611\n"
"23125\n"
"12464\n"
"36553\n")
del board791209252
board791209252 = None
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 1) == 0 


gamma_delete(board)
