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
uuid: 957431247
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 4, 6, 5)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_busy_fields(board, 3) == 0 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 6, 1, 7) == 0 
assert gamma_move(board, 6, 6, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_free_fields(board, 1) == 24 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_move(board, 5, 0, 3) == 0 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 6, 3, 6) == 0 
assert gamma_free_fields(board, 6) == 20 
assert gamma_golden_move(board, 6, 1, 6) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_move(board, 5, 5, 3) == 1 
assert gamma_free_fields(board, 5) == 19 
assert gamma_move(board, 6, 6, 2) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 6, 0, 2) == 1 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 0, 7) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 6, 0, 7) == 0 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 1, 7) == 0 
assert gamma_move(board, 6, 0, 3) == 0 
assert gamma_free_fields(board, 6) == 12 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 6, 3, 7) == 0 
assert gamma_move(board, 6, 5, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_move(board, 4, 6, 0) == 0 


board605585873 = gamma_board(board)
assert board605585873 is not None
assert board605585873 == ("4214451.\n"
"61...563\n"
"111.123.\n"
"1...4663\n")
del board605585873
board605585873 = None
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_free_fields(board, 5) == 8 
assert gamma_move(board, 6, 7, 2) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_busy_fields(board, 1) == 9 


board298806266 = gamma_board(board)
assert board298806266 is not None
assert board298806266 == ("4214451.\n"
"61..1563\n"
"111.123.\n"
"1..54663\n")
del board298806266
board298806266 = None
assert gamma_move(board, 3, 3, 7) == 0 


board794506496 = gamma_board(board)
assert board794506496 is not None
assert board794506496 == ("4214451.\n"
"61..1563\n"
"111.123.\n"
"1..54663\n")
del board794506496
board794506496 = None


gamma_delete(board)
