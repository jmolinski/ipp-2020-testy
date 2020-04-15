#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 337408545
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 22, 7, 0) == 1 );
assert( gamma_move(board, 28, 4, 1) == 1 );
assert( gamma_move(board, 27, 1, 6) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 19, 1, 5) == 1 );
assert( gamma_move(board, 17, 1, 4) == 1 );
assert( gamma_move(board, 21, 3, 6) == 1 );
assert( gamma_move(board, 25, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 30, 5, 3) == 1 );
assert( gamma_move(board, 19, 9, 4) == 1 );
assert( gamma_move(board, 28, 9, 5) == 1 );
assert( gamma_move(board, 11, 5, 4) == 1 );
assert( gamma_move(board, 30, 0, 3) == 1 );
assert( gamma_move(board, 15, 2, 7) == 1 );
assert( gamma_move(board, 13, 0, 7) == 1 );
assert( gamma_move(board, 11, 8, 1) == 1 );
assert( gamma_move(board, 28, 0, 8) == 1 );
assert( gamma_move(board, 20, 4, 5) == 1 );
assert( gamma_move(board, 25, 4, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 19, 5, 9) == 1 );
assert( gamma_move(board, 26, 5, 5) == 1 );
assert( gamma_move(board, 30, 2, 2) == 1 );
assert( gamma_move(board, 21, 5, 0) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 27, 6, 9) == 1 );
assert( gamma_move(board, 20, 7, 2) == 1 );
assert( gamma_move(board, 18, 3, 2) == 1 );
assert( gamma_move(board, 24, 3, 3) == 1 );
assert( gamma_move(board, 13, 1, 8) == 1 );
assert( gamma_move(board, 23, 7, 6) == 1 );
assert( gamma_move(board, 23, 7, 3) == 1 );
assert( gamma_move(board, 28, 0, 4) == 1 );
assert( gamma_move(board, 21, 8, 9) == 1 );
assert( gamma_move(board, 16, 6, 6) == 1 );
assert( gamma_move(board, 23, 8, 7) == 1 );
assert( gamma_move(board, 17, 0, 0) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 22, 0, 1) == 1 );
assert( gamma_move(board, 24, 6, 2) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 26, 9, 1) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 26, 0, 2) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 25, 6, 1) == 1 );
assert( gamma_move(board, 22, 5, 8) == 1 );
assert( gamma_move(board, 21, 8, 2) == 1 );
assert( gamma_move(board, 12, 2, 0) == 1 );
assert( gamma_move(board, 11, 2, 4) == 1 );
assert( gamma_move(board, 27, 4, 8) == 1 );
assert( gamma_move(board, 27, 0, 9) == 1 );
assert( gamma_move(board, 19, 6, 8) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 16, 3, 9) == 1 );
assert( gamma_move(board, 23, 0, 6) == 1 );
assert( gamma_move(board, 19, 9, 7) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 17, 9, 8) == 1 );
assert( gamma_move(board, 13, 1, 2) == 1 );
assert( gamma_move(board, 25, 4, 9) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 19, 8, 5) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 19, 5, 1) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 23, 7, 8) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 22, 3, 8) == 1 );
assert( gamma_move(board, 19, 8, 3) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 25, 4, 6) == 1 );
assert( gamma_move(board, 12, 3, 7) == 1 );
assert( gamma_move(board, 28, 9, 0) == 1 );
assert( gamma_move(board, 19, 2, 3) == 1 );
assert( gamma_move(board, 27, 6, 4) == 1 );
assert( gamma_move(board, 13, 4, 3) == 1 );
assert( gamma_move(board, 8, 9, 6) == 1 );
assert( gamma_move(board, 28, 9, 3) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 23, 5, 2) == 1 );
assert( gamma_move(board, 20, 3, 0) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 15, 6, 3) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 25, 9, 2) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 14, 1, 9) == 1 );
assert( gamma_move(board, 28, 8, 6) == 1 );
assert( gamma_move(board, 23, 6, 0) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 15, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 15, 1, 0) == 1 );


gamma_delete(board);

    return 0;
}
