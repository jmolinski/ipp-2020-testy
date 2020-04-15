#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 784035925
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 25, 8, 4) == 1 );
assert( gamma_move(board, 29, 3, 1) == 1 );
assert( gamma_move(board, 19, 3, 7) == 1 );
assert( gamma_move(board, 15, 9, 9) == 1 );
assert( gamma_move(board, 20, 1, 1) == 1 );
assert( gamma_move(board, 30, 9, 0) == 1 );
assert( gamma_move(board, 30, 2, 1) == 1 );
assert( gamma_move(board, 17, 2, 7) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 29, 6, 6) == 1 );
assert( gamma_move(board, 30, 0, 0) == 1 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 30, 1, 3) == 1 );
assert( gamma_move(board, 24, 7, 3) == 1 );
assert( gamma_move(board, 20, 3, 3) == 1 );
assert( gamma_move(board, 18, 9, 5) == 1 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 18, 1, 0) == 1 );
assert( gamma_move(board, 15, 9, 7) == 1 );
assert( gamma_move(board, 23, 4, 4) == 1 );
assert( gamma_move(board, 15, 7, 5) == 1 );
assert( gamma_move(board, 12, 5, 8) == 1 );
assert( gamma_move(board, 16, 8, 1) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 25, 3, 8) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 30, 6, 3) == 1 );
assert( gamma_move(board, 16, 8, 8) == 1 );
assert( gamma_move(board, 17, 6, 0) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 15, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 21, 9, 4) == 1 );
assert( gamma_move(board, 27, 9, 3) == 1 );
assert( gamma_move(board, 15, 4, 7) == 1 );
assert( gamma_move(board, 22, 6, 1) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 13, 2, 0) == 1 );
assert( gamma_move(board, 21, 7, 8) == 1 );
assert( gamma_move(board, 26, 5, 0) == 1 );
assert( gamma_move(board, 19, 0, 7) == 1 );
assert( gamma_move(board, 15, 2, 9) == 1 );
assert( gamma_move(board, 22, 6, 4) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 18, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 21, 0, 8) == 1 );
assert( gamma_move(board, 14, 5, 9) == 1 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 11, 7, 7) == 1 );
assert( gamma_move(board, 11, 2, 4) == 1 );
assert( gamma_move(board, 27, 1, 8) == 1 );
assert( gamma_move(board, 16, 1, 6) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 29, 9, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 27, 7, 2) == 1 );
assert( gamma_move(board, 16, 1, 4) == 1 );
assert( gamma_move(board, 22, 0, 5) == 1 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 24, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 16, 7, 1) == 1 );
assert( gamma_move(board, 22, 3, 9) == 1 );
assert( gamma_move(board, 13, 9, 8) == 1 );
assert( gamma_move(board, 11, 1, 9) == 1 );
assert( gamma_move(board, 13, 4, 3) == 1 );
assert( gamma_move(board, 24, 8, 9) == 1 );
assert( gamma_move(board, 12, 1, 2) == 1 );
assert( gamma_move(board, 10, 8, 6) == 1 );
assert( gamma_move(board, 17, 2, 2) == 1 );
assert( gamma_move(board, 24, 9, 6) == 1 );
assert( gamma_move(board, 24, 6, 8) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 24, 2, 3) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 22, 9, 2) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 25, 3, 0) == 1 );
assert( gamma_move(board, 29, 4, 1) == 1 );
assert( gamma_move(board, 18, 0, 3) == 1 );
assert( gamma_move(board, 18, 8, 5) == 1 );
assert( gamma_move(board, 13, 3, 5) == 1 );
assert( gamma_move(board, 25, 6, 2) == 1 );
assert( gamma_move(board, 19, 6, 5) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 24, 7, 6) == 1 );
assert( gamma_move(board, 15, 8, 2) == 1 );


gamma_delete(board);

    return 0;
}
