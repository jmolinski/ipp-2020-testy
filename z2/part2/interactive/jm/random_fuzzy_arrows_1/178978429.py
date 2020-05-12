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
uuid: 178978429
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 7, 5, 8)
assert board is not None


assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 1 


board937393396 = gamma_board(board)
assert board937393396 is not None
assert board937393396 == ("...1....\n"
"........\n"
"..3.....\n"
"....3...\n"
"........\n"
".4......\n"
"........\n")
del board937393396
board937393396 = None
assert gamma_move(board, 5, 5, 6) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 6, 6) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 4, 7, 3) == 1 
assert gamma_move(board, 5, 6, 0) == 1 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 4, 3, 6) == 0 
assert gamma_move(board, 4, 7, 6) == 1 
assert gamma_move(board, 5, 5, 0) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 3, 5) == 1 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 0, 5) == 1 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 5, 0, 1) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_free_fields(board, 1) == 35 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 2, 6) == 0 


board659860274 = gamma_board(board)
assert board659860274 is not None
assert board659860274 == ("..41.514\n"
"5.122..2\n"
"..3.....\n"
"3...32.4\n"
"..2.....\n"
"54..22..\n"
"..1..55.\n")
del board659860274
board659860274 = None
assert gamma_move(board, 5, 1, 5) == 1 
assert gamma_free_fields(board, 5) == 32 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_free_fields(board, 2) == 30 
assert gamma_move(board, 3, 1, 4) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 1, 7) == 0 
assert gamma_move(board, 1, 1, 6) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 4, 7, 0) == 1 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_free_fields(board, 5) == 25 
assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 4, 6, 4) == 1 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 5, 6, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 7, 0) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 1, 4) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 5, 6) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 6 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 4, 7) == 0 
assert gamma_move(board, 1, 4, 3) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 


board300780320 = gamma_board(board)
assert board300780320 is not None
assert board300780320 == ("4141.514\n"
"551221.2\n"
".33.2.4.\n"
"3.1532.4\n"
"4.2.325.\n"
"543.22..\n"
"1.1..554\n")
del board300780320
board300780320 = None
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_free_fields(board, 1) == 6 
assert gamma_move(board, 2, 4, 7) == 0 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_move(board, 4, 7, 4) == 1 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 5, 0, 6) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_busy_fields(board, 4) == 9 
assert gamma_move(board, 5, 6, 4) == 0 
assert gamma_move(board, 5, 2, 2) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_golden_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 2, 4, 6) == 1 
assert gamma_golden_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_golden_move(board, 5, 2, 2) == 1 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_free_fields(board, 2) == 10 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_golden_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 6, 6) == 0 
assert gamma_busy_fields(board, 1) == 8 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 5, 2, 6) == 0 


board743140113 = gamma_board(board)
assert board743140113 is not None
assert board743140113 == ("41412514\n"
"551221.2\n"
"533.2244\n"
"311532.4\n"
"445.325.\n"
"543.222.\n"
"1.33.554\n")
del board743140113
board743140113 = None
assert gamma_move(board, 1, 6, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_free_fields(board, 2) == 8 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_golden_possible(board, 3) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 1, 7) == 0 
assert gamma_move(board, 5, 0, 5) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_golden_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 5, 0, 4) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 5, 2, 7) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_move(board, 2, 7, 0) == 0 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 4, 3, 2) == 1 


board561468505 = gamma_board(board)
assert board561468505 is not None
assert board561468505 == ("41412514\n"
"551221.2\n"
"533.2244\n"
"31153214\n"
"4454325.\n"
"543.2223\n"
"1.33.554\n")
del board561468505
board561468505 = None
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_busy_fields(board, 1) == 9 
assert gamma_move(board, 2, 2, 7) == 0 


gamma_delete(board)
