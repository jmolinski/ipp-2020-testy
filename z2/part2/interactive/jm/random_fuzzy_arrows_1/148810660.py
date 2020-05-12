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
uuid: 148810660
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 8, 5, 5)
assert board is not None


assert gamma_move(board, 2, 1, 4) == 1 
assert gamma_move(board, 2, 6, 5) == 1 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_free_fields(board, 4) == 51 
assert gamma_move(board, 5, 4, 4) == 1 
assert gamma_move(board, 5, 3, 1) == 1 
assert gamma_move(board, 1, 3, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 3, 5, 7) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 5, 1) == 1 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 5, 2, 3) == 1 
assert gamma_move(board, 5, 3, 0) == 1 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 7, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_free_fields(board, 2) == 42 
assert gamma_move(board, 3, 2, 1) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_move(board, 4, 5, 5) == 1 
assert gamma_move(board, 4, 6, 6) == 1 
assert gamma_move(board, 1, 1, 6) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_free_fields(board, 2) == 37 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 0, 1) == 0 


board331349876 = gamma_board(board)
assert board331349876 is not None
assert board331349876 == (".....3.\n"
".141..4\n"
".....42\n"
".2..51.\n"
"..5....\n"
".3.....\n"
"3.35.4.\n"
"4335...\n")
del board331349876
board331349876 = None
assert gamma_move(board, 5, 4, 1) == 1 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_golden_move(board, 5, 0, 2) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_free_fields(board, 3) == 34 
assert gamma_move(board, 5, 6, 0) == 1 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 0, 5) == 1 
assert gamma_golden_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 3, 7) == 1 
assert gamma_move(board, 3, 1, 5) == 1 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_busy_fields(board, 3) == 7 
assert gamma_free_fields(board, 3) == 8 
assert gamma_move(board, 4, 2, 5) == 1 
assert gamma_move(board, 4, 4, 2) == 0 
assert gamma_golden_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 6, 5) == 0 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_move(board, 5, 6, 6) == 0 
assert gamma_free_fields(board, 5) == 29 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 4, 6, 1) == 1 
assert gamma_busy_fields(board, 4) == 7 
assert gamma_free_fields(board, 4) == 9 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 1, 4, 7) == 1 
assert gamma_move(board, 2, 1, 7) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_move(board, 4, 6, 6) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 5, 2) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 0, 5) == 0 
assert gamma_move(board, 2, 2, 4) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_golden_move(board, 2, 1, 6) == 1 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 7, 2) == 0 
assert gamma_move(board, 5, 5, 4) == 0 
assert gamma_move(board, 5, 2, 4) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_free_fields(board, 1) == 22 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 0, 4) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 2, 0, 7) == 0 
assert gamma_free_fields(board, 2) == 22 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 3, 5) == 0 
assert gamma_move(board, 4, 5, 0) == 1 
assert gamma_move(board, 4, 0, 3) == 0 
assert gamma_move(board, 5, 2, 6) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 2, 4, 5) == 1 
assert gamma_golden_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 


board898449385 = gamma_board(board)
assert board898449385 is not None
assert board898449385 == ("22.213.\n"
".2411.4\n"
"134.242\n"
".22.51.\n"
"..5....\n"
".3...5.\n"
"3.35544\n"
"4335145\n")
del board898449385
board898449385 = None
assert gamma_move(board, 5, 4, 5) == 0 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_free_fields(board, 1) == 9 


board714401105 = gamma_board(board)
assert board714401105 is not None
assert board714401105 == ("22.213.\n"
".2411.4\n"
"134.242\n"
".22.51.\n"
"..51...\n"
".3...5.\n"
"3.35544\n"
"4335145\n")
del board714401105
board714401105 = None
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 4, 3, 4) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 3, 0) == 0 
assert gamma_busy_fields(board, 5) == 7 
assert gamma_move(board, 1, 6, 0) == 0 
assert gamma_move(board, 1, 6, 5) == 0 
assert gamma_move(board, 2, 6, 5) == 0 
assert gamma_busy_fields(board, 2) == 9 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 5, 4, 3) == 1 
assert gamma_move(board, 5, 5, 7) == 0 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 7, 6) == 0 
assert gamma_move(board, 1, 0, 7) == 0 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 2, 1, 5) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 3, 5, 3) == 1 
assert gamma_busy_fields(board, 3) == 9 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 4, 1, 4) == 0 
assert gamma_move(board, 5, 5, 0) == 0 
assert gamma_move(board, 5, 4, 6) == 0 
assert gamma_free_fields(board, 5) == 5 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_golden_move(board, 5, 5, 2) == 0 


board392075440 = gamma_board(board)
assert board392075440 is not None
assert board392075440 == ("222213.\n"
".2411.4\n"
"134.242\n"
".22.51.\n"
"..5153.\n"
".33..5.\n"
"3.35544\n"
"4335145\n")
del board392075440
board392075440 = None
assert gamma_move(board, 1, 5, 1) == 0 
assert gamma_move(board, 2, 7, 6) == 0 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 5, 3, 6) == 0 
assert gamma_golden_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 1, 5, 3) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 3, 6, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_golden_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 5, 1, 6) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 6, 4) == 1 
assert gamma_move(board, 2, 6, 0) == 0 
assert gamma_busy_fields(board, 2) == 10 
assert gamma_move(board, 3, 6, 5) == 0 
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 7, 6) == 0 
assert gamma_busy_fields(board, 5) == 8 
assert gamma_golden_possible(board, 5) == 1 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_move(board, 1, 0, 6) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_free_fields(board, 2) == 4 
assert gamma_move(board, 3, 3, 7) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 


board687132456 = gamma_board(board)
assert board687132456 is not None
assert board687132456 == ("222213.\n"
"12441.4\n"
"134.242\n"
".222511\n"
"2.51533\n"
".33..5.\n"
"3.35544\n"
"4335145\n")
del board687132456
board687132456 = None
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 2, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 


board362356017 = gamma_board(board)
assert board362356017 is not None
assert board362356017 == ("222213.\n"
"12441.4\n"
"134.242\n"
".222511\n"
"2.51533\n"
".33..5.\n"
"3.35544\n"
"4335145\n")
del board362356017
board362356017 = None


board418065600 = gamma_board(board)
assert board418065600 is not None
assert board418065600 == ("222213.\n"
"12441.4\n"
"134.242\n"
".222511\n"
"2.51533\n"
".33..5.\n"
"3.35544\n"
"4335145\n")
del board418065600
board418065600 = None
assert gamma_move(board, 3, 1, 7) == 0 
assert gamma_move(board, 3, 0, 6) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 2, 6) == 0 
assert gamma_move(board, 5, 4, 0) == 0 
assert gamma_move(board, 5, 6, 7) == 0 


board139937940 = gamma_board(board)
assert board139937940 is not None
assert board139937940 == ("222213.\n"
"12441.4\n"
"134.242\n"
".222511\n"
"2.51533\n"
".33..5.\n"
"3.35544\n"
"4335145\n")
del board139937940
board139937940 = None
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 2, 2, 5) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 5, 2, 3) == 0 
assert gamma_move(board, 5, 3, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 6) == 0 


gamma_delete(board)
