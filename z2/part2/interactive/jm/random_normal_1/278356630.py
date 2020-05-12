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
uuid: 278356630
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 8, 3, 11)
assert board is not None


assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_free_fields(board, 1) == 55 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_free_fields(board, 3) == 51 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_free_fields(board, 1) == 50 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_free_fields(board, 3) == 48 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 5, 3) == 1 


board302251655 = gamma_board(board)
assert board302251655 is not None
assert board302251655 == (".......\n"
".2.....\n"
"33.3..1\n"
".......\n"
"..2.232\n"
"1....1.\n"
"....3.2\n"
"2......\n")
del board302251655
board302251655 = None
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_free_fields(board, 3) == 39 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_busy_fields(board, 2) == 8 


board203908111 = gamma_board(board)
assert board203908111 is not None
assert board203908111 == ("....1..\n"
".2.....\n"
"33.32.1\n"
".2.....\n"
"..2.232\n"
"13...1.\n"
"1...3.2\n"
"2......\n")
del board203908111
board203908111 = None
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 1, 4, 5) == 0 


board772518288 = gamma_board(board)
assert board772518288 is not None
assert board772518288 == ("....1..\n"
".2.....\n"
"33.32.1\n"
".2.....\n"
"..2.232\n"
"13...1.\n"
"1...3.2\n"
"2...3..\n")
del board772518288
board772518288 = None
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_golden_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_golden_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_golden_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_golden_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 4, 6) == 1 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_free_fields(board, 3) == 25 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 2) == 23 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_free_fields(board, 2) == 23 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 0 


board382956842 = gamma_board(board)
assert board382956842 is not None
assert board382956842 == ("....1..\n"
"12123..\n"
"33.3221\n"
".2..1..\n"
"112.222\n"
"133.31.\n"
"1..33.3\n"
"2..232.\n")
del board382956842
board382956842 = None
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_golden_move(board, 1, 3, 5) == 1 
assert gamma_free_fields(board, 2) == 21 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_move(board, 3, 5, 5) == 0 


board967069162 = gamma_board(board)
assert board967069162 is not None
assert board967069162 == ("....1..\n"
"12123.1\n"
"33.1221\n"
".2..1..\n"
"112.222\n"
"133.31.\n"
"1..33.3\n"
"2..2322\n")
del board967069162
board967069162 = None
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_free_fields(board, 1) == 21 


board477338829 = gamma_board(board)
assert board477338829 is not None
assert board477338829 == ("....1..\n"
"12123.1\n"
"33.1221\n"
".2..1..\n"
"112.222\n"
"133.31.\n"
"1..33.3\n"
"2..2322\n")
del board477338829
board477338829 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 1, 3, 7) == 1 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 6, 4) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 5, 6) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 16 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_busy_fields(board, 2) == 15 
assert gamma_move(board, 3, 6, 7) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 0 


gamma_delete(board)
