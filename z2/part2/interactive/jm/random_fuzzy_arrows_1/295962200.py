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
uuid: 295962200
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 3, 13)
assert board is not None


assert gamma_move(board, 1, 7, 6) == 1 


board781570480 = gamma_board(board)
assert board781570480 is not None
assert board781570480 == ("........\n"
".......1\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n")
del board781570480
board781570480 = None
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 6) == 1 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 3, 5, 4) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_free_fields(board, 3) == 38 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_free_fields(board, 2) == 30 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_free_fields(board, 2) == 28 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 7, 3) == 1 
assert gamma_move(board, 2, 7, 7) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_free_fields(board, 3) == 23 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_free_fields(board, 3) == 22 
assert gamma_free_fields(board, 1) == 22 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_golden_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 6, 7) == 1 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_free_fields(board, 3) == 18 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 7, 0) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_move(board, 2, 1, 5) == 0 
assert gamma_golden_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_move(board, 2, 6, 6) == 0 
assert gamma_busy_fields(board, 2) == 22 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 3, 7) == 1 


board137854794 = gamma_board(board)
assert board137854794 is not None
assert board137854794 == ("...11.32\n"
".12.2.11\n"
"22133312\n"
"12.2232.\n"
"2.233.12\n"
"112222.3\n"
".22333.3\n"
"23.12.32\n")
del board137854794
board137854794 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 6, 7) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 7, 2) == 0 


board539875387 = gamma_board(board)
assert board539875387 is not None
assert board539875387 == ("...11.32\n"
"112.2.11\n"
"22133312\n"
"12.2232.\n"
"2.233.12\n"
"112222.3\n"
".22333.3\n"
"23312.32\n")
del board539875387
board539875387 = None
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 1, 5, 2) == 0 


board809727302 = gamma_board(board)
assert board809727302 is not None
assert board809727302 == ("...11.32\n"
"112.2.11\n"
"22133312\n"
"12.2232.\n"
"2.233.12\n"
"112222.3\n"
"122333.3\n"
"23312.32\n")
del board809727302
board809727302 = None
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_golden_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_busy_fields(board, 1) == 15 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_busy_fields(board, 1) == 15 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 7, 2) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 0, 7) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 3, 6) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 0 


board999032386 = gamma_board(board)
assert board999032386 is not None
assert board999032386 == ("1.211.32\n"
"11232.11\n"
"22133312\n"
"12.2232.\n"
"21233112\n"
"112222.3\n"
"12233333\n"
"23312332\n")
del board999032386
board999032386 = None
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 3, 3) == 0 


board351971152 = gamma_board(board)
assert board351971152 is not None
assert board351971152 == ("1.211.32\n"
"11232.11\n"
"22133312\n"
"12.2232.\n"
"21233112\n"
"112222.3\n"
"12233333\n"
"23312332\n")
del board351971152
board351971152 = None
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_free_fields(board, 2) == 5 


gamma_delete(board)
