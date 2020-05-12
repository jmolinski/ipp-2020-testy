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
uuid: 751525896
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 4, 4, 5)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 


board507185812 = gamma_board(board)
assert board507185812 is not None
assert board507185812 == ("......\n"
"......\n"
"...2..\n"
"1.....\n")
del board507185812
board507185812 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_free_fields(board, 3) == 13 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 


board521098793 = gamma_board(board)
assert board521098793 is not None
assert board521098793 == ("3..43.\n"
"...13.\n"
"341222\n"
"1.2...\n")
del board521098793
board521098793 = None
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_free_fields(board, 4) == 9 


board289958194 = gamma_board(board)
assert board289958194 is not None
assert board289958194 == ("31.43.\n"
"...13.\n"
"341222\n"
"1.2..1\n")
del board289958194
board289958194 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_possible(board, 3) == 0 


board206121237 = gamma_board(board)
assert board206121237 is not None
assert board206121237 == ("31.43.\n"
".3113.\n"
"341222\n"
"1.22.1\n")
del board206121237
board206121237 = None
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 


board394481806 = gamma_board(board)
assert board394481806 is not None
assert board394481806 == ("31443.\n"
".3113.\n"
"341222\n"
"1.22.1\n")
del board394481806
board394481806 = None
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 3, 0) == 0 


gamma_delete(board)
