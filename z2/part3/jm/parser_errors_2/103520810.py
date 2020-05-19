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
uuid: 103520810
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 4, 3, 1)
assert board is not None


assert gamma_free_fields(board, 1) == 12
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_move(board, 3, 1, 2) == 1
assert gamma_move(board, 1, 2, 0) == 1
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 2, 0, 2) == 1
assert gamma_move(board, 2, 1, 1) == 0


board256713116 = gamma_board(board)
assert board256713116 is not None
assert board256713116 == ("...\n" "23.\n" "22.\n" "..1\n")
del board256713116
board256713116 = None
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_free_fields(board, 3) == 2
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_move(board, 2, 2, 1) == 1
assert gamma_move(board, 3, 3, 2) == 0
assert gamma_free_fields(board, 3) == 2
assert gamma_move(board, 1, 1, 3) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_free_fields(board, 1) == 1
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_golden_move(board, 2, 0, 2) == 0


board165825195 = gamma_board(board)
assert board165825195 is not None
assert board165825195 == ("...\n" "23.\n" "222\n" "..1\n")
del board165825195
board165825195 = None
assert gamma_move(board, 3, 2, 1) == 0


board942128858 = gamma_board(board)
assert board942128858 is not None
assert board942128858 == ("...\n" "23.\n" "222\n" "..1\n")
del board942128858
board942128858 = None
assert gamma_move(board, 1, 0, 1) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_golden_move(board, 1, 2, 1) == 1
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 3, 2, 2) == 1
assert gamma_busy_fields(board, 3) == 2
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_move(board, 1, 1, 1) == 0


board278558584 = gamma_board(board)
assert board278558584 is not None
assert board278558584 == ("...\n" "233\n" "221\n" "..1\n")
del board278558584
board278558584 = None
assert gamma_move(board, 2, 2, 1) == 0
assert gamma_move(board, 1, 2, 2) == 0
assert gamma_free_fields(board, 1) == 1
assert gamma_move(board, 2, 3, 0) == 0
assert gamma_golden_move(board, 2, 2, 2) == 0


gamma_delete(board)
