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
uuid: 700673832
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 3, 11)
assert board is not None


assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 7, 5) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_golden_move(board, 2, 5, 7) == 0 


board545764026 = gamma_board(board)
assert board545764026 is not None
assert board545764026 == (".......1\n"
"........\n"
"........\n"
"..1.....\n"
"........\n"
"....2...\n")
del board545764026
board545764026 = None
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_free_fields(board, 1) == 43 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 2, 5) == 1 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 1, 1, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_free_fields(board, 2) == 28 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 1, 6, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 3, 6, 5) == 0 


board842021602 = gamma_board(board)
assert board842021602 is not None
assert board842021602 == ("2.212221\n"
"2233....\n"
"13......\n"
"33122...\n"
"1.......\n"
"..3.211.\n")
del board842021602
board842021602 = None
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 1, 0) == 1 


board746746390 = gamma_board(board)
assert board746746390 is not None
assert board746746390 == ("2.212221\n"
"2233....\n"
"13......\n"
"33122...\n"
"1.......\n"
".23.211.\n")
del board746746390
board746746390 = None
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_free_fields(board, 2) == 22 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 2, 7, 1) == 1 
assert gamma_golden_move(board, 2, 3, 2) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_golden_possible(board, 3) == 1 


board307028711 = gamma_board(board)
assert board307028711 is not None
assert board307028711 == ("2.212221\n"
"2233....\n"
"131..2..\n"
"33122...\n"
"1......2\n"
".23.211.\n")
del board307028711
board307028711 = None
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 5, 1) == 1 


board246617453 = gamma_board(board)
assert board246617453 is not None
assert board246617453 == ("2.212221\n"
"2233....\n"
"131..2..\n"
"33122...\n"
"1....2.2\n"
".23.211.\n")
del board246617453
board246617453 = None
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_move(board, 1, 6, 4) == 1 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 7, 4) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_busy_fields(board, 2) == 16 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 7, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_busy_fields(board, 2) == 16 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 3, 7, 2) == 1 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_golden_move(board, 3, 3, 2) == 1 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 6, 3) == 0 


board256433868 = gamma_board(board)
assert board256433868 is not None
assert board256433868 == ("2.212221\n"
"22331.12\n"
"13133233\n"
"33132123\n"
"11...2.2\n"
"123.211.\n")
del board256433868
board256433868 = None
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_busy_fields(board, 2) == 16 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 6, 0) == 0 


board513534127 = gamma_board(board)
assert board513534127 is not None
assert board513534127 == ("2.212221\n"
"22331.12\n"
"13133233\n"
"33132123\n"
"11..22.2\n"
"123.211.\n")
del board513534127
board513534127 = None
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_free_fields(board, 1) == 7 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 7, 1) == 0 


board297031434 = gamma_board(board)
assert board297031434 is not None
assert board297031434 == ("2.212221\n"
"22331.12\n"
"13133233\n"
"33132123\n"
"11..22.2\n"
"123.211.\n")
del board297031434
board297031434 = None
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_free_fields(board, 3) == 7 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 3, 4) == 0 


gamma_delete(board)
