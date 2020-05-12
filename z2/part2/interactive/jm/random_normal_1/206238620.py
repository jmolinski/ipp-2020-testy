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
uuid: 206238620
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 4, 16)
assert board is not None


assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 2, 3, 6) == 1 
assert gamma_busy_fields(board, 2) == 2 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 7) == 1 
assert gamma_golden_move(board, 4, 5, 5) == 1 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_move(board, 2, 1, 7) == 0 


board865967721 = gamma_board(board)
assert board865967721 is not None
assert board865967721 == (".4....\n"
"...2..\n"
".1...4\n"
"....3.\n"
"......\n"
"......\n"
"1.....\n"
"..32..\n")
del board865967721
board865967721 = None
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_busy_fields(board, 4) == 2 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_move(board, 3, 4, 7) == 1 
assert gamma_move(board, 4, 2, 3) == 1 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 4, 1, 7) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 27 
assert gamma_move(board, 2, 6, 4) == 0 
assert gamma_free_fields(board, 2) == 27 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_free_fields(board, 3) == 27 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_move(board, 4, 5, 2) == 1 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_busy_fields(board, 4) == 9 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_free_fields(board, 2) == 17 
assert gamma_golden_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 4, 4, 6) == 1 
assert gamma_free_fields(board, 4) == 15 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 5, 4) == 0 


board258493795 = gamma_board(board)
assert board258493795 is not None
assert board258493795 == ("342.3.\n"
"1..24.\n"
"111..4\n"
"4.1334\n"
".142.3\n"
"4242.4\n"
"23.22.\n"
".43211\n")
del board258493795
board258493795 = None
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_golden_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_free_fields(board, 2) == 14 


board307265351 = gamma_board(board)
assert board307265351 is not None
assert board307265351 == ("342.3.\n"
"1..24.\n"
"111..4\n"
"4.1334\n"
".142.3\n"
"4242.4\n"
"23.22.\n"
".43211\n")
del board307265351
board307265351 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 3, 7) == 1 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 1, 5, 3) == 0 


board286316284 = gamma_board(board)
assert board286316284 is not None
assert board286316284 == ("34233.\n"
"12.24.\n"
"111.34\n"
"4.1334\n"
".142.3\n"
"4242.4\n"
"23.22.\n"
"243211\n")
del board286316284
board286316284 = None
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 2, 2) == 0 


board839197087 = gamma_board(board)
assert board839197087 is not None
assert board839197087 == ("34233.\n"
"12.24.\n"
"111.34\n"
"4.1334\n"
".142.3\n"
"4242.4\n"
"23.22.\n"
"243211\n")
del board839197087
board839197087 = None
assert gamma_move(board, 1, 7, 5) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_possible(board, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_free_fields(board, 4) == 10 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_busy_fields(board, 2) == 12 
assert gamma_free_fields(board, 2) == 9 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 7, 5) == 0 


board699527634 = gamma_board(board)
assert board699527634 is not None
assert board699527634 == ("34233.\n"
"12.24.\n"
"111.34\n"
"421334\n"
".142.3\n"
"4242.4\n"
"23322.\n"
"243211\n")
del board699527634
board699527634 = None


gamma_delete(board)
