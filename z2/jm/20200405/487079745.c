#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 487079745
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 16, 1, 1) == 1 );
assert( gamma_move(board, 13, 3, 4) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 23, 8, 8) == 1 );
assert( gamma_move(board, 21, 4, 9) == 1 );
assert( gamma_move(board, 19, 3, 6) == 1 );
assert( gamma_move(board, 30, 1, 8) == 1 );
assert( gamma_move(board, 23, 7, 0) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 14, 8, 3) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 29, 6, 3) == 1 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 16, 9, 4) == 1 );
assert( gamma_move(board, 14, 7, 5) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 19, 6, 2) == 1 );
assert( gamma_move(board, 13, 4, 1) == 1 );
assert( gamma_move(board, 26, 6, 9) == 1 );
assert( gamma_move(board, 12, 5, 6) == 1 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 16, 3, 1) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 20, 8, 5) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 29, 2, 9) == 1 );
assert( gamma_move(board, 11, 5, 7) == 1 );
assert( gamma_move(board, 30, 4, 7) == 1 );
assert( gamma_move(board, 20, 0, 5) == 1 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_move(board, 15, 7, 1) == 1 );
assert( gamma_move(board, 26, 4, 6) == 1 );
assert( gamma_move(board, 26, 6, 7) == 1 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 29, 6, 4) == 1 );
assert( gamma_move(board, 22, 7, 4) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 23, 0, 3) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 13, 9, 5) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 17, 9, 8) == 1 );
assert( gamma_move(board, 23, 1, 9) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 16, 0, 2) == 1 );
assert( gamma_move(board, 20, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 29, 4, 2) == 1 );
assert( gamma_move(board, 23, 7, 2) == 1 );
assert( gamma_move(board, 13, 2, 8) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 21, 3, 9) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 16, 0, 0) == 1 );
assert( gamma_move(board, 27, 7, 8) == 1 );
assert( gamma_move(board, 11, 1, 3) == 1 );
assert( gamma_move(board, 25, 6, 0) == 1 );
assert( gamma_move(board, 18, 8, 0) == 1 );
assert( gamma_move(board, 27, 6, 5) == 1 );
assert( gamma_move(board, 28, 8, 2) == 1 );
assert( gamma_move(board, 14, 9, 3) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 20, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 13, 7, 7) == 1 );
assert( gamma_move(board, 21, 8, 6) == 1 );
assert( gamma_move(board, 25, 0, 1) == 1 );
assert( gamma_move(board, 27, 6, 8) == 1 );
assert( gamma_move(board, 12, 8, 7) == 1 );
assert( gamma_move(board, 19, 0, 9) == 1 );
assert( gamma_move(board, 27, 4, 0) == 1 );
assert( gamma_move(board, 14, 8, 9) == 1 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 29, 2, 4) == 1 );
assert( gamma_move(board, 15, 2, 0) == 1 );
assert( gamma_move(board, 23, 7, 3) == 1 );
assert( gamma_move(board, 16, 3, 0) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 26, 6, 1) == 1 );
assert( gamma_move(board, 19, 3, 2) == 1 );


gamma_delete(board);

    return 0;
}
