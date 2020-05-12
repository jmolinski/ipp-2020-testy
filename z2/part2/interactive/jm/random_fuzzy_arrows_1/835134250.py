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
uuid: 835134250
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 7, 5, 13)
assert board is not None


assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_free_fields(board, 2) == 53 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_busy_fields(board, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_golden_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 6, 6) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 4, 7) == 0 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 7, 4) == 1 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 5, 0, 6) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 5, 6, 4) == 1 
assert gamma_move(board, 5, 5, 5) == 1 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_golden_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_move(board, 1, 6, 6) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 6, 5) == 1 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_free_fields(board, 4) == 25 
assert gamma_move(board, 5, 2, 4) == 1 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_golden_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_busy_fields(board, 3) == 9 


board501668135 = gamma_board(board)
assert board501668135 is not None
assert board501668135 == ("5..2.14.\n"
"13.3.54.\n"
"..513.53\n"
"3.2354.1\n"
"2.352.23\n"
"1.32124.\n"
"..5.4...\n")
del board501668135
board501668135 = None
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_free_fields(board, 3) == 22 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 7, 0) == 1 
assert gamma_free_fields(board, 4) == 18 
assert gamma_golden_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 2, 6) == 1 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 2, 4, 0) == 0 


board446793647 = gamma_board(board)
assert board446793647 is not None
assert board446793647 == ("5.52.14.\n"
"1343154.\n"
"..513.53\n"
"3.2354.1\n"
"2.352123\n"
"1.32124.\n"
".35.4..4\n")
del board446793647
board446793647 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 5, 4) == 1 
assert gamma_move(board, 5, 7, 5) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 1, 5, 5) == 0 


board453730818 = gamma_board(board)
assert board453730818 is not None
assert board453730818 == ("5.52214.\n"
"13431545\n"
".2513553\n"
"3.2354.1\n"
"2.352123\n"
"1.32124.\n"
"235.4..4\n")
del board453730818
board453730818 = None
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_golden_move(board, 4, 3, 7) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 1, 5) == 0 


board562456424 = gamma_board(board)
assert board562456424 is not None
assert board562456424 == ("5.52214.\n"
"13431545\n"
".2513553\n"
"3.2354.1\n"
"2.352123\n"
"1.32124.\n"
"235.4..4\n")
del board562456424
board562456424 = None
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_move(board, 4, 0, 6) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 4, 6, 7) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_busy_fields(board, 5) == 11 
assert gamma_move(board, 1, 0, 6) == 0 


board779428978 = gamma_board(board)
assert board779428978 is not None
assert board779428978 == ("5352214.\n"
"13431545\n"
"22513553\n"
"342354.1\n"
"2.352123\n"
"1132124.\n"
"23554..4\n")
del board779428978
board779428978 = None
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_busy_fields(board, 3) == 11 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 1) == 0 


board764419175 = gamma_board(board)
assert board764419175 is not None
assert board764419175 == ("5352214.\n"
"13431545\n"
"22513553\n"
"342354.1\n"
"2.352123\n"
"1132124.\n"
"23554..4\n")
del board764419175
board764419175 = None
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 6) == 0 
assert gamma_move(board, 4, 5, 5) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 1, 0) == 0 


board285942831 = gamma_board(board)
assert board285942831 is not None
assert board285942831 == ("5352214.\n"
"13431545\n"
"22513553\n"
"342354.1\n"
"2.352123\n"
"1132124.\n"
"23554..4\n")
del board285942831
board285942831 = None
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_golden_move(board, 2, 4, 6) == 0 


gamma_delete(board)
