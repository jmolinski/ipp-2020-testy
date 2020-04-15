#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 512289275
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 14, 1, 0) == 1 );
assert( gamma_move(board, 19, 1, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 27, 4, 0) == 1 );
assert( gamma_move(board, 27, 8, 2) == 1 );
assert( gamma_move(board, 13, 8, 3) == 1 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 20, 3, 0) == 1 );
assert( gamma_move(board, 17, 5, 0) == 1 );
assert( gamma_move(board, 24, 5, 5) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 24, 3, 6) == 1 );
assert( gamma_move(board, 28, 2, 0) == 1 );
assert( gamma_move(board, 15, 2, 4) == 1 );
assert( gamma_move(board, 26, 0, 1) == 1 );
assert( gamma_move(board, 13, 6, 4) == 1 );
assert( gamma_move(board, 25, 9, 2) == 1 );
assert( gamma_move(board, 30, 8, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 18, 2, 3) == 1 );
assert( gamma_move(board, 15, 7, 7) == 1 );
assert( gamma_move(board, 25, 9, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 13, 0, 6) == 1 );
assert( gamma_move(board, 24, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 27, 4, 6) == 1 );
assert( gamma_move(board, 12, 9, 0) == 1 );
assert( gamma_move(board, 17, 4, 7) == 1 );
assert( gamma_move(board, 12, 5, 8) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 17, 0, 0) == 1 );
assert( gamma_move(board, 25, 3, 9) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 25, 4, 4) == 1 );
assert( gamma_move(board, 17, 1, 8) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_move(board, 23, 2, 7) == 1 );
assert( gamma_move(board, 28, 0, 4) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 16, 0, 9) == 1 );
assert( gamma_move(board, 25, 8, 0) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 26, 8, 6) == 1 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_move(board, 27, 2, 2) == 1 );
assert( gamma_move(board, 13, 1, 2) == 1 );
assert( gamma_move(board, 16, 1, 6) == 1 );
assert( gamma_move(board, 17, 5, 3) == 1 );
assert( gamma_move(board, 12, 3, 1) == 1 );
assert( gamma_move(board, 13, 5, 1) == 1 );
assert( gamma_move(board, 16, 6, 6) == 1 );
assert( gamma_move(board, 26, 0, 7) == 1 );
assert( gamma_move(board, 11, 7, 9) == 1 );
assert( gamma_move(board, 19, 0, 3) == 1 );
assert( gamma_move(board, 20, 0, 2) == 1 );
assert( gamma_move(board, 15, 5, 9) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 24, 6, 9) == 1 );
assert( gamma_move(board, 30, 0, 8) == 1 );
assert( gamma_move(board, 18, 8, 9) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 17, 9, 9) == 1 );
assert( gamma_move(board, 22, 4, 8) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 24, 4, 1) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 16, 3, 7) == 1 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_move(board, 18, 7, 0) == 1 );
assert( gamma_move(board, 29, 4, 3) == 1 );
assert( gamma_move(board, 26, 7, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 15, 1, 9) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 27, 3, 4) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 15, 9, 1) == 1 );
assert( gamma_move(board, 14, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 13, 9, 8) == 1 );
assert( gamma_move(board, 13, 1, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 21, 7, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );


gamma_delete(board);

    return 0;
}
