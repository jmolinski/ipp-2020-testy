#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 607442316
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 21, 8, 7) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 17, 9, 0) == 1 );
assert( gamma_move(board, 28, 4, 0) == 1 );
assert( gamma_move(board, 19, 7, 6) == 1 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 20, 8, 1) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_move(board, 22, 3, 8) == 1 );
assert( gamma_move(board, 20, 5, 6) == 1 );
assert( gamma_move(board, 23, 8, 9) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 19, 9, 4) == 1 );
assert( gamma_move(board, 12, 5, 8) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 24, 0, 1) == 1 );
assert( gamma_move(board, 16, 1, 6) == 1 );
assert( gamma_move(board, 22, 3, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 23, 3, 5) == 1 );
assert( gamma_move(board, 18, 3, 6) == 1 );
assert( gamma_move(board, 19, 6, 2) == 1 );
assert( gamma_move(board, 20, 6, 9) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 22, 4, 6) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 29, 0, 0) == 1 );
assert( gamma_move(board, 14, 1, 0) == 1 );
assert( gamma_move(board, 12, 6, 3) == 1 );
assert( gamma_move(board, 20, 5, 3) == 1 );
assert( gamma_move(board, 20, 9, 2) == 1 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_move(board, 29, 0, 3) == 1 );
assert( gamma_move(board, 20, 1, 4) == 1 );
assert( gamma_move(board, 20, 5, 7) == 1 );
assert( gamma_move(board, 19, 0, 9) == 1 );
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_move(board, 27, 7, 2) == 1 );
assert( gamma_move(board, 28, 4, 2) == 1 );
assert( gamma_move(board, 14, 8, 8) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 29, 3, 7) == 1 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 16, 8, 0) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 17, 2, 0) == 1 );
assert( gamma_move(board, 28, 1, 3) == 1 );
assert( gamma_move(board, 29, 6, 0) == 1 );
assert( gamma_move(board, 20, 2, 8) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 23, 9, 8) == 1 );
assert( gamma_move(board, 17, 4, 1) == 1 );
assert( gamma_move(board, 22, 1, 5) == 1 );
assert( gamma_move(board, 19, 8, 6) == 1 );
assert( gamma_move(board, 18, 9, 7) == 1 );
assert( gamma_move(board, 17, 3, 1) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 29, 6, 8) == 1 );
assert( gamma_move(board, 16, 9, 1) == 1 );
assert( gamma_move(board, 23, 4, 9) == 1 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 13, 5, 0) == 1 );
assert( gamma_move(board, 16, 3, 2) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 28, 0, 6) == 1 );
assert( gamma_move(board, 16, 8, 3) == 1 );
assert( gamma_move(board, 25, 9, 5) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 26, 0, 4) == 1 );
assert( gamma_move(board, 11, 2, 3) == 1 );
assert( gamma_move(board, 20, 7, 4) == 1 );
assert( gamma_move(board, 17, 6, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 24, 7, 9) == 1 );
assert( gamma_move(board, 17, 9, 6) == 1 );
assert( gamma_move(board, 26, 7, 0) == 1 );
assert( gamma_move(board, 22, 6, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 21, 6, 7) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 21, 0, 2) == 1 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_move(board, 20, 8, 2) == 1 );


gamma_delete(board);

    return 0;
}
