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
uuid: 627566893
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 4, 2)
assert board is not None


assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_free_fields(board, 4) == 16 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 0 


board544194994 = gamma_board(board)
assert board544194994 is not None
assert board544194994 == ("22...\n"
"2331.\n"
"2...1\n"
"....1\n")
del board544194994
board544194994 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_golden_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 


board991998644 = gamma_board(board)
assert board991998644 is not None
assert board991998644 == ("22...\n"
"2331.\n"
"24.41\n"
"2...1\n")
del board991998644
board991998644 = None
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_golden_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 3) == 0 


board303471658 = gamma_board(board)
assert board303471658 is not None
assert board303471658 == ("22.1.\n"
"2331.\n"
"24.41\n"
"2...1\n")
del board303471658
board303471658 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 4, 0) == 0 


board647657025 = gamma_board(board)
assert board647657025 is not None
assert board647657025 == ("22.1.\n"
"2331.\n"
"24.41\n"
"2.341\n")
del board647657025
board647657025 = None
assert gamma_move(board, 1, 1, 2) == 0 


board743716464 = gamma_board(board)
assert board743716464 is not None
assert board743716464 == ("22.1.\n"
"2331.\n"
"24.41\n"
"2.341\n")
del board743716464
board743716464 = None
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 0, 1) == 0 


gamma_delete(board)
