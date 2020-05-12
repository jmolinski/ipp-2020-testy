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
uuid: 611751842
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 6, 4, 6)
assert board is not None


assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 2, 1) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 


board963305703 = gamma_board(board)
assert board963305703 is not None
assert board963305703 == ("..2...\n"
".....2\n"
"2..3..\n"
"4...1.\n"
"414.11\n"
"4.....\n")
del board963305703
board963305703 = None
assert gamma_move(board, 4, 4, 0) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_free_fields(board, 1) == 20 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_free_fields(board, 2) == 20 
assert gamma_move(board, 3, 3, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 1 


board991036502 = gamma_board(board)
assert board991036502 is not None
assert board991036502 == ("..24..\n"
"...3.2\n"
"21.3..\n"
"4..31.\n"
"414.11\n"
"4.4.4.\n")
del board991036502
board991036502 = None
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 3, 5) == 0 


board804062236 = gamma_board(board)
assert board804062236 is not None
assert board804062236 == ("..24..\n"
"...322\n"
"21.3..\n"
"4..31.\n"
"414.11\n"
"4.4442\n")
del board804062236
board804062236 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 5, 5) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 2, 5) == 0 


board137180970 = gamma_board(board)
assert board137180970 is not None
assert board137180970 == ("..24.4\n"
"...322\n"
"21.3..\n"
"41.31.\n"
"414.11\n"
"414442\n")
del board137180970
board137180970 = None
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 4, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 3, 2) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 1, 1) == 0 


board915458303 = gamma_board(board)
assert board915458303 is not None
assert board915458303 == ("4.2444\n"
"344322\n"
"2113.2\n"
"41131.\n"
"414.11\n"
"414442\n")
del board915458303
board915458303 = None


gamma_delete(board)
