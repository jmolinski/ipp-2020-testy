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
uuid: 585679208
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 3, 22)
assert board is not None


assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 1, 6, 2) == 1 


board204060090 = gamma_board(board)
assert board204060090 is not None
assert board204060090 == ("........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".....11.\n"
"........\n"
"........\n")
del board204060090
board204060090 = None
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 1, 7, 2) == 1 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_free_fields(board, 1) == 54 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 1, 7) == 1 
assert gamma_golden_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 1, 7, 4) == 1 
assert gamma_free_fields(board, 2) == 50 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 


board590455376 = gamma_board(board)
assert board590455376 is not None
assert board590455376 == (".3......\n"
"........\n"
"..3.11..\n"
"3......1\n"
"..3..3..\n"
"...2.111\n"
".312.3..\n"
"........\n")
del board590455376
board590455376 = None
assert gamma_move(board, 2, 7, 3) == 1 
assert gamma_move(board, 3, 7, 6) == 1 
assert gamma_move(board, 2, 7, 1) == 1 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_golden_possible(board, 3) == 1 


board345349965 = gamma_board(board)
assert board345349965 is not None
assert board345349965 == (".3......\n"
"....3..3\n"
"..3.11..\n"
"3......1\n"
"..3..3.2\n"
"...2.111\n"
".312.3.2\n"
"........\n")
del board345349965
board345349965 = None
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_free_fields(board, 3) == 40 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_free_fields(board, 2) == 32 
assert gamma_move(board, 3, 4, 7) == 1 
assert gamma_move(board, 1, 5, 7) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_busy_fields(board, 3) == 15 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_busy_fields(board, 3) == 18 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_free_fields(board, 3) == 17 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_golden_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 7) == 1 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_move(board, 3, 5, 6) == 0 


board341944281 = gamma_board(board)
assert board341944281 is not None
assert board341944281 == ("23..31.2\n"
"..1.3133\n"
".23.11.2\n"
"3321.221\n"
"1.31.312\n"
"2.323111\n"
"2312.312\n"
"..313323\n")
del board341944281
board341944281 = None
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_free_fields(board, 1) == 14 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_busy_fields(board, 3) == 19 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_busy_fields(board, 2) == 15 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 


board844666572 = gamma_board(board)
assert board844666572 is not None
assert board844666572 == ("23..31.2\n"
"..113133\n"
"123.11.2\n"
"3321.221\n"
"1231.312\n"
"2.323111\n"
"23121312\n"
"3.313323\n")
del board844666572
board844666572 = None
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_busy_fields(board, 1) == 19 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 6, 6) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 7, 7) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 1, 2, 7) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 16 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_busy_fields(board, 2) == 17 


gamma_delete(board)
