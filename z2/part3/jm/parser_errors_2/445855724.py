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
uuid: 445855724
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 4, 3, 1)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_free_fields(board, 3) == 18 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 7 


board328037316 = gamma_board(board)
assert board328037316 is not None
assert board328037316 == ("...2.\n"
"111..\n"
".....\n"
".....\n")
del board328037316
board328037316 = None
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 


board913821756 = gamma_board(board)
assert board913821756 is not None
assert board913821756 == ("..22.\n"
"1112.\n"
".....\n"
"...3.\n")
del board913821756
board913821756 = None
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_golden_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 2, 4, 3) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 


board644925799 = gamma_board(board)
assert board644925799 is not None
assert board644925799 == ("1.222\n"
"1112.\n"
"...3.\n"
"...3.\n")
del board644925799
board644925799 = None
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_golden_possible(board, 1) == 1 


gamma_delete(board)
