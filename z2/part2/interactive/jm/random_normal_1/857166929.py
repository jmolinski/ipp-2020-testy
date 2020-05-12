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
uuid: 857166929
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 8, 5, 8)
assert board is not None


assert gamma_move(board, 1, 3, 7) == 1 
assert gamma_move(board, 1, 6, 7) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_free_fields(board, 2) == 60 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 4, 7, 6) == 1 


board931131543 = gamma_board(board)
assert board931131543 is not None
assert board931131543 == ("...1..1.\n"
"...4...4\n"
"2.......\n"
"........\n"
"........\n"
"........\n"
"..2.....\n"
"........\n")
del board931131543
board931131543 = None
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_move(board, 1, 1, 4) == 1 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 3, 7) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 4, 1, 1) == 1 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_busy_fields(board, 5) == 2 
assert gamma_golden_move(board, 5, 0, 6) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_busy_fields(board, 1) == 6 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 4, 7, 3) == 1 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 7, 2) == 1 


board843006946 = gamma_board(board)
assert board843006946 is not None
assert board843006946 == ("...1..1.\n"
"3..4..14\n"
"2.......\n"
".1.1.4..\n"
"5......4\n"
"5......5\n"
".42..22.\n"
"33...13.\n")
del board843006946
board843006946 = None
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_free_fields(board, 2) == 40 


board807433479 = gamma_board(board)
assert board807433479 is not None
assert board807433479 == ("...1..1.\n"
"3..4..14\n"
"2......2\n"
".1.1.4..\n"
"5......4\n"
"5....1.5\n"
".42..22.\n"
"33...13.\n")
del board807433479
board807433479 = None
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 4, 5, 7) == 1 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 7, 6) == 0 
assert gamma_free_fields(board, 3) == 36 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 3, 2) == 0 


board933711152 = gamma_board(board)
assert board933711152 is not None
assert board933711152 == ("...1.41.\n"
"3..4..14\n"
"2.....12\n"
".1.1.4..\n"
"5....3.4\n"
"5..4.1.5\n"
".42.322.\n"
"33...13.\n")
del board933711152
board933711152 = None
assert gamma_move(board, 1, 7, 4) == 1 
assert gamma_move(board, 2, 2, 6) == 1 
assert gamma_free_fields(board, 2) == 33 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 2, 5) == 1 
assert gamma_move(board, 4, 7, 6) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 2, 4, 7) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_free_fields(board, 4) == 28 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_free_fields(board, 4) == 26 
assert gamma_move(board, 5, 7, 1) == 1 
assert gamma_move(board, 5, 7, 6) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_golden_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 7, 7) == 1 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 1, 5) == 1 
assert gamma_busy_fields(board, 4) == 9 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 6, 5) == 0 
assert gamma_free_fields(board, 4) == 8 
assert gamma_move(board, 5, 6, 1) == 0 


board653371665 = gamma_board(board)
assert board653371665 is not None
assert board653371665 == ("..212412\n"
"3.24..14\n"
"24311.12\n"
".1.114.1\n"
"5..1.3.4\n"
"542421.5\n"
".4233225\n"
"33...13.\n")
del board653371665
board653371665 = None
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 4, 6, 7) == 0 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_busy_fields(board, 5) == 4 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 3, 5, 6) == 1 
assert gamma_move(board, 4, 7, 1) == 0 
assert gamma_move(board, 5, 7, 0) == 0 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 0, 7) == 1 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 5, 5, 6) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 6) == 1 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 5, 5, 2) == 0 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 5, 7) == 0 


board448267295 = gamma_board(board)
assert board448267295 is not None
assert board448267295 == ("3.212412\n"
"32241314\n"
"24311312\n"
"21.114.1\n"
"54.1.3.4\n"
"542421.5\n"
".4233225\n"
"33...133\n")
del board448267295
board448267295 = None
assert gamma_move(board, 5, 7, 0) == 0 
assert gamma_move(board, 5, 4, 2) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 4, 6) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 6, 7) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 7, 2) == 0 
assert gamma_move(board, 3, 5, 2) == 0 


board166796399 = gamma_board(board)
assert board166796399 is not None
assert board166796399 == ("3.212412\n"
"32241314\n"
"24311312\n"
"21.114.1\n"
"54.133.4\n"
"542421.5\n"
".4233225\n"
"33...133\n")
del board166796399
board166796399 = None
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_free_fields(board, 5) == 9 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_free_fields(board, 3) == 9 


gamma_delete(board)
