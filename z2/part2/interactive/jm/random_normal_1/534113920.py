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
uuid: 534113920
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 7, 5, 8)
assert board is not None


assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 7, 1) == 1 
assert gamma_move(board, 2, 0, 6) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 4, 6) == 1 
assert gamma_free_fields(board, 4) == 50 
assert gamma_move(board, 5, 5, 6) == 1 
assert gamma_move(board, 5, 7, 0) == 1 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_free_fields(board, 3) == 44 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 5, 6, 1) == 1 
assert gamma_move(board, 5, 1, 5) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_free_fields(board, 1) == 40 
assert gamma_move(board, 2, 6, 0) == 1 


board730595885 = gamma_board(board)
assert board730595885 is not None
assert board730595885 == ("2...45..\n"
".5...31.\n"
"31.3.4..\n"
".......1\n"
"........\n"
"1.....51\n"
".4....25\n")
del board730595885
board730595885 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 5, 4, 2) == 1 
assert gamma_free_fields(board, 5) == 37 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_free_fields(board, 1) == 36 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_golden_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 7, 4) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 4, 7, 5) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_golden_move(board, 5, 5, 5) == 1 


board768066899 = gamma_board(board)
assert board768066899 is not None
assert board768066899 == ("2...45..\n"
".533.514\n"
"31.324.1\n"
"24.3..31\n"
"51..5...\n"
"1.....51\n"
"44..2325\n")
del board768066899
board768066899 = None
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_free_fields(board, 5) == 21 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_free_fields(board, 3) == 19 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_free_fields(board, 4) == 19 
assert gamma_move(board, 5, 0, 3) == 0 


board589089307 = gamma_board(board)
assert board589089307 is not None
assert board589089307 == ("2...45..\n"
".533.514\n"
"31.32441\n"
"24.3..31\n"
"51.15.1.\n"
"1.23..51\n"
"44..2325\n")
del board589089307
board589089307 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 2, 6, 7) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 7, 0) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_golden_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_move(board, 3, 6, 5) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 5, 6, 7) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 5, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_free_fields(board, 5) == 15 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_move(board, 2, 6, 5) == 1 
assert gamma_move(board, 3, 7, 6) == 1 
assert gamma_golden_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 5, 7, 5) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 5, 5, 6) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_golden_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 5, 6, 6) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_free_fields(board, 2) == 6 


gamma_delete(board)
