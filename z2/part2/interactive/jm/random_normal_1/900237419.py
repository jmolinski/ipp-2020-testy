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
uuid: 900237419
"""
"""
random actions, total chaos
"""
board = gamma_new(7, 8, 4, 18)
assert board is not None


assert gamma_move(board, 1, 3, 7) == 1 
assert gamma_move(board, 2, 5, 2) == 1 
assert gamma_move(board, 2, 4, 2) == 1 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_move(board, 4, 2, 2) == 1 
assert gamma_move(board, 4, 3, 7) == 0 
assert gamma_move(board, 1, 5, 4) == 1 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 4, 2, 6) == 1 
assert gamma_move(board, 1, 3, 0) == 1 


board546177003 = gamma_board(board)
assert board546177003 is not None
assert board546177003 == ("...1...\n"
"..4....\n"
".......\n"
"...2.1.\n"
"..3....\n"
"..4.22.\n"
"2......\n"
"..31...\n")
del board546177003
board546177003 = None
assert gamma_move(board, 2, 6, 4) == 1 
assert gamma_golden_possible(board, 2) == 1 


board202863419 = gamma_board(board)
assert board202863419 is not None
assert board202863419 == ("...1...\n"
"..4....\n"
".......\n"
"...2.12\n"
"..3....\n"
"..4.22.\n"
"2......\n"
"..31...\n")
del board202863419
board202863419 = None
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 1, 0, 4) == 1 
assert gamma_golden_possible(board, 1) == 1 


board206092972 = gamma_board(board)
assert board206092972 is not None
assert board206092972 == ("...1...\n"
"..4....\n"
".......\n"
"14.2.12\n"
"..3....\n"
"..4.22.\n"
"2..3...\n"
"..31...\n")
del board206092972
board206092972 = None
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 3, 4, 1) == 1 
assert gamma_free_fields(board, 3) == 39 
assert gamma_move(board, 4, 0, 0) == 1 
assert gamma_move(board, 4, 6, 7) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 2, 5, 3) == 1 
assert gamma_move(board, 3, 6, 4) == 0 
assert gamma_free_fields(board, 3) == 35 
assert gamma_golden_possible(board, 3) == 1 


board774252165 = gamma_board(board)
assert board774252165 is not None
assert board774252165 == ("...1..4\n"
"..4....\n"
".......\n"
"14.2112\n"
"..3..2.\n"
"..2.22.\n"
"2.233..\n"
"4.31...\n")
del board774252165
board774252165 = None
assert gamma_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 5, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 3, 6, 1) == 1 
assert gamma_move(board, 4, 6, 4) == 0 
assert gamma_free_fields(board, 4) == 33 
assert gamma_move(board, 1, 5, 1) == 1 
assert gamma_move(board, 1, 6, 7) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 6, 6) == 1 
assert gamma_move(board, 3, 3, 3) == 1 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 2, 7) == 1 
assert gamma_free_fields(board, 2) == 29 
assert gamma_move(board, 3, 4, 3) == 1 
assert gamma_busy_fields(board, 3) == 8 
assert gamma_move(board, 4, 2, 3) == 0 
assert gamma_move(board, 4, 2, 3) == 0 


board197879699 = gamma_board(board)
assert board197879699 is not None
assert board197879699 == ("..21..4\n"
"..4...3\n"
".......\n"
"14.2112\n"
"..3332.\n"
"..2.22.\n"
"2.23313\n"
"4.31.1.\n")
del board197879699
board197879699 = None
assert gamma_move(board, 1, 4, 6) == 1 
assert gamma_move(board, 1, 2, 6) == 0 
assert gamma_move(board, 2, 0, 7) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 6, 0) == 1 
assert gamma_move(board, 1, 6, 7) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 6) == 0 
assert gamma_move(board, 3, 5, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 4, 5, 6) == 1 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_golden_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 7, 5) == 0 
assert gamma_move(board, 3, 6, 6) == 0 
assert gamma_move(board, 3, 5, 5) == 1 
assert gamma_free_fields(board, 3) == 21 
assert gamma_move(board, 4, 5, 2) == 0 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_busy_fields(board, 3) == 10 
assert gamma_move(board, 4, 2, 3) == 0 


board574855692 = gamma_board(board)
assert board574855692 is not None
assert board574855692 == ("2.21..4\n"
"..4.143\n"
".....3.\n"
"14.2112\n"
"..3332.\n"
"..2.22.\n"
"2323313\n"
"1131.14\n")
del board574855692
board574855692 = None
assert gamma_move(board, 1, 5, 5) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 3, 5, 6) == 0 
assert gamma_move(board, 1, 4, 0) == 1 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 7, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 1) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 1 
assert gamma_move(board, 1, 7, 1) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_busy_fields(board, 1) == 11 
assert gamma_move(board, 2, 5, 0) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 7) == 0 
assert gamma_move(board, 4, 3, 6) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 5, 3) == 0 
assert gamma_move(board, 3, 7, 4) == 0 
assert gamma_free_fields(board, 3) == 16 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 6, 1) == 0 
assert gamma_move(board, 1, 5, 7) == 1 
assert gamma_move(board, 2, 6, 1) == 0 
assert gamma_move(board, 3, 6, 1) == 0 
assert gamma_move(board, 3, 1, 6) == 1 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_free_fields(board, 3) == 14 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 4, 3, 5) == 1 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_move(board, 1, 3, 4) == 0 
assert gamma_golden_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 6, 2) == 1 
assert gamma_move(board, 2, 5, 5) == 0 
assert gamma_move(board, 3, 3, 6) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 0, 6) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 6, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_free_fields(board, 3) == 11 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 0 
assert gamma_move(board, 1, 5, 0) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 6) == 0 
assert gamma_busy_fields(board, 3) == 12 
assert gamma_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 4, 0, 5) == 1 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 5, 6) == 0 
assert gamma_move(board, 3, 5, 1) == 0 
assert gamma_busy_fields(board, 4) == 10 
assert gamma_move(board, 1, 4, 6) == 0 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 4, 3) == 0 
assert gamma_move(board, 4, 7, 4) == 0 
assert gamma_move(board, 1, 7, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 12 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 3, 6) == 0 
assert gamma_golden_possible(board, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 5, 1) == 0 
assert gamma_move(board, 4, 5, 0) == 0 
assert gamma_move(board, 1, 3, 6) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 5, 6) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 3, 5, 2) == 0 
assert gamma_free_fields(board, 3) == 10 
assert gamma_move(board, 4, 5, 3) == 0 
assert gamma_move(board, 1, 5, 2) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_free_fields(board, 1) == 10 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 5, 4) == 0 
assert gamma_move(board, 3, 6, 0) == 0 
assert gamma_move(board, 4, 6, 1) == 0 
assert gamma_free_fields(board, 4) == 10 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 2, 5, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 5, 0) == 0 
assert gamma_move(board, 4, 4, 2) == 0 


gamma_delete(board)
