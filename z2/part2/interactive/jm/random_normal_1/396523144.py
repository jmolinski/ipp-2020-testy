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
uuid: 396523144
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 5, 9)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 5, 7) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_free_fields(board, 1) == 39 


board880961962 = gamma_board(board)
assert board880961962 is not None
assert board880961962 == (".....2\n"
"......\n"
"....4.\n"
"...1..\n"
"1.....\n"
"2.....\n"
"...55.\n"
".3...1\n")
del board880961962
board880961962 = None
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_free_fields(board, 4) == 37 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 5, 0, 7) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 7, 3) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_free_fields(board, 1) == 26 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 2, 7) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 2, 5) == 1 


board383168615 = gamma_board(board)
assert board383168615 is not None
assert board383168615 == ("5.32.2\n"
".2...1\n"
"14454.\n"
"...12.\n"
"12..4.\n"
"23....\n"
"34.55.\n"
"53..41\n")
del board383168615
board383168615 = None
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 2, 7) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 3, 2) == 1 


board767653514 = gamma_board(board)
assert board767653514 is not None
assert board767653514 == ("5.32.2\n"
".2...1\n"
"14454.\n"
"...12.\n"
"122.4.\n"
"23.4..\n"
"34.55.\n"
"53..41\n")
del board767653514
board767653514 = None
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_free_fields(board, 5) == 19 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 5, 5, 3) == 1 
assert gamma_free_fields(board, 5) == 16 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 6) == 1 


board790571197 = gamma_board(board)
assert board790571197 is not None
assert board790571197 == ("5.32.2\n"
".241.1\n"
"14454.\n"
"...12.\n"
"122145\n"
"23.4..\n"
"34.55.\n"
"535.41\n")
del board790571197
board790571197 = None
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 7, 4) == 0 
assert gamma_move(board, 5, 4, 6) == 1 
assert gamma_busy_fields(board, 5) == 8 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_golden_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 7) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 4, 7) == 0 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 


board414067899 = gamma_board(board)
assert board414067899 is not None
assert board414067899 == ("523212\n"
".24151\n"
"144542\n"
"..3124\n"
"122145\n"
"23.4.2\n"
"33.55.\n"
"535.41\n")
del board414067899
board414067899 = None
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_free_fields(board, 5) == 6 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_golden_move(board, 1, 1, 2) == 1 


board614609873 = gamma_board(board)
assert board614609873 is not None
assert board614609873 == ("523212\n"
".24151\n"
"144542\n"
"..3124\n"
"122145\n"
"2114.2\n"
"33.55.\n"
"535341\n")
del board614609873
board614609873 = None
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_golden_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_free_fields(board, 4) == 6 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 1, 6, 0) == 0 


gamma_delete(board)
