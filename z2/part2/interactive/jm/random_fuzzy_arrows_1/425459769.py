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
uuid: 425459769
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 6, 6, 3)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 3, 5, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 0, 4) == 1 
assert gamma_move(board, 6, 3, 0) == 1 
assert gamma_move(board, 6, 1, 1) == 1 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 4, 3) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 6, 4, 1) == 1 


board555609999 = gamma_board(board)
assert board555609999 is not None
assert board555609999 == (".......\n"
"5......\n"
".1.14..\n"
"4....3.\n"
".6..6..\n"
"..163..\n")
del board555609999
board555609999 = None
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 0, 6) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 5) == 1 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 1) == 1 
assert gamma_move(board, 5, 2, 1) == 1 
assert gamma_move(board, 5, 6, 5) == 1 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_golden_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 6, 3, 3) == 0 
assert gamma_move(board, 6, 4, 4) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 4, 4, 4) == 1 


board276932191 = gamma_board(board)
assert board276932191 is not None
assert board276932191 == ("4...3.5\n"
"5.224..\n"
".11142.\n"
"4....3.\n"
"465.6..\n"
"..163..\n")
del board276932191
board276932191 = None
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_golden_move(board, 5, 1, 4) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 6, 4) == 1 


board438812598 = gamma_board(board)
assert board438812598 is not None
assert board438812598 == ("4...3.5\n"
"5.224.1\n"
".11142.\n"
"4....3.\n"
"465.6..\n"
"..163..\n")
del board438812598
board438812598 = None
assert gamma_move(board, 2, 1, 6) == 0 


board363306596 = gamma_board(board)
assert board363306596 is not None
assert board363306596 == ("4...3.5\n"
"5.224.1\n"
".11142.\n"
"4....3.\n"
"465.6..\n"
"..163..\n")
del board363306596
board363306596 = None
assert gamma_move(board, 3, 1, 6) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 6, 5, 5) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 6, 4) == 0 
assert gamma_free_fields(board, 1) == 8 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 5) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 6, 0) == 0 
assert gamma_move(board, 4, 6, 2) == 0 
assert gamma_move(board, 5, 3, 5) == 0 
assert gamma_move(board, 6, 0, 6) == 0 
assert gamma_move(board, 6, 6, 2) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 4, 5, 5) == 0 
assert gamma_move(board, 5, 1, 5) == 0 
assert gamma_move(board, 6, 4, 1) == 0 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 5, 1) == 0 


board730234864 = gamma_board(board)
assert board730234864 is not None
assert board730234864 == ("4...3.5\n"
"5.224.1\n"
".11142.\n"
"42...3.\n"
"465.6..\n"
"..163..\n")
del board730234864
board730234864 = None
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_busy_fields(board, 4) == 5 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_golden_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 3, 1) == 1 
assert gamma_move(board, 6, 5, 2) == 0 
assert gamma_free_fields(board, 6) == 18 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 3, 3) == 0 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_move(board, 6, 2, 2) == 1 
assert gamma_free_fields(board, 6) == 3 
assert gamma_move(board, 1, 4, 5) == 0 
assert gamma_free_fields(board, 1) == 6 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_move(board, 3, 6, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 4, 2) == 1 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 3, 4) == 0 
assert gamma_move(board, 6, 1, 5) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 4, 5) == 0 
assert gamma_move(board, 4, 4, 5) == 0 
assert gamma_move(board, 5, 1, 5) == 0 


board339548982 = gamma_board(board)
assert board339548982 is not None
assert board339548982 == ("4...335\n"
"5.224.1\n"
".11142.\n"
"4261433\n"
"46566..\n"
"..163..\n")
del board339548982
board339548982 = None
assert gamma_move(board, 6, 4, 5) == 0 
assert gamma_move(board, 6, 0, 0) == 0 
assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 3, 5) == 0 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_busy_fields(board, 5) == 3 
assert gamma_golden_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 5, 1) == 1 
assert gamma_golden_move(board, 6, 2, 1) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 5, 3) == 0 


board263769984 = gamma_board(board)
assert board263769984 is not None
assert board263769984 == ("4...335\n"
"5222441\n"
".11142.\n"
"4261433\n"
"466666.\n"
"..163..\n")
del board263769984
board263769984 = None
assert gamma_move(board, 6, 3, 6) == 0 
assert gamma_move(board, 6, 5, 5) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 6, 2) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_golden_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 4, 0, 5) == 0 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_move(board, 5, 4, 1) == 0 
assert gamma_move(board, 6, 3, 6) == 0 
assert gamma_free_fields(board, 6) == 10 


gamma_delete(board)
