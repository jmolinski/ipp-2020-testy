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
uuid: 862626331
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 3, 22)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_golden_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 3, 7, 4) == 1 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 6, 2) == 1 
assert gamma_move(board, 2, 7, 2) == 1 
assert gamma_free_fields(board, 2) == 24 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 1 


board869407775 = gamma_board(board)
assert board869407775 is not None
assert board869407775 == ("..3..3..\n"
"12131..3\n"
".31...21\n"
"..22..12\n"
".13..32.\n"
"2113.1..\n")
del board869407775
board869407775 = None
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_free_fields(board, 2) == 23 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_free_fields(board, 2) == 21 
assert gamma_move(board, 3, 5, 1) == 0 


board468735471 = gamma_board(board)
assert board468735471 is not None
assert board468735471 == ("..32.3..\n"
"121311.3\n"
".31...21\n"
"..22..12\n"
".13..32.\n"
"2113.1..\n")
del board468735471
board468735471 = None
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 7, 0) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_free_fields(board, 2) == 13 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_golden_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_busy_fields(board, 2) == 16 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 6, 4) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 5, 4) == 0 


board159478402 = gamma_board(board)
assert board159478402 is not None
assert board159478402 == ("2232.312\n"
"13131133\n"
".3132121\n"
".222.212\n"
"213.2323\n"
"21132111\n")
del board159478402
board159478402 = None
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 16 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 17 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_free_fields(board, 2) == 4 


board527490492 = gamma_board(board)
assert board527490492 is not None
assert board527490492 == ("2232.312\n"
"13131133\n"
".3132121\n"
".222.212\n"
"21322323\n"
"21132111\n")
del board527490492
board527490492 = None
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 


gamma_delete(board)
