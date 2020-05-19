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
uuid: 468019379
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 3, 4)
assert board is not None


assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 4) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 3, 1, 3) == 0 


board371671750 = gamma_board(board)
assert board371671750 is not None
assert board371671750 == ("3.22.\n"
"1....\n"
"..1.1\n"
".3..3\n"
"223..\n")
del board371671750
board371671750 = None
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 3, 2) == 1 


board998109862 = gamma_board(board)
assert board998109862 is not None
assert board998109862 == ("3.221\n"
"1....\n"
"..121\n"
".3..3\n"
"223..\n")
del board998109862
board998109862 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 3) == 0 


board558920429 = gamma_board(board)
assert board558920429 is not None
assert board558920429 == ("3.221\n"
"1....\n"
"..121\n"
".3..3\n"
"223..\n")
del board558920429
board558920429 = None
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_free_fields(board, 1) == 9 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_golden_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 5 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 4, 4) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_golden_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_free_fields(board, 3) == 7 


board290253208 = gamma_board(board)
assert board290253208 is not None
assert board290253208 == ("3.221\n"
"11...\n"
".1121\n"
".3323\n"
"2231.\n")
del board290253208
board290253208 = None
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_golden_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 3, 2) == 0 


board462396375 = gamma_board(board)
assert board462396375 is not None
assert board462396375 == ("3.221\n"
"11.31\n"
".1121\n"
".3323\n"
"22311\n")
del board462396375
board462396375 = None
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 3, 3) == 0 


gamma_delete(board)
