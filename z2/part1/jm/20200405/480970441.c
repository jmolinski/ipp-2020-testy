#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 480970441
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 19, 9, 3) == 1 );
assert( gamma_move(board, 22, 4, 6) == 1 );
assert( gamma_move(board, 14, 9, 0) == 1 );
assert( gamma_move(board, 13, 3, 9) == 1 );
assert( gamma_move(board, 28, 2, 3) == 1 );
assert( gamma_move(board, 20, 5, 1) == 1 );
assert( gamma_move(board, 22, 7, 5) == 1 );
assert( gamma_move(board, 27, 7, 1) == 1 );
assert( gamma_move(board, 25, 9, 2) == 1 );
assert( gamma_move(board, 17, 0, 6) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 24, 3, 0) == 1 );
assert( gamma_move(board, 19, 9, 6) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 11, 8, 1) == 1 );
assert( gamma_move(board, 21, 0, 3) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 25, 8, 5) == 1 );
assert( gamma_move(board, 19, 1, 8) == 1 );
assert( gamma_move(board, 20, 1, 5) == 1 );
assert( gamma_move(board, 12, 4, 3) == 1 );
assert( gamma_move(board, 22, 6, 2) == 1 );
assert( gamma_move(board, 17, 2, 8) == 1 );
assert( gamma_move(board, 18, 3, 1) == 1 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 25, 5, 7) == 1 );
assert( gamma_move(board, 14, 6, 1) == 1 );
assert( gamma_move(board, 14, 1, 9) == 1 );
assert( gamma_move(board, 29, 1, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 18, 3, 5) == 1 );
assert( gamma_move(board, 12, 9, 7) == 1 );
assert( gamma_move(board, 16, 4, 0) == 1 );
assert( gamma_move(board, 16, 9, 8) == 1 );
assert( gamma_move(board, 19, 4, 8) == 1 );
assert( gamma_move(board, 23, 1, 6) == 1 );
assert( gamma_move(board, 25, 8, 8) == 1 );
assert( gamma_move(board, 12, 8, 9) == 1 );
assert( gamma_move(board, 29, 4, 9) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 21, 4, 5) == 1 );
assert( gamma_move(board, 16, 2, 6) == 1 );
assert( gamma_move(board, 30, 0, 9) == 1 );
assert( gamma_move(board, 22, 2, 0) == 1 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_move(board, 22, 2, 1) == 1 );
assert( gamma_move(board, 23, 1, 7) == 1 );
assert( gamma_move(board, 22, 6, 9) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 18, 2, 5) == 1 );
assert( gamma_move(board, 22, 1, 2) == 1 );
assert( gamma_move(board, 18, 5, 6) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 21, 7, 0) == 1 );
assert( gamma_move(board, 30, 7, 8) == 1 );
assert( gamma_move(board, 26, 6, 4) == 1 );
assert( gamma_move(board, 26, 7, 3) == 1 );
assert( gamma_move(board, 19, 8, 4) == 1 );
assert( gamma_move(board, 24, 7, 4) == 1 );
assert( gamma_move(board, 30, 5, 0) == 1 );
assert( gamma_move(board, 16, 1, 4) == 1 );
assert( gamma_move(board, 13, 7, 6) == 1 );
assert( gamma_move(board, 24, 9, 4) == 1 );
assert( gamma_move(board, 25, 3, 4) == 1 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 30, 4, 1) == 1 );
assert( gamma_move(board, 19, 3, 7) == 1 );
assert( gamma_move(board, 28, 8, 6) == 1 );
assert( gamma_move(board, 24, 3, 8) == 1 );
assert( gamma_move(board, 10, 2, 4) == 1 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 29, 6, 3) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 19, 5, 4) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 15, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 23, 7, 9) == 1 );
assert( gamma_move(board, 9, 9, 1) == 1 );
assert( gamma_move(board, 26, 5, 9) == 1 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 24, 0, 4) == 1 );
assert( gamma_move(board, 18, 3, 6) == 1 );
assert( gamma_move(board, 13, 6, 0) == 1 );
assert( gamma_move(board, 17, 6, 7) == 1 );
assert( gamma_move(board, 30, 7, 7) == 1 );
assert( gamma_move(board, 26, 0, 8) == 1 );
assert( gamma_move(board, 28, 8, 0) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 23, 0, 0) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 28, 5, 3) == 1 );
assert( gamma_move(board, 19, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
