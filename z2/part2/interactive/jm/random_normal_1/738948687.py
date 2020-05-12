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
uuid: 738948687
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 7, 6, 2)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 6, 0, 6) == 1 
assert gamma_move(board, 6, 1, 5) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 0 


board248879093 = gamma_board(board)
assert board248879093 is not None
assert board248879093 == ("6...\n"
"26..\n"
".23.\n"
".244\n"
"1.1.\n"
"..1.\n"
"...4\n")
del board248879093
board248879093 = None
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 5) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_free_fields(board, 6) == 2 


board222882019 = gamma_board(board)
assert board222882019 is not None
assert board222882019 == ("6...\n"
"26..\n"
".23.\n"
".244\n"
"1.1.\n"
"..1.\n"
"...4\n")
del board222882019
board222882019 = None
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 2, 5) == 0 


board385840221 = gamma_board(board)
assert board385840221 is not None
assert board385840221 == ("6...\n"
"26..\n"
".23.\n"
".244\n"
"1.1.\n"
"..1.\n"
"...4\n")
del board385840221
board385840221 = None
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_free_fields(board, 3) == 16 
assert gamma_move(board, 5, 3, 6) == 1 
assert gamma_move(board, 5, 2, 0) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 6, 3, 0) == 0 
assert gamma_busy_fields(board, 6) == 2 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_move(board, 5, 0, 0) == 0 
assert gamma_golden_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 6, 6, 2) == 0 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 1, 6) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 6, 4, 3) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 6, 2) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 3, 4) == 1 
assert gamma_golden_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 6, 3, 1) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 


gamma_delete(board)
