#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 917373713
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 21, 4, 7) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 28, 4, 6) == 1 );
assert( gamma_move(board, 10, 6, 8) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 16, 7, 3) == 1 );
assert( gamma_move(board, 22, 4, 5) == 1 );
assert( gamma_move(board, 23, 3, 0) == 1 );
assert( gamma_move(board, 30, 9, 9) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 24, 5, 9) == 1 );
assert( gamma_move(board, 18, 0, 5) == 1 );
assert( gamma_move(board, 10, 4, 9) == 1 );
assert( gamma_move(board, 13, 0, 4) == 1 );
assert( gamma_move(board, 24, 0, 0) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 17, 9, 3) == 1 );
assert( gamma_move(board, 16, 6, 6) == 1 );
assert( gamma_move(board, 17, 2, 4) == 1 );
assert( gamma_move(board, 23, 6, 2) == 1 );
assert( gamma_move(board, 25, 5, 7) == 1 );
assert( gamma_move(board, 17, 2, 6) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 10, 9, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 24, 4, 4) == 1 );
assert( gamma_move(board, 13, 4, 0) == 1 );
assert( gamma_move(board, 27, 1, 8) == 1 );
assert( gamma_move(board, 16, 8, 5) == 1 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 14, 7, 2) == 1 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 18, 8, 1) == 1 );
assert( gamma_move(board, 19, 3, 5) == 1 );
assert( gamma_move(board, 23, 0, 1) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 21, 2, 3) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 27, 1, 0) == 1 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 22, 4, 1) == 1 );
assert( gamma_move(board, 12, 1, 6) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 25, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 29, 6, 9) == 1 );
assert( gamma_move(board, 30, 0, 8) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 24, 2, 5) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 26, 1, 3) == 1 );
assert( gamma_move(board, 15, 7, 6) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 16, 8, 3) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 13, 8, 9) == 1 );
assert( gamma_move(board, 25, 5, 1) == 1 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_move(board, 26, 5, 8) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 11, 9, 1) == 1 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 27, 3, 9) == 1 );
assert( gamma_move(board, 26, 4, 3) == 1 );
assert( gamma_move(board, 12, 5, 6) == 1 );
assert( gamma_move(board, 28, 2, 1) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 16, 5, 0) == 1 );
assert( gamma_move(board, 21, 0, 7) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 15, 8, 0) == 1 );
assert( gamma_move(board, 26, 8, 8) == 1 );
assert( gamma_move(board, 30, 1, 5) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 18, 3, 2) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 29, 2, 2) == 1 );
assert( gamma_move(board, 29, 1, 4) == 1 );
assert( gamma_move(board, 26, 9, 7) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 14, 2, 8) == 1 );
assert( gamma_move(board, 17, 6, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 27, 2, 0) == 1 );
assert( gamma_move(board, 11, 0, 9) == 1 );


gamma_delete(board);

    return 0;
}
