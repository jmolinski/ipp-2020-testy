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
uuid: 471570183
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 6, 6, 3)
assert board is not None


assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 4, 5, 4) == 1 
assert gamma_move(board, 5, 1, 1) == 1 
assert gamma_move(board, 6, 1, 3) == 1 
assert gamma_move(board, 6, 6, 0) == 1 
assert gamma_move(board, 1, 3, 4) == 1 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 5, 3) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_move(board, 5, 2, 4) == 1 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 6, 6, 1) == 1 
assert gamma_move(board, 1, 3, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_busy_fields(board, 2) == 3 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 3, 5, 0) == 1 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 6, 1, 5) == 1 


board297139176 = gamma_board(board)
assert board297139176 is not None
assert board297139176 == (".6.....\n"
"..5114.\n"
".63..4.\n"
".22..5.\n"
"25.14.6\n"
"...3136\n")
del board297139176
board297139176 = None
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 0, 1) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 4, 3) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 1, 0, 5) == 0 
assert gamma_move(board, 2, 6, 4) == 0 


board751238578 = gamma_board(board)
assert board751238578 is not None
assert board751238578 == (".6.....\n"
"..5114.\n"
".63..4.\n"
".22..5.\n"
"25.14.6\n"
".2.3136\n")
del board751238578
board751238578 = None
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 0, 4) == 1 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 6, 0, 4) == 0 
assert gamma_move(board, 6, 2, 1) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_golden_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 2, 5) == 1 


board662956620 = gamma_board(board)
assert board662956620 is not None
assert board662956620 == (".65....\n"
"4.5114.\n"
".63..4.\n"
".22..5.\n"
"25114.6\n"
".2.3136\n")
del board662956620
board662956620 = None
assert gamma_move(board, 6, 6, 1) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 4, 0, 3) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_golden_move(board, 4, 2, 2) == 0 


board878411326 = gamma_board(board)
assert board878411326 is not None
assert board878411326 == (".65....\n"
"4.5114.\n"
"4633.4.\n"
".22..5.\n"
"25114.6\n"
".2.3136\n")
del board878411326
board878411326 = None
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_move(board, 6, 3, 2) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 5, 3, 5) == 1 
assert gamma_move(board, 6, 5, 4) == 0 
assert gamma_move(board, 6, 5, 0) == 0 
assert gamma_busy_fields(board, 6) == 4 
assert gamma_move(board, 1, 1, 5) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 2, 6) == 0 
assert gamma_move(board, 3, 6, 3) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_move(board, 6, 3, 6) == 0 
assert gamma_move(board, 6, 6, 3) == 0 
assert gamma_free_fields(board, 6) == 4 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 4, 6) == 0 
assert gamma_move(board, 3, 5, 1) == 1 
assert gamma_busy_fields(board, 3) == 5 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 0) == 0 
assert gamma_move(board, 6, 6, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 4 


board302435373 = gamma_board(board)
assert board302435373 is not None
assert board302435373 == (".655...\n"
"4.5114.\n"
"4633.4.\n"
".22..5.\n"
"2511436\n"
".2.3136\n")
del board302435373
board302435373 = None
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 6, 1) == 0 
assert gamma_move(board, 5, 3, 2) == 0 
assert gamma_move(board, 6, 4, 6) == 0 
assert gamma_move(board, 6, 1, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_busy_fields(board, 1) == 5 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 5, 5, 5) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 6, 2, 3) == 0 
assert gamma_move(board, 6, 1, 0) == 0 
assert gamma_busy_fields(board, 6) == 4 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 6, 3) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 6, 0, 2) == 0 
assert gamma_golden_possible(board, 6) == 1 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 2, 5, 4) == 0 
assert gamma_free_fields(board, 2) == 5 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 5, 3, 3) == 0 
assert gamma_busy_fields(board, 5) == 5 
assert gamma_move(board, 6, 4, 5) == 0 


gamma_delete(board)
