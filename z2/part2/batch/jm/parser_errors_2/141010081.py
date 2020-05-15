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
uuid: 141010081
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 2, 4)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 1, 3, 0) == 0 


board785075093 = gamma_board(board)
assert board785075093 is not None
assert board785075093 == ("...\n"
"..2\n"
"...\n"
"..1\n")
del board785075093
board785075093 = None
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 1 


board730449302 = gamma_board(board)
assert board730449302 is not None
assert board730449302 == ("..2\n"
"..2\n"
"..2\n"
"121\n")
del board730449302
board730449302 = None
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 1, 1) == 1 


board187399425 = gamma_board(board)
assert board187399425 is not None
assert board187399425 == ("1.2\n"
"..2\n"
".22\n"
"121\n")
del board187399425
board187399425 = None
assert gamma_move(board, 1, 3, 1) == 0 


board681257595 = gamma_board(board)
assert board681257595 is not None
assert board681257595 == ("1.2\n"
"..2\n"
".22\n"
"121\n")
del board681257595
board681257595 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 3 


gamma_delete(board)
