#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 382241330
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 18, 8, 2) == 1 );
assert( gamma_move(board, 20, 7, 1) == 1 );
assert( gamma_move(board, 12, 4, 6) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 12, 0, 5) == 1 );
assert( gamma_move(board, 16, 8, 1) == 1 );
assert( gamma_move(board, 20, 6, 8) == 1 );
assert( gamma_move(board, 13, 3, 0) == 1 );
assert( gamma_move(board, 26, 9, 9) == 1 );
assert( gamma_move(board, 18, 4, 5) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 23, 0, 6) == 1 );
assert( gamma_move(board, 14, 0, 8) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 27, 6, 4) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 21, 5, 6) == 1 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_move(board, 27, 1, 9) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 25, 7, 3) == 1 );
assert( gamma_move(board, 23, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 10, 9, 2) == 1 );
assert( gamma_move(board, 18, 1, 2) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 28, 4, 2) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 29, 3, 9) == 1 );
assert( gamma_move(board, 26, 0, 1) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 16, 4, 9) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 26, 2, 5) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 28, 4, 7) == 1 );
assert( gamma_move(board, 30, 4, 0) == 1 );
assert( gamma_move(board, 17, 5, 1) == 1 );
assert( gamma_move(board, 30, 8, 7) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 29, 3, 8) == 1 );
assert( gamma_move(board, 15, 3, 5) == 1 );
assert( gamma_move(board, 24, 5, 7) == 1 );
assert( gamma_move(board, 21, 9, 0) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 21, 3, 2) == 1 );
assert( gamma_move(board, 17, 5, 8) == 1 );
assert( gamma_move(board, 23, 6, 9) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 22, 8, 3) == 1 );
assert( gamma_move(board, 24, 5, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 13, 7, 8) == 1 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_move(board, 14, 9, 4) == 1 );
assert( gamma_move(board, 30, 6, 2) == 1 );
assert( gamma_move(board, 12, 1, 0) == 1 );
assert( gamma_move(board, 24, 0, 4) == 1 );
assert( gamma_move(board, 15, 9, 7) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 27, 4, 1) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 15, 9, 8) == 1 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 30, 1, 5) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 16, 6, 0) == 1 );
assert( gamma_move(board, 22, 3, 6) == 1 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 22, 6, 3) == 1 );
assert( gamma_move(board, 22, 1, 3) == 1 );
assert( gamma_move(board, 24, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 30, 2, 0) == 1 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 21, 2, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 26, 0, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 21, 4, 4) == 1 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_move(board, 26, 1, 6) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 29, 6, 7) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );


gamma_delete(board);

    return 0;
}
