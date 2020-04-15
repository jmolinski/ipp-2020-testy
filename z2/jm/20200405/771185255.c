#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 771185255
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 20, 0, 6) == 1 );
assert( gamma_move(board, 18, 7, 5) == 1 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_move(board, 21, 0, 4) == 1 );
assert( gamma_move(board, 20, 0, 7) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 24, 2, 4) == 1 );
assert( gamma_move(board, 18, 1, 4) == 1 );
assert( gamma_move(board, 22, 5, 6) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 26, 7, 7) == 1 );
assert( gamma_move(board, 29, 2, 8) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 30, 8, 1) == 1 );
assert( gamma_move(board, 24, 9, 3) == 1 );
assert( gamma_move(board, 15, 7, 1) == 1 );
assert( gamma_move(board, 22, 6, 8) == 1 );
assert( gamma_move(board, 28, 8, 9) == 1 );
assert( gamma_move(board, 19, 8, 0) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 25, 3, 9) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 24, 4, 0) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 19, 9, 1) == 1 );
assert( gamma_move(board, 21, 9, 8) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 28, 7, 9) == 1 );
assert( gamma_move(board, 17, 5, 9) == 1 );
assert( gamma_move(board, 16, 8, 6) == 1 );
assert( gamma_move(board, 25, 7, 2) == 1 );
assert( gamma_move(board, 18, 7, 6) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 16, 1, 8) == 1 );
assert( gamma_move(board, 30, 3, 7) == 1 );
assert( gamma_move(board, 15, 2, 7) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 13, 5, 2) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 16, 5, 0) == 1 );
assert( gamma_move(board, 30, 0, 3) == 1 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 26, 2, 5) == 1 );
assert( gamma_move(board, 28, 5, 7) == 1 );
assert( gamma_move(board, 30, 9, 9) == 1 );
assert( gamma_move(board, 30, 9, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 23, 6, 7) == 1 );
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_move(board, 19, 0, 9) == 1 );
assert( gamma_move(board, 12, 0, 2) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 27, 3, 5) == 1 );
assert( gamma_move(board, 30, 5, 4) == 1 );
assert( gamma_move(board, 28, 8, 4) == 1 );
assert( gamma_move(board, 16, 1, 1) == 1 );
assert( gamma_move(board, 27, 9, 4) == 1 );
assert( gamma_move(board, 12, 4, 4) == 1 );
assert( gamma_move(board, 21, 4, 3) == 1 );
assert( gamma_move(board, 26, 4, 2) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 18, 6, 1) == 1 );
assert( gamma_move(board, 18, 6, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 17, 5, 8) == 1 );
assert( gamma_move(board, 23, 2, 6) == 1 );
assert( gamma_move(board, 17, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 29, 4, 8) == 1 );
assert( gamma_move(board, 25, 1, 3) == 1 );
assert( gamma_move(board, 28, 0, 5) == 1 );
assert( gamma_move(board, 16, 4, 6) == 1 );
assert( gamma_move(board, 21, 2, 3) == 1 );
assert( gamma_move(board, 13, 7, 3) == 1 );
assert( gamma_move(board, 21, 3, 4) == 1 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 13, 8, 3) == 1 );
assert( gamma_move(board, 11, 1, 6) == 1 );
assert( gamma_move(board, 19, 6, 4) == 1 );
assert( gamma_move(board, 30, 1, 9) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 26, 1, 5) == 1 );
assert( gamma_move(board, 19, 8, 2) == 1 );
assert( gamma_move(board, 14, 7, 8) == 1 );
assert( gamma_move(board, 10, 4, 9) == 1 );
assert( gamma_move(board, 29, 5, 1) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 13, 3, 1) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 15, 2, 9) == 1 );


gamma_delete(board);

    return 0;
}
