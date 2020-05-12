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
uuid: 609933792
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 5, 5, 9)
assert board is not None


assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 1 


board437283538 = gamma_board(board)
assert board437283538 is not None
assert board437283538 == ("2...2...\n"
".3......\n"
".3......\n"
"........\n"
"........\n")
del board437283538
board437283538 = None
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 1, 3) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 7, 2) == 1 
assert gamma_free_fields(board, 2) == 32 
assert gamma_move(board, 3, 1, 4) == 1 


board485125495 = gamma_board(board)
assert board485125495 is not None
assert board485125495 == ("23.42...\n"
".3......\n"
".3.....2\n"
"........\n"
"...21...\n")
del board485125495
board485125495 = None
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 7) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_free_fields(board, 5) == 30 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 0, 0) == 1 
assert gamma_move(board, 5, 2, 4) == 1 
assert gamma_move(board, 1, 3, 3) == 0 


board786131318 = gamma_board(board)
assert board786131318 is not None
assert board786131318 == ("23542...\n"
".3.5....\n"
".3....12\n"
"........\n"
"5..21...\n")
del board786131318
board786131318 = None
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_golden_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_golden_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_golden_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 20 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_golden_possible(board, 5) == 0 


board893840549 = gamma_board(board)
assert board893840549 is not None
assert board893840549 == ("23542...\n"
".3.5..2.\n"
"334..212\n"
".5.3..2.\n"
"52424.3.\n")
del board893840549
board893840549 = None
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_golden_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_golden_move(board, 4, 0, 0) == 0 


board959278144 = gamma_board(board)
assert board959278144 is not None
assert board959278144 == ("23542...\n"
".315..2.\n"
"334..212\n"
"13.3..2.\n"
"52424233\n")
del board959278144
board959278144 = None
assert gamma_move(board, 5, 4, 7) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_golden_possible(board, 4) == 0 


board186630370 = gamma_board(board)
assert board186630370 is not None
assert board186630370 == ("23542...\n"
".315..2.\n"
"334..212\n"
"13.3..2.\n"
"52424233\n")
del board186630370
board186630370 = None
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_free_fields(board, 5) == 13 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 2, 0) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 7, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_free_fields(board, 1) == 12 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 1, 2) == 0 


gamma_delete(board)
