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
uuid: 703831602
"""
"""
random actions, total chaos
"""
board = gamma_new(8, 6, 5, 12)
assert board is not None


assert gamma_move(board, 1, 5, 5) == 1 
assert gamma_move(board, 2, 4, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 4, 3, 1) == 1 
assert gamma_move(board, 5, 2, 5) == 1 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 


board538888224 = gamma_board(board)
assert board538888224 is not None
assert board538888224 == ("..5..1..\n"
"..2.....\n"
"..3.....\n"
"........\n"
"...42...\n"
"........\n")
del board538888224
board538888224 = None
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 6, 0) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 3, 0, 5) == 1 
assert gamma_move(board, 4, 0, 2) == 1 
assert gamma_move(board, 4, 7, 1) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_golden_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 5, 1) == 1 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 1, 4, 5) == 1 
assert gamma_move(board, 2, 5, 7) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 7, 3) == 1 


board477159317 = gamma_board(board)
assert board477159317 is not None
assert board477159317 == ("3.5.11..\n"
"2.2.....\n"
".35.1..3\n"
"4.41....\n"
"..2422.4\n"
".3.1..2.\n")
del board477159317
board477159317 = None
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 6, 3) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 5, 5) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 4, 0, 2) == 0 
assert gamma_move(board, 5, 5, 4) == 1 
assert gamma_move(board, 5, 6, 1) == 1 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_busy_fields(board, 2) == 6 


board431805382 = gamma_board(board)
assert board431805382 is not None
assert board431805382 == ("3.5.11..\n"
"2.2..5..\n"
".35.1443\n"
"4.41....\n"
".5242254\n"
".3.1..2.\n")
del board431805382
board431805382 = None
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_move(board, 5, 0, 3) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 5, 1) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_busy_fields(board, 5) == 6 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_golden_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 5, 7) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 4, 0) == 1 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_free_fields(board, 1) == 17 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 7) == 0 


board515789698 = gamma_board(board)
assert board515789698 is not None
assert board515789698 == ("3.5.11..\n"
"2.21.5..\n"
"535.1443\n"
"4.41....\n"
".5242254\n"
"33.1532.\n")
del board515789698
board515789698 = None
assert gamma_move(board, 5, 2, 1) == 0 
assert gamma_move(board, 5, 1, 4) == 1 


board218689533 = gamma_board(board)
assert board218689533 is not None
assert board218689533 == ("3.5.11..\n"
"2521.5..\n"
"535.1443\n"
"4.41....\n"
".5242254\n"
"33.1532.\n")
del board218689533
board218689533 = None
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_free_fields(board, 3) == 16 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 6, 3) == 0 
assert gamma_move(board, 5, 3, 3) == 1 
assert gamma_move(board, 1, 6, 5) == 1 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 5, 3) == 0 
assert gamma_move(board, 5, 1, 1) == 0 
assert gamma_free_fields(board, 5) == 14 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 4, 4) == 1 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 4, 2, 2) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 2, 7) == 0 
assert gamma_golden_possible(board, 5) == 0 
assert gamma_move(board, 1, 7, 4) == 1 
assert gamma_move(board, 2, 2, 4) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_golden_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 1, 2) == 1 
assert gamma_move(board, 1, 5, 7) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_busy_fields(board, 2) == 7 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_free_fields(board, 4) == 11 


board703525518 = gamma_board(board)
assert board703525518 is not None
assert board703525518 == ("3.5.111.\n"
"252125.1\n"
"53551443\n"
"4431....\n"
".5242254\n"
"33.1532.\n")
del board703525518
board703525518 = None
assert gamma_move(board, 5, 2, 7) == 0 
assert gamma_move(board, 5, 4, 4) == 0 
assert gamma_move(board, 1, 2, 5) == 0 
assert gamma_move(board, 2, 5, 1) == 0 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 4, 4, 1) == 0 


board573188371 = gamma_board(board)
assert board573188371 is not None
assert board573188371 == ("3.5.111.\n"
"252125.1\n"
"53551443\n"
"4431....\n"
".5242254\n"
"33.1532.\n")
del board573188371
board573188371 = None
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 7, 1) == 0 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_free_fields(board, 1) == 11 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 2, 1, 5) == 1 
assert gamma_move(board, 3, 2, 5) == 0 
assert gamma_move(board, 4, 1, 5) == 0 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 7) == 0 
assert gamma_move(board, 3, 0, 7) == 0 
assert gamma_move(board, 3, 5, 4) == 0 


board213316306 = gamma_board(board)
assert board213316306 is not None
assert board213316306 == ("3255111.\n"
"252125.1\n"
"53551443\n"
"4431....\n"
".5242254\n"
"33.1532.\n")
del board213316306
board213316306 = None
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_busy_fields(board, 4) == 6 
assert gamma_move(board, 5, 1, 0) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 7, 4) == 0 


gamma_delete(board)
