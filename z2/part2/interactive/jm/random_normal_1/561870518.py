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
uuid: 561870518
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 4, 15)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_free_fields(board, 3) == 43 


board700952916 = gamma_board(board)
assert board700952916 is not None
assert board700952916 == ("..22..\n"
"......\n"
"......\n"
"...3..\n"
"......\n"
"1...1.\n"
"......\n"
"......\n")
del board700952916
board700952916 = None
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_free_fields(board, 2) == 41 
assert gamma_move(board, 3, 1, 7) == 1 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 4, 7) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 4, 4) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_free_fields(board, 1) == 31 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_free_fields(board, 2) == 25 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 24 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 6, 5) == 0 


board137299271 = gamma_board(board)
assert board137299271 is not None
assert board137299271 == (".3222.\n"
"......\n"
"33.3.1\n"
"..234.\n"
".2.41.\n"
"1.331.\n"
".4..42\n"
"1334..\n")
del board137299271
board137299271 = None
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 2, 5, 6) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 3, 5, 7) == 1 
assert gamma_move(board, 4, 4, 6) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 12 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_busy_fields(board, 4) == 8 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_busy_fields(board, 3) == 13 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_golden_move(board, 4, 6, 5) == 0 
assert gamma_move(board, 1, 1, 0) == 0 


board301797101 = gamma_board(board)
assert board301797101 is not None
assert board301797101 == ("332223\n"
"4...42\n"
"333311\n"
"232342\n"
"42441.\n"
"14331.\n"
".21.42\n"
"1334..\n")
del board301797101
board301797101 = None
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 2, 7) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_busy_fields(board, 3) == 14 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_busy_fields(board, 4) == 9 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 


board493510436 = gamma_board(board)
assert board493510436 is not None
assert board493510436 == ("332223\n"
"4...42\n"
"333311\n"
"232342\n"
"42441.\n"
"14331.\n"
"321.42\n"
"1334.1\n")
del board493510436
board493510436 = None
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 4, 2, 5) == 0 


gamma_delete(board)
