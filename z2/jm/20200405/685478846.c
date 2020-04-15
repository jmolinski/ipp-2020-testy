#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 685478846
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 26, 4, 2) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 26, 6, 1) == 1 );
assert( gamma_move(board, 12, 6, 7) == 1 );
assert( gamma_move(board, 16, 1, 1) == 1 );
assert( gamma_move(board, 22, 1, 3) == 1 );
assert( gamma_move(board, 26, 5, 1) == 1 );
assert( gamma_move(board, 19, 1, 7) == 1 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 15, 2, 6) == 1 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_move(board, 11, 0, 6) == 1 );
assert( gamma_move(board, 23, 0, 3) == 1 );
assert( gamma_move(board, 27, 8, 5) == 1 );
assert( gamma_move(board, 20, 3, 3) == 1 );
assert( gamma_move(board, 15, 7, 8) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 20, 3, 4) == 1 );
assert( gamma_move(board, 18, 3, 7) == 1 );
assert( gamma_move(board, 19, 6, 4) == 1 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 28, 7, 3) == 1 );
assert( gamma_move(board, 21, 5, 3) == 1 );
assert( gamma_move(board, 24, 5, 7) == 1 );
assert( gamma_move(board, 15, 5, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 11, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 24, 2, 3) == 1 );
assert( gamma_move(board, 28, 7, 0) == 1 );
assert( gamma_move(board, 21, 5, 9) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 27, 4, 3) == 1 );
assert( gamma_move(board, 11, 1, 6) == 1 );
assert( gamma_move(board, 16, 7, 1) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 23, 1, 0) == 1 );
assert( gamma_move(board, 22, 9, 2) == 1 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 26, 0, 8) == 1 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 19, 8, 9) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 16, 6, 5) == 1 );
assert( gamma_move(board, 13, 1, 2) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 27, 1, 9) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_move(board, 18, 3, 5) == 1 );
assert( gamma_move(board, 29, 1, 8) == 1 );
assert( gamma_move(board, 18, 4, 1) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 22, 3, 6) == 1 );
assert( gamma_move(board, 28, 0, 1) == 1 );
assert( gamma_move(board, 21, 5, 6) == 1 );
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 29, 3, 9) == 1 );
assert( gamma_move(board, 13, 9, 4) == 1 );
assert( gamma_move(board, 16, 7, 9) == 1 );
assert( gamma_move(board, 19, 8, 8) == 1 );
assert( gamma_move(board, 29, 6, 3) == 1 );
assert( gamma_move(board, 8, 9, 8) == 1 );
assert( gamma_move(board, 22, 4, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 27, 3, 1) == 1 );
assert( gamma_move(board, 22, 2, 5) == 1 );
assert( gamma_move(board, 23, 9, 3) == 1 );
assert( gamma_move(board, 30, 8, 2) == 1 );
assert( gamma_move(board, 21, 4, 0) == 1 );
assert( gamma_move(board, 26, 8, 7) == 1 );
assert( gamma_move(board, 24, 3, 0) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 22, 2, 4) == 1 );
assert( gamma_move(board, 14, 3, 8) == 1 );
assert( gamma_move(board, 12, 6, 9) == 1 );
assert( gamma_move(board, 30, 7, 4) == 1 );
assert( gamma_move(board, 15, 6, 8) == 1 );
assert( gamma_move(board, 20, 5, 8) == 1 );
assert( gamma_move(board, 20, 2, 7) == 1 );
assert( gamma_move(board, 24, 0, 5) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 23, 8, 3) == 1 );
assert( gamma_move(board, 20, 8, 1) == 1 );
assert( gamma_move(board, 13, 7, 6) == 1 );
assert( gamma_move(board, 13, 5, 2) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );


gamma_delete(board);

    return 0;
}
