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
uuid: 549257262
"""
"""
random actions, total chaos
"""
board = gamma_new(6, 5, 5, 2)
assert board is not None


assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_free_fields(board, 1) == 29 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 2, 4, 5) == 0 
assert gamma_free_fields(board, 2) == 25 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 5, 3, 3) == 0 


board968604310 = gamma_board(board)
assert board968604310 is not None
assert board968604310 == ("5...22\n"
"1.34..\n"
"..5.1.\n"
"..5.1.\n"
"2.4...\n")
del board968604310
board968604310 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 1 


board226602315 = gamma_board(board)
assert board226602315 is not None
assert board226602315 == ("5...22\n"
"1.34..\n"
"..5.1.\n"
"..511.\n"
"2.4...\n")
del board226602315
board226602315 = None
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_free_fields(board, 4) == 3 
assert gamma_move(board, 5, 3, 2) == 1 
assert gamma_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 3, 0) == 1 
assert gamma_golden_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 0, 1) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_free_fields(board, 3) == 3 
assert gamma_golden_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_golden_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 5, 4, 1) == 0 


board567551652 = gamma_board(board)
assert board567551652 is not None
assert board567551652 == ("5..222\n"
"1.343.\n"
"..551.\n"
"..511.\n"
"2.44..\n")
del board567551652
board567551652 = None
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 


board224512229 = gamma_board(board)
assert board224512229 is not None
assert board224512229 == ("5..222\n"
"1.343.\n"
"..551.\n"
"..511.\n"
"2.44..\n")
del board224512229
board224512229 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 4, 2, 5) == 0 
assert gamma_move(board, 4, 0, 2) == 0 


board253331760 = gamma_board(board)
assert board253331760 is not None
assert board253331760 == ("5..222\n"
"1.343.\n"
"..551.\n"
"..511.\n"
"2.44..\n")
del board253331760
board253331760 = None
assert gamma_move(board, 5, 2, 1) == 0 


board143332690 = gamma_board(board)
assert board143332690 is not None
assert board143332690 == ("5..222\n"
"1.343.\n"
"..551.\n"
"..511.\n"
"2.44..\n")
del board143332690
board143332690 = None
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_busy_fields(board, 1) == 4 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 2, 5) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 3, 1) == 0 


board894841985 = gamma_board(board)
assert board894841985 is not None
assert board894841985 == ("5..222\n"
"1.3433\n"
"..5513\n"
"..511.\n"
"2444..\n")
del board894841985
board894841985 = None
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 1, 5) == 0 


gamma_delete(board)
