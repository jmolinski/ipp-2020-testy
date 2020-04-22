#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 174823292
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 22, 1, 7) == 1 );
assert( gamma_move(board, 18, 6, 6) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 21, 5, 2) == 1 );
assert( gamma_move(board, 21, 1, 8) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 25, 0, 2) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 22, 7, 1) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 13, 9, 7) == 1 );
assert( gamma_move(board, 24, 6, 8) == 1 );
assert( gamma_move(board, 8, 9, 8) == 1 );
assert( gamma_move(board, 19, 5, 8) == 1 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 27, 5, 9) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 21, 1, 5) == 1 );
assert( gamma_move(board, 20, 2, 7) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 15, 2, 1) == 1 );
assert( gamma_move(board, 21, 6, 2) == 1 );
assert( gamma_move(board, 27, 3, 9) == 1 );
assert( gamma_move(board, 17, 6, 9) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 19, 7, 8) == 1 );
assert( gamma_move(board, 21, 8, 7) == 1 );
assert( gamma_move(board, 27, 6, 5) == 1 );
assert( gamma_move(board, 22, 2, 4) == 1 );
assert( gamma_move(board, 29, 4, 4) == 1 );
assert( gamma_move(board, 13, 8, 4) == 1 );
assert( gamma_move(board, 15, 1, 4) == 1 );
assert( gamma_move(board, 16, 0, 6) == 1 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_move(board, 23, 0, 0) == 1 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 25, 2, 3) == 1 );
assert( gamma_move(board, 29, 2, 0) == 1 );
assert( gamma_move(board, 18, 7, 4) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 22, 9, 5) == 1 );
assert( gamma_move(board, 15, 8, 1) == 1 );
assert( gamma_move(board, 30, 4, 9) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 23, 1, 0) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 23, 5, 5) == 1 );
assert( gamma_move(board, 30, 3, 0) == 1 );
assert( gamma_move(board, 20, 3, 4) == 1 );
assert( gamma_move(board, 16, 7, 3) == 1 );
assert( gamma_move(board, 27, 5, 1) == 1 );
assert( gamma_move(board, 11, 9, 3) == 1 );
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_move(board, 22, 9, 6) == 1 );
assert( gamma_move(board, 14, 4, 8) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 19, 3, 8) == 1 );
assert( gamma_move(board, 28, 8, 9) == 1 );
assert( gamma_move(board, 20, 9, 1) == 1 );
assert( gamma_move(board, 23, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 17, 8, 5) == 1 );
assert( gamma_move(board, 21, 6, 0) == 1 );
assert( gamma_move(board, 10, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 11, 2, 9) == 1 );
assert( gamma_move(board, 17, 2, 2) == 1 );
assert( gamma_move(board, 20, 9, 4) == 1 );
assert( gamma_move(board, 14, 8, 6) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 28, 7, 9) == 1 );
assert( gamma_move(board, 20, 0, 7) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 30, 0, 5) == 1 );
assert( gamma_move(board, 12, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 19, 0, 9) == 1 );
assert( gamma_move(board, 29, 7, 7) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_move(board, 19, 0, 8) == 1 );
assert( gamma_move(board, 18, 7, 0) == 1 );


gamma_delete(board);

    return 0;
}
