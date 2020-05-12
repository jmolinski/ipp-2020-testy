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
uuid: 151224417
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 6, 5)
assert board is not None


assert gamma_move(board, 1, 5, 7) == 1 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_busy_fields(board, 3) == 1 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_busy_fields(board, 4) == 1 
assert gamma_move(board, 5, 4, 7) == 1 
assert gamma_move(board, 6, 7, 0) == 1 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 0, 0) == 1 


board539143392 = gamma_board(board)
assert board539143392 is not None
assert board539143392 == ("....51..\n"
"....2...\n"
"12......\n"
"33......\n"
"........\n"
"........\n"
"........\n"
"44.....6\n")
del board539143392
board539143392 = None
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 5, 1) == 1 


board965567065 = gamma_board(board)
assert board965567065 is not None
assert board965567065 == ("....51..\n"
"....2...\n"
"12......\n"
"33......\n"
"1.......\n"
"........\n"
".....1..\n"
"44.....6\n")
del board965567065
board965567065 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_free_fields(board, 3) == 50 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 4, 7, 4) == 1 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 6, 1) == 1 
assert gamma_move(board, 6, 3, 7) == 1 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_move(board, 2, 2, 7) == 1 


board809363724 = gamma_board(board)
assert board809363724 is not None
assert board809363724 == ("..2651..\n"
"....2...\n"
"12......\n"
"33.....4\n"
"1.....4.\n"
".......3\n"
"..2..15.\n"
"441....6\n")
del board809363724
board809363724 = None
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 6, 0) == 1 
assert gamma_free_fields(board, 5) == 42 


board825369756 = gamma_board(board)
assert board825369756 is not None
assert board825369756 == ("..2651..\n"
"....2...\n"
"12......\n"
"33.....4\n"
"1...3.4.\n"
".......3\n"
"..2..15.\n"
"441...56\n")
del board825369756
board825369756 = None
assert gamma_move(board, 6, 2, 4) == 1 
assert gamma_move(board, 6, 2, 7) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 7, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 6, 4, 5) == 1 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 4, 5, 5) == 1 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 6, 5, 2) == 1 
assert gamma_move(board, 6, 4, 4) == 1 


board847746538 = gamma_board(board)
assert board847746538 is not None
assert board847746538 == ("..2651..\n"
"..4.2...\n"
"12.364..\n"
"336.6..4\n"
"1..53.4.\n"
".2...6.3\n"
".32..15.\n"
"441...56\n")
del board847746538
board847746538 = None
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_free_fields(board, 4) == 12 
assert gamma_move(board, 5, 6, 2) == 1 
assert gamma_free_fields(board, 5) == 30 
assert gamma_move(board, 6, 6, 5) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 6, 7) == 1 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 7, 3) == 1 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 7, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_free_fields(board, 1) == 9 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 7, 1) == 0 
assert gamma_free_fields(board, 5) == 26 
assert gamma_move(board, 6, 1, 4) == 0 
assert gamma_move(board, 6, 7, 1) == 0 
assert gamma_busy_fields(board, 6) == 6 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 6, 2, 3) == 1 
assert gamma_move(board, 6, 2, 5) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 5, 3, 7) == 0 
assert gamma_busy_fields(board, 5) == 7 
assert gamma_move(board, 6, 5, 6) == 0 
assert gamma_move(board, 6, 2, 7) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 7, 7) == 0 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_move(board, 6, 0, 6) == 0 


board308154158 = gamma_board(board)
assert board308154158 is not None
assert board308154158 == ("..26511.\n"
"..4.2...\n"
"123364..\n"
"336.6..4\n"
"1.653.43\n"
"52...653\n"
".32..155\n"
"441..156\n")
del board308154158
board308154158 = None
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 6, 6, 7) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_free_fields(board, 2) == 7 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 6, 5) == 1 
assert gamma_move(board, 5, 6, 6) == 1 
assert gamma_free_fields(board, 5) == 5 
assert gamma_move(board, 6, 7, 6) == 0 
assert gamma_move(board, 6, 1, 6) == 0 
assert gamma_free_fields(board, 6) == 7 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_golden_move(board, 4, 6, 6) == 1 
assert gamma_busy_fields(board, 5) == 7 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 3, 7, 0) == 0 
assert gamma_free_fields(board, 3) == 6 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 5, 0, 6) == 1 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_move(board, 6, 0, 6) == 0 
assert gamma_move(board, 1, 7, 7) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_free_fields(board, 5) == 5 
assert gamma_move(board, 6, 6, 7) == 0 
assert gamma_move(board, 6, 1, 3) == 1 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 6, 7) == 0 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 7, 5) == 1 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 6, 4, 5) == 0 
assert gamma_move(board, 6, 4, 7) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_golden_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 6, 3, 7) == 0 
assert gamma_golden_move(board, 6, 0, 0) == 0 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 5, 3, 4) == 1 
assert gamma_free_fields(board, 5) == 4 
assert gamma_move(board, 6, 6, 7) == 0 
assert gamma_golden_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 6, 4, 5) == 0 
assert gamma_move(board, 6, 2, 4) == 0 
assert gamma_busy_fields(board, 6) == 8 
assert gamma_free_fields(board, 6) == 5 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 4, 6) == 0 


gamma_delete(board)
