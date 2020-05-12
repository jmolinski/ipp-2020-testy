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
uuid: 741696380
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 3, 11)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 5) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_move(board, 1, 1, 5) == 1 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 2, 5, 5) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_busy_fields(board, 3) == 2 


board432372920 = gamma_board(board)
assert board432372920 is not None
assert board432372920 == (".11..2..\n"
"...1....\n"
"......3.\n"
"1.......\n"
"....3...\n"
"22..2...\n")
del board432372920
board432372920 = None
assert gamma_move(board, 1, 6, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 3, 5) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_move(board, 2, 5, 4) == 1 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 2, 5, 0) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 5, 2) == 1 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 1 
assert gamma_free_fields(board, 3) == 28 
assert gamma_move(board, 1, 7, 4) == 1 
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 6, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 1, 3, 7) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 3, 7, 0) == 1 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 0, 6) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 1, 5) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_busy_fields(board, 2) == 11 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_free_fields(board, 2) == 16 
assert gamma_golden_possible(board, 2) == 1 


board900606393 = gamma_board(board)
assert board900606393 is not None
assert board900606393 == (".113.2..\n"
"1..1.221\n"
"331...3.\n"
"1232312.\n"
"23.1332.\n"
"22.322.3\n")
del board900606393
board900606393 = None
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_move(board, 1, 5, 6) == 0 
assert gamma_move(board, 1, 7, 2) == 1 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 7, 5) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 2, 1, 7) == 0 


board477407951 = gamma_board(board)
assert board477407951 is not None
assert board477407951 == (".113.2.2\n"
"1..1.221\n"
"3312..3.\n"
"12323121\n"
"23.1332.\n"
"22.322.3\n")
del board477407951
board477407951 = None
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 7, 2) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 6, 2) == 0 
assert gamma_busy_fields(board, 2) == 14 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 6, 0) == 1 
assert gamma_move(board, 1, 3, 5) == 0 
assert gamma_move(board, 1, 7, 3) == 1 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 5, 0) == 0 


board587665326 = gamma_board(board)
assert board587665326 is not None
assert board587665326 == (".113.2.2\n"
"1..13221\n"
"3312..31\n"
"12223121\n"
"23.1332.\n"
"22.32233\n")
del board587665326
board587665326 = None
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 2, 1, 7) == 0 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_busy_fields(board, 2) == 16 
assert gamma_move(board, 3, 7, 5) == 0 
assert gamma_free_fields(board, 3) == 9 
assert gamma_move(board, 1, 1, 7) == 0 
assert gamma_move(board, 1, 3, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_golden_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_golden_move(board, 1, 3, 6) == 0 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


board594084359 = gamma_board(board)
assert board594084359 is not None
assert board594084359 == (".11322.2\n"
"1..13221\n"
"3312..31\n"
"12223121\n"
"23.1332.\n"
"22232233\n")
del board594084359
board594084359 = None
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 3, 7, 1) == 1 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_golden_move(board, 2, 4, 3) == 0 
assert gamma_move(board, 3, 3, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 1 
assert gamma_busy_fields(board, 1) == 13 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_busy_fields(board, 2) == 17 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_free_fields(board, 1) == 5 
assert gamma_move(board, 2, 3, 5) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_golden_move(board, 3, 4, 7) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 3, 4) == 0 


gamma_delete(board)
