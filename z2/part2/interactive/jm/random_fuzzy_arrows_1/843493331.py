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
uuid: 843493331
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 5, 4, 4)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 25 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_free_fields(board, 4) == 21 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_golden_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_free_fields(board, 4) == 20 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 1 


board131071533 = gamma_board(board)
assert board131071533 is not None
assert board131071533 == ("21....\n"
".1.3..\n"
"2.33.3\n"
"221...\n"
".1....\n")
del board131071533
board131071533 = None
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 1 


board186937087 = gamma_board(board)
assert board186937087 is not None
assert board186937087 == ("21....\n"
".123..\n"
"2.3333\n"
"2214..\n"
".1....\n")
del board186937087
board186937087 = None
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_golden_move(board, 1, 3, 3) == 1 


board311133873 = gamma_board(board)
assert board311133873 is not None
assert board311133873 == ("214.1.\n"
"11211.\n"
"2.3333\n"
"2214..\n"
".1....\n")
del board311133873
board311133873 = None
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_golden_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 4, 2, 0) == 0 


board535852884 = gamma_board(board)
assert board535852884 is not None
assert board535852884 == ("21431.\n"
"112114\n"
"233333\n"
"22143.\n"
"113..3\n")
del board535852884
board535852884 = None
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 1) == 0 


board883157248 = gamma_board(board)
assert board883157248 is not None
assert board883157248 == ("21431.\n"
"112114\n"
"233333\n"
"22143.\n"
"113..3\n")
del board883157248
board883157248 = None
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_free_fields(board, 2) == 4 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_golden_move(board, 4, 4, 3) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_free_fields(board, 4) == 3 


gamma_delete(board)
