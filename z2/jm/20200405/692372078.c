#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 692372078
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 18, 6, 6) == 1 );
assert( gamma_move(board, 19, 8, 3) == 1 );
assert( gamma_move(board, 24, 1, 8) == 1 );
assert( gamma_move(board, 29, 3, 0) == 1 );
assert( gamma_move(board, 16, 5, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 21, 5, 8) == 1 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_move(board, 25, 7, 7) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 29, 0, 9) == 1 );
assert( gamma_move(board, 29, 5, 0) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 19, 9, 5) == 1 );
assert( gamma_move(board, 17, 3, 1) == 1 );
assert( gamma_move(board, 23, 2, 0) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 24, 0, 2) == 1 );
assert( gamma_move(board, 14, 8, 8) == 1 );
assert( gamma_move(board, 17, 3, 5) == 1 );
assert( gamma_move(board, 13, 1, 3) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 19, 7, 9) == 1 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_move(board, 17, 6, 1) == 1 );
assert( gamma_move(board, 24, 6, 0) == 1 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 21, 2, 4) == 1 );
assert( gamma_move(board, 21, 7, 2) == 1 );
assert( gamma_move(board, 26, 0, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 17, 8, 7) == 1 );
assert( gamma_move(board, 18, 9, 7) == 1 );
assert( gamma_move(board, 30, 3, 3) == 1 );
assert( gamma_move(board, 28, 5, 4) == 1 );
assert( gamma_move(board, 13, 4, 2) == 1 );
assert( gamma_move(board, 20, 7, 5) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 17, 2, 5) == 1 );
assert( gamma_move(board, 22, 4, 7) == 1 );
assert( gamma_move(board, 23, 7, 6) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 28, 4, 9) == 1 );
assert( gamma_move(board, 11, 3, 4) == 1 );
assert( gamma_move(board, 17, 9, 9) == 1 );
assert( gamma_move(board, 23, 6, 9) == 1 );
assert( gamma_move(board, 14, 7, 4) == 1 );
assert( gamma_move(board, 11, 2, 6) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 24, 9, 6) == 1 );
assert( gamma_move(board, 14, 4, 3) == 1 );
assert( gamma_move(board, 19, 1, 4) == 1 );
assert( gamma_move(board, 15, 9, 1) == 1 );
assert( gamma_move(board, 28, 8, 4) == 1 );
assert( gamma_move(board, 19, 5, 7) == 1 );
assert( gamma_move(board, 19, 8, 2) == 1 );
assert( gamma_move(board, 29, 3, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 17, 8, 6) == 1 );
assert( gamma_move(board, 17, 5, 1) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 23, 3, 9) == 1 );
assert( gamma_move(board, 14, 7, 8) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 10, 2, 9) == 1 );
assert( gamma_move(board, 15, 2, 2) == 1 );
assert( gamma_move(board, 29, 9, 8) == 1 );
assert( gamma_move(board, 22, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 16, 4, 8) == 1 );
assert( gamma_move(board, 10, 0, 5) == 1 );
assert( gamma_move(board, 29, 2, 7) == 1 );
assert( gamma_move(board, 23, 1, 1) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 21, 6, 7) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 21, 4, 0) == 1 );
assert( gamma_move(board, 27, 1, 0) == 1 );
assert( gamma_move(board, 21, 8, 1) == 1 );
assert( gamma_move(board, 24, 1, 6) == 1 );
assert( gamma_move(board, 27, 5, 3) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 17, 0, 7) == 1 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 27, 2, 8) == 1 );
assert( gamma_move(board, 20, 7, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 16, 3, 8) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 24, 1, 9) == 1 );
assert( gamma_move(board, 15, 8, 9) == 1 );
assert( gamma_move(board, 26, 7, 0) == 1 );
assert( gamma_move(board, 18, 7, 3) == 1 );
assert( gamma_move(board, 27, 9, 2) == 1 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 16, 5, 9) == 1 );


gamma_delete(board);

    return 0;
}
