#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 910341832
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_move(board, 13, 0, 1) == 1 );
assert( gamma_move(board, 25, 4, 0) == 1 );
assert( gamma_move(board, 13, 6, 1) == 1 );
assert( gamma_move(board, 20, 5, 7) == 1 );
assert( gamma_move(board, 17, 0, 5) == 1 );
assert( gamma_move(board, 27, 1, 9) == 1 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 30, 9, 7) == 1 );
assert( gamma_move(board, 22, 2, 8) == 1 );
assert( gamma_move(board, 23, 3, 3) == 1 );
assert( gamma_move(board, 22, 5, 5) == 1 );
assert( gamma_move(board, 25, 3, 1) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 25, 2, 6) == 1 );
assert( gamma_move(board, 27, 0, 9) == 1 );
assert( gamma_move(board, 26, 7, 3) == 1 );
assert( gamma_move(board, 25, 5, 1) == 1 );
assert( gamma_move(board, 23, 3, 8) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 19, 6, 3) == 1 );
assert( gamma_move(board, 21, 7, 4) == 1 );
assert( gamma_move(board, 12, 5, 4) == 1 );
assert( gamma_move(board, 27, 5, 9) == 1 );
assert( gamma_move(board, 30, 5, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 28, 4, 3) == 1 );
assert( gamma_move(board, 14, 5, 8) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 16, 7, 8) == 1 );
assert( gamma_move(board, 14, 2, 2) == 1 );
assert( gamma_move(board, 28, 3, 0) == 1 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 27, 6, 0) == 1 );
assert( gamma_move(board, 14, 1, 4) == 1 );
assert( gamma_move(board, 19, 8, 7) == 1 );
assert( gamma_move(board, 19, 7, 9) == 1 );
assert( gamma_move(board, 25, 6, 4) == 1 );
assert( gamma_move(board, 22, 8, 9) == 1 );
assert( gamma_move(board, 26, 9, 0) == 1 );
assert( gamma_move(board, 28, 9, 6) == 1 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 23, 4, 4) == 1 );
assert( gamma_move(board, 30, 8, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 25, 8, 3) == 1 );
assert( gamma_move(board, 18, 6, 6) == 1 );
assert( gamma_move(board, 26, 6, 8) == 1 );
assert( gamma_move(board, 26, 0, 6) == 1 );
assert( gamma_move(board, 20, 8, 2) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 15, 4, 1) == 1 );
assert( gamma_move(board, 22, 3, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 12, 9, 8) == 1 );
assert( gamma_move(board, 12, 1, 5) == 1 );
assert( gamma_move(board, 12, 0, 7) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 16, 4, 2) == 1 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 15, 2, 5) == 1 );
assert( gamma_move(board, 15, 5, 0) == 1 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 16, 2, 7) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 23, 7, 5) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_move(board, 23, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 11, 9, 1) == 1 );
assert( gamma_move(board, 13, 4, 9) == 1 );
assert( gamma_move(board, 10, 9, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 23, 3, 2) == 1 );
assert( gamma_move(board, 27, 2, 3) == 1 );
assert( gamma_move(board, 23, 6, 5) == 1 );
assert( gamma_move(board, 30, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 18, 4, 8) == 1 );
assert( gamma_move(board, 23, 1, 7) == 1 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 26, 8, 5) == 1 );
assert( gamma_move(board, 17, 1, 8) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 27, 4, 6) == 1 );
assert( gamma_move(board, 22, 1, 2) == 1 );
assert( gamma_move(board, 22, 0, 3) == 1 );
assert( gamma_move(board, 12, 3, 9) == 1 );
assert( gamma_move(board, 22, 8, 1) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 14, 9, 2) == 1 );


gamma_delete(board);

    return 0;
}
