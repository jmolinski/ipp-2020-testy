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
uuid: 260774837
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 4, 12)
assert board is not None


assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 7, 0) == 1 


board863372109 = gamma_board(board)
assert board863372109 is not None
assert board863372109 == ("........\n"
"........\n"
".3.2....\n"
"........\n"
"........\n"
"4......1\n")
del board863372109
board863372109 = None
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 6, 2) == 1 
assert gamma_free_fields(board, 3) == 40 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_free_fields(board, 3) == 32 


board122187780 = gamma_board(board)
assert board122187780 is not None
assert board122187780 == ("2242....\n"
".3......\n"
"33.2....\n"
"...4323.\n"
"31......\n"
"4......1\n")
del board122187780
board122187780 = None
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 7, 4) == 1 
assert gamma_move(board, 1, 6, 1) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_free_fields(board, 1) == 29 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_free_fields(board, 2) == 28 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 24 


board827379968 = gamma_board(board)
assert board827379968 is not None
assert board827379968 == ("2242....\n"
".3...2.4\n"
"33.2....\n"
".234323.\n"
"311...1.\n"
"42..1..1\n")
del board827379968
board827379968 = None
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 4, 5, 5) == 1 
assert gamma_move(board, 4, 7, 0) == 0 


board503370900 = gamma_board(board)
assert board503370900 is not None
assert board503370900 == ("2242.4..\n"
".3..42.4\n"
"332213..\n"
".234323.\n"
"311..21.\n"
"42..1..1\n")
del board503370900
board503370900 = None
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_free_fields(board, 2) == 17 


board658249366 = gamma_board(board)
assert board658249366 is not None
assert board658249366 == ("2242.4..\n"
".3..42.4\n"
"332213..\n"
".234323.\n"
"311..21.\n"
"422.1..1\n")
del board658249366
board658249366 = None
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_free_fields(board, 3) == 16 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_free_fields(board, 4) == 15 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 6, 4) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_free_fields(board, 4) == 14 
assert gamma_move(board, 1, 7, 2) == 1 
assert gamma_move(board, 1, 7, 5) == 1 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_golden_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_free_fields(board, 4) == 11 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 7, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 4, 7, 1) == 0 


board743243425 = gamma_board(board)
assert board743243425 is not None
assert board743243425 == ("224244.1\n"
"234.4234\n"
"332213..\n"
".2343231\n"
"31142211\n"
"422.12.1\n")
del board743243425
board743243425 = None
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_golden_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 7, 3) == 1 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 


gamma_delete(board)
