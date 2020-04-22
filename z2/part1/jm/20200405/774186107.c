#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 774186107
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 23, 2, 5) == 1 );
assert( gamma_move(board, 22, 3, 9) == 1 );
assert( gamma_move(board, 22, 8, 2) == 1 );
assert( gamma_move(board, 14, 6, 2) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 10, 4, 5) == 1 );
assert( gamma_move(board, 20, 4, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 23, 0, 9) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 11, 4, 9) == 1 );
assert( gamma_move(board, 26, 9, 9) == 1 );
assert( gamma_move(board, 16, 3, 3) == 1 );
assert( gamma_move(board, 19, 8, 7) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 18, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 20, 9, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 16, 7, 5) == 1 );
assert( gamma_move(board, 17, 2, 7) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 29, 9, 6) == 1 );
assert( gamma_move(board, 13, 5, 3) == 1 );
assert( gamma_move(board, 30, 3, 0) == 1 );
assert( gamma_move(board, 28, 6, 3) == 1 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_move(board, 23, 6, 8) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 29, 3, 8) == 1 );
assert( gamma_move(board, 24, 1, 6) == 1 );
assert( gamma_move(board, 17, 3, 2) == 1 );
assert( gamma_move(board, 30, 1, 0) == 1 );
assert( gamma_move(board, 24, 4, 2) == 1 );
assert( gamma_move(board, 19, 0, 1) == 1 );
assert( gamma_move(board, 14, 1, 1) == 1 );
assert( gamma_move(board, 19, 5, 5) == 1 );
assert( gamma_move(board, 22, 5, 1) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 26, 2, 8) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 15, 9, 7) == 1 );
assert( gamma_move(board, 23, 4, 0) == 1 );
assert( gamma_move(board, 26, 3, 6) == 1 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 29, 2, 6) == 1 );
assert( gamma_move(board, 21, 5, 6) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 16, 8, 1) == 1 );
assert( gamma_move(board, 19, 3, 1) == 1 );
assert( gamma_move(board, 30, 5, 8) == 1 );
assert( gamma_move(board, 24, 6, 1) == 1 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_move(board, 30, 9, 8) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 23, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 20, 7, 9) == 1 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_move(board, 17, 5, 9) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 13, 5, 2) == 1 );
assert( gamma_move(board, 22, 9, 4) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 17, 2, 2) == 1 );
assert( gamma_move(board, 16, 6, 6) == 1 );
assert( gamma_move(board, 16, 0, 5) == 1 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 28, 9, 1) == 1 );
assert( gamma_move(board, 27, 6, 9) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 12, 8, 9) == 1 );
assert( gamma_move(board, 21, 1, 9) == 1 );
assert( gamma_move(board, 14, 1, 7) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 30, 7, 7) == 1 );
assert( gamma_move(board, 20, 0, 7) == 1 );
assert( gamma_move(board, 18, 2, 4) == 1 );
assert( gamma_move(board, 16, 8, 8) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 17, 9, 2) == 1 );
assert( gamma_move(board, 15, 4, 8) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 9, 8, 0) == 1 );
assert( gamma_move(board, 15, 6, 7) == 1 );
assert( gamma_move(board, 14, 5, 7) == 1 );
assert( gamma_move(board, 17, 1, 8) == 1 );
assert( gamma_move(board, 10, 9, 5) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 23, 3, 4) == 1 );


gamma_delete(board);

    return 0;
}
