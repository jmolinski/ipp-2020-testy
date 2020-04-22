#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 949480755
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 22, 7, 2) == 1 );
assert( gamma_move(board, 26, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 24, 6, 6) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 23, 4, 3) == 1 );
assert( gamma_move(board, 10, 8, 8) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 30, 4, 2) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 22, 8, 7) == 1 );
assert( gamma_move(board, 20, 2, 7) == 1 );
assert( gamma_move(board, 22, 0, 8) == 1 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 13, 5, 9) == 1 );
assert( gamma_move(board, 20, 6, 7) == 1 );
assert( gamma_move(board, 28, 8, 6) == 1 );
assert( gamma_move(board, 23, 4, 6) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 21, 1, 8) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 30, 2, 1) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 18, 4, 7) == 1 );
assert( gamma_move(board, 22, 7, 0) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 13, 3, 2) == 1 );
assert( gamma_move(board, 23, 2, 8) == 1 );
assert( gamma_move(board, 27, 9, 1) == 1 );
assert( gamma_move(board, 19, 7, 7) == 1 );
assert( gamma_move(board, 15, 7, 1) == 1 );
assert( gamma_move(board, 14, 0, 1) == 1 );
assert( gamma_move(board, 11, 9, 2) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 20, 8, 5) == 1 );
assert( gamma_move(board, 28, 3, 6) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 19, 9, 8) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 29, 3, 7) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 18, 5, 5) == 1 );
assert( gamma_move(board, 13, 5, 6) == 1 );
assert( gamma_move(board, 23, 6, 8) == 1 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_move(board, 27, 5, 0) == 1 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 15, 3, 8) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 28, 8, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 17, 0, 7) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 16, 1, 9) == 1 );
assert( gamma_move(board, 22, 2, 9) == 1 );
assert( gamma_move(board, 30, 0, 9) == 1 );
assert( gamma_move(board, 30, 2, 0) == 1 );
assert( gamma_move(board, 20, 5, 1) == 1 );
assert( gamma_move(board, 11, 0, 4) == 1 );
assert( gamma_move(board, 19, 3, 0) == 1 );
assert( gamma_move(board, 27, 9, 6) == 1 );
assert( gamma_move(board, 29, 3, 9) == 1 );
assert( gamma_move(board, 30, 4, 1) == 1 );
assert( gamma_move(board, 26, 1, 7) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 18, 1, 3) == 1 );
assert( gamma_move(board, 14, 1, 6) == 1 );
assert( gamma_move(board, 14, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 26, 0, 6) == 1 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_move(board, 22, 7, 6) == 1 );
assert( gamma_move(board, 23, 4, 0) == 1 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_move(board, 10, 7, 4) == 1 );
assert( gamma_move(board, 29, 8, 0) == 1 );
assert( gamma_move(board, 28, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 17, 8, 2) == 1 );
assert( gamma_move(board, 13, 8, 3) == 1 );


gamma_delete(board);

    return 0;
}
