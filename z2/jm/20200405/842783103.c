#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 842783103
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 29, 3, 2) == 1 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 15, 3, 3) == 1 );
assert( gamma_move(board, 14, 8, 1) == 1 );
assert( gamma_move(board, 19, 3, 8) == 1 );
assert( gamma_move(board, 10, 9, 8) == 1 );
assert( gamma_move(board, 17, 9, 2) == 1 );
assert( gamma_move(board, 21, 3, 0) == 1 );
assert( gamma_move(board, 18, 5, 4) == 1 );
assert( gamma_move(board, 21, 5, 8) == 1 );
assert( gamma_move(board, 24, 7, 9) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 24, 4, 0) == 1 );
assert( gamma_move(board, 22, 8, 6) == 1 );
assert( gamma_move(board, 23, 2, 3) == 1 );
assert( gamma_move(board, 30, 1, 7) == 1 );
assert( gamma_move(board, 14, 8, 2) == 1 );
assert( gamma_move(board, 17, 0, 9) == 1 );
assert( gamma_move(board, 20, 4, 5) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 24, 7, 7) == 1 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_move(board, 11, 8, 0) == 1 );
assert( gamma_move(board, 20, 6, 6) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 17, 7, 0) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 18, 8, 4) == 1 );
assert( gamma_move(board, 15, 6, 0) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 20, 7, 6) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 16, 5, 9) == 1 );
assert( gamma_move(board, 24, 6, 8) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 16, 4, 3) == 1 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_move(board, 15, 6, 7) == 1 );
assert( gamma_move(board, 26, 0, 5) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 12, 2, 8) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 22, 3, 7) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 23, 3, 9) == 1 );
assert( gamma_move(board, 27, 4, 4) == 1 );
assert( gamma_move(board, 21, 6, 5) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 20, 2, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 14, 0, 2) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 27, 9, 6) == 1 );
assert( gamma_move(board, 11, 7, 8) == 1 );
assert( gamma_move(board, 14, 9, 9) == 1 );
assert( gamma_move(board, 12, 2, 6) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 26, 5, 7) == 1 );
assert( gamma_move(board, 20, 2, 5) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 19, 9, 5) == 1 );
assert( gamma_move(board, 30, 7, 3) == 1 );
assert( gamma_move(board, 20, 1, 9) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 22, 0, 0) == 1 );
assert( gamma_move(board, 30, 3, 1) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 20, 0, 7) == 1 );
assert( gamma_move(board, 30, 4, 6) == 1 );
assert( gamma_move(board, 9, 8, 8) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 19, 0, 6) == 1 );
assert( gamma_move(board, 23, 5, 6) == 1 );
assert( gamma_move(board, 26, 3, 4) == 1 );
assert( gamma_move(board, 10, 3, 5) == 1 );
assert( gamma_move(board, 27, 7, 4) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 17, 1, 5) == 1 );
assert( gamma_move(board, 24, 2, 4) == 1 );
assert( gamma_move(board, 17, 2, 1) == 1 );
assert( gamma_move(board, 17, 8, 9) == 1 );
assert( gamma_move(board, 28, 3, 6) == 1 );
assert( gamma_move(board, 19, 4, 7) == 1 );
assert( gamma_move(board, 23, 1, 2) == 1 );
assert( gamma_move(board, 20, 0, 4) == 1 );
assert( gamma_move(board, 27, 1, 0) == 1 );
assert( gamma_move(board, 29, 2, 0) == 1 );
assert( gamma_move(board, 27, 8, 3) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );


gamma_delete(board);

    return 0;
}
