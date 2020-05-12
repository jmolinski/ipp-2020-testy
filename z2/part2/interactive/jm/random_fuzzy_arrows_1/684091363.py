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
uuid: 684091363
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 6, 11)
assert board is not None


assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 7, 6) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_move(board, 3, 1, 3) == 0 


board327726647 = gamma_board(board)
assert board327726647 is not None
assert board327726647 == ("........\n"
".......3\n"
"........\n"
"........\n"
"1.......\n"
"........\n"
"...2....\n"
"...1....\n")
del board327726647
board327726647 = None
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_move(board, 5, 2, 7) == 1 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_free_fields(board, 3) == 53 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 4, 1, 6) == 1 
assert gamma_move(board, 5, 7, 4) == 1 
assert gamma_move(board, 5, 0, 6) == 1 
assert gamma_busy_fields(board, 5) == 4 


board120187059 = gamma_board(board)
assert board120187059 is not None
assert board120187059 == ("..5.....\n"
"544.2..3\n"
"........\n"
".......5\n"
"1.....3.\n"
".....5..\n"
"...24.4.\n"
"...1.1..\n")
del board120187059
board120187059 = None
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_move(board, 6, 0, 7) == 1 


board531872108 = gamma_board(board)
assert board531872108 is not None
assert board531872108 == ("6.5.....\n"
"544.2.33\n"
"........\n"
"....2..5\n"
"1.5...3.\n"
".....5..\n"
"...24.4.\n"
"...1.1..\n")
del board531872108
board531872108 = None
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_free_fields(board, 3) == 42 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 5, 6) == 1 
assert gamma_free_fields(board, 4) == 40 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 6, 7, 0) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 5, 5, 5) == 1 
assert gamma_move(board, 6, 3, 3) == 1 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_free_fields(board, 6) == 35 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 6, 6) == 0 
assert gamma_busy_fields(board, 1) == 5 


board843329974 = gamma_board(board)
assert board843329974 is not None
assert board843329974 == ("6.5.....\n"
"54422433\n"
"....35..\n"
"3.132..5\n"
"1.56..31\n"
"444..5..\n"
".3.24.4.\n"
"..51.1.6\n")
del board843329974
board843329974 = None
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_free_fields(board, 3) == 30 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 1, 5) == 1 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_move(board, 6, 5, 7) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_free_fields(board, 2) == 27 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 7, 5) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 6, 7, 3) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_golden_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_free_fields(board, 4) == 24 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 6, 7, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 5, 3) == 1 
assert gamma_move(board, 6, 2, 6) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 22 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 6, 4, 6) == 0 
assert gamma_move(board, 6, 5, 7) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 1, 6) == 0 


board922286942 = gamma_board(board)
assert board922286942 is not None
assert board922286942 == ("6.5..6..\n"
"54422433\n"
".5.535.3\n"
"3.131..5\n"
"1.56.531\n"
"444535..\n"
".3.24.46\n"
"3.51.1.6\n")
del board922286942
board922286942 = None
assert gamma_move(board, 4, 7, 6) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 6, 4, 5) == 0 
assert gamma_free_fields(board, 6) == 20 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 1, 7) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 6, 5, 2) == 0 
assert gamma_free_fields(board, 6) == 19 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_free_fields(board, 2) == 19 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 6) == 0 


board306794186 = gamma_board(board)
assert board306794186 is not None
assert board306794186 == ("635..6..\n"
"54422433\n"
".5.535.3\n"
"3.131..5\n"
"1.56.531\n"
"444535..\n"
"53.24.46\n"
"3.51.1.6\n")
del board306794186
board306794186 = None
assert gamma_move(board, 6, 0, 6) == 0 
assert gamma_move(board, 6, 2, 1) == 1 
assert gamma_golden_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_free_fields(board, 4) == 18 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 6, 7, 4) == 0 
assert gamma_move(board, 6, 7, 5) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 7, 6) == 0 


board810317139 = gamma_board(board)
assert board810317139 is not None
assert board810317139 == ("635..6..\n"
"54422433\n"
".5.535.3\n"
"3.131..5\n"
"1.56.531\n"
"444535..\n"
"53624.46\n"
"3.51.1.6\n")
del board810317139
board810317139 = None
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_free_fields(board, 4) == 18 


board661393382 = gamma_board(board)
assert board661393382 is not None
assert board661393382 == ("635..6..\n"
"54422433\n"
".5.535.3\n"
"3.131..5\n"
"1.56.531\n"
"444535..\n"
"53624.46\n"
"3.51.1.6\n")
del board661393382
board661393382 = None
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 6, 3, 7) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 6, 2) == 1 
assert gamma_move(board, 6, 7, 7) == 1 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 2, 6, 7) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_busy_fields(board, 5) == 13 
assert gamma_move(board, 6, 0, 1) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_golden_move(board, 6, 6, 2) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_free_fields(board, 3) == 12 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 6, 7, 1) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 3, 4) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 5, 0) == 0 


gamma_delete(board)
