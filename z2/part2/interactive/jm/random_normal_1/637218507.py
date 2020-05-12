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
uuid: 637218507
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 7, 5, 10)
assert board is not None


assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 1, 1, 0) == 1 


board508740979 = gamma_board(board)
assert board508740979 is not None
assert board508740979 == ("......\n"
"..1...\n"
"......\n"
"......\n"
"......\n"
"......\n"
".1....\n")
del board508740979
board508740979 = None
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_busy_fields(board, 5) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_free_fields(board, 2) == 35 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 4, 3) == 1 


board109190569 = gamma_board(board)
assert board109190569 is not None
assert board109190569 == ("......\n"
".31...\n"
"......\n"
"..1.42\n"
"...43.\n"
".3..2.\n"
".1....\n")
del board109190569
board109190569 = None
assert gamma_move(board, 5, 0, 2) == 1 
assert gamma_busy_fields(board, 5) == 1 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 6) == 1 
assert gamma_busy_fields(board, 3) == 4 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 4, 4, 0) == 0 


board837255014 = gamma_board(board)
assert board837255014 is not None
assert board837255014 == ("3.....\n"
"531...\n"
"..42..\n"
"..1.42\n"
"5.243.\n"
"13..2.\n"
".1..5.\n")
del board837255014
board837255014 = None
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_move(board, 5, 5, 5) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 6, 3) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_golden_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_free_fields(board, 3) == 18 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 1, 6) == 1 
assert gamma_free_fields(board, 4) == 14 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_free_fields(board, 5) == 14 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_free_fields(board, 2) == 14 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 1, 0) == 0 


board815442504 = gamma_board(board)
assert board815442504 is not None
assert board815442504 == ("34....\n"
"531..1\n"
"1.4251\n"
"..1442\n"
"5.243.\n"
"135322\n"
"21..5.\n")
del board815442504
board815442504 = None
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 5, 4, 6) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 3, 5) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_golden_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 4, 1) == 0 
assert gamma_golden_move(board, 4, 1, 0) == 1 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 5, 5, 6) == 1 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 6, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 0 


board721229061 = gamma_board(board)
assert board721229061 is not None
assert board721229061 == ("344.55\n"
"5311.1\n"
"124231\n"
"5.1442\n"
"522423\n"
"135322\n"
"24.15.\n")
del board721229061
board721229061 = None
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 5, 4) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 3, 6) == 1 
assert gamma_move(board, 5, 5, 0) == 1 
assert gamma_busy_fields(board, 5) == 9 
assert gamma_free_fields(board, 5) == 3 
assert gamma_golden_move(board, 5, 6, 0) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_golden_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_golden_move(board, 5, 1, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_free_fields(board, 2) == 3 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_golden_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 5, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 0, 2) == 0 


gamma_delete(board)
