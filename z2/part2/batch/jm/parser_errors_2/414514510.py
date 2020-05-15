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
uuid: 414514510
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 6)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 16 
assert gamma_move(board, 2, 2, 2) == 1 


board832229873 = gamma_board(board)
assert board832229873 is not None
assert board832229873 == (".4...\n"
"1..4.\n"
"..21.\n"
"13...\n"
"2.2.3\n")
del board832229873
board832229873 = None
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 0 


board915398393 = gamma_board(board)
assert board915398393 is not None
assert board915398393 == ("34.23\n"
"1.342\n"
"21214\n"
"13341\n"
"2.2.3\n")
del board915398393
board915398393 = None
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 


board836323401 = gamma_board(board)
assert board836323401 is not None
assert board836323401 == ("34.23\n"
"1.342\n"
"21214\n"
"13341\n"
"2.2.3\n")
del board836323401
board836323401 = None
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_golden_move(board, 3, 4, 3) == 0 


board926808166 = gamma_board(board)
assert board926808166 is not None
assert board926808166 == ("34.23\n"
"1.342\n"
"21214\n"
"13341\n"
"2.223\n")
del board926808166
board926808166 = None
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 2 


gamma_delete(board)
