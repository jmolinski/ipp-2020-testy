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
uuid: 285418311
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 3, 1)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_busy_fields(board, 1) == 1 


board330043873 = gamma_board(board)
assert board330043873 is not None
assert board330043873 == ("3..\n"
"...\n"
"...\n"
".12\n")
del board330043873
board330043873 = None
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 


board244186339 = gamma_board(board)
assert board244186339 is not None
assert board244186339 == ("3..\n"
"3..\n"
".1.\n"
".12\n")
del board244186339
board244186339 = None
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 1, 0) == 0 


board222578711 = gamma_board(board)
assert board222578711 is not None
assert board222578711 == ("3..\n"
"3..\n"
".1.\n"
".12\n")
del board222578711
board222578711 = None
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 


board578152191 = gamma_board(board)
assert board578152191 is not None
assert board578152191 == ("3..\n"
"3..\n"
".1.\n"
".12\n")
del board578152191
board578152191 = None
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 


board989171698 = gamma_board(board)
assert board989171698 is not None
assert board989171698 == ("3..\n"
"3..\n"
".11\n"
".12\n")
del board989171698
board989171698 = None
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 


gamma_delete(board)
