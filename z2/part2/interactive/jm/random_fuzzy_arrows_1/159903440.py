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
uuid: 159903440
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 8, 3, 20)
assert board is not None


assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 0, 5) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_golden_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 1, 5, 7) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 5, 3) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_golden_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 2, 6) == 1 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 3, 4, 7) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_move(board, 1, 4, 0) == 0 


board413218603 = gamma_board(board)
assert board413218603 is not None
assert board413218603 == ("..2.31\n"
"..1.2.\n"
"221.1.\n"
"32.13.\n"
"212.11\n"
"..221.\n"
".3.31.\n"
".23...\n")
del board413218603
board413218603 = None
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_free_fields(board, 2) == 19 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_busy_fields(board, 2) == 13 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_golden_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 4, 4) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 7, 3) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_golden_possible(board, 3) == 0 


board769597810 = gamma_board(board)
assert board769597810 is not None
assert board769597810 == ("2.2.31\n"
"3.112.\n"
"221113\n"
"32.132\n"
"212211\n"
"332211\n"
".31313\n"
"123132\n")
del board769597810
board769597810 = None
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 3, 7, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 4, 7) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 7, 3) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 5, 7) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 1, 7, 3) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_golden_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 1, 7) == 1 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 6) == 0 
assert gamma_move(board, 3, 6, 1) == 0 


gamma_delete(board)
