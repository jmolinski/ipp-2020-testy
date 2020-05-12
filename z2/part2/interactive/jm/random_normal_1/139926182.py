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
uuid: 139926182
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 6, 4, 12)
assert board is not None


assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 4, 0, 4) == 1 


board206273586 = gamma_board(board)
assert board206273586 is not None
assert board206273586 == ("....4..\n"
"4.4.2..\n"
"....2..\n"
"3....1.\n"
"...3...\n"
".......\n")
del board206273586
board206273586 = None
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 3, 5) == 1 


board190191173 = gamma_board(board)
assert board190191173 is not None
assert board190191173 == ("...34..\n"
"4.4.2..\n"
"....2..\n"
"3....1.\n"
"...321.\n"
".......\n")
del board190191173
board190191173 = None
assert gamma_move(board, 4, 6, 5) == 1 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_golden_move(board, 1, 4, 2) == 0 


board637862415 = gamma_board(board)
assert board637862415 is not None
assert board637862415 == ("...34.4\n"
"4.4.2..\n"
"....2..\n"
"3....1.\n"
"...321.\n"
".......\n")
del board637862415
board637862415 = None
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_free_fields(board, 3) == 29 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 1, 1) == 0 


board106274227 = gamma_board(board)
assert board106274227 is not None
assert board106274227 == ("...3414\n"
"4.4.222\n"
".2..2..\n"
"314.31.\n"
".2.321.\n"
".2...2.\n")
del board106274227
board106274227 = None
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_golden_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_busy_fields(board, 4) == 11 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_free_fields(board, 4) == 6 


board547512665 = gamma_board(board)
assert board547512665 is not None
assert board547512665 == ("..33414\n"
"4144222\n"
".2442.4\n"
"314231.\n"
"14.3214\n"
"2221122\n")
del board547512665
board547512665 = None
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 1, 1) == 0 


board715841291 = gamma_board(board)
assert board715841291 is not None
assert board715841291 == ("..33414\n"
"4144222\n"
".2442.4\n"
"314231.\n"
"14.3214\n"
"2221122\n")
del board715841291
board715841291 = None
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_busy_fields(board, 4) == 11 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 1) == 0 


board877386694 = gamma_board(board)
assert board877386694 is not None
assert board877386694 == ("..33414\n"
"4144222\n"
".2442.4\n"
"314231.\n"
"14.3214\n"
"2221122\n")
del board877386694
board877386694 = None
assert gamma_move(board, 4, 3, 5) == 0 


gamma_delete(board)
