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
uuid: 207040823
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 2, 1)
assert board is not None


assert gamma_busy_fields(board, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 


board662627758 = gamma_board(board)
assert board662627758 is not None
assert board662627758 == ("21.\n"
"21.\n")
del board662627758
board662627758 = None
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 0 


board355449900 = gamma_board(board)
assert board355449900 is not None
assert board355449900 == ("21.\n"
"21.\n")
del board355449900
board355449900 = None
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 


board585976775 = gamma_board(board)
assert board585976775 is not None
assert board585976775 == ("21.\n"
"21.\n")
del board585976775
board585976775 = None
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_move(board, 2, 0, 1) == 0 


gamma_delete(board)
