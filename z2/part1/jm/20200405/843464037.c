#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 843464037
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 19, 5, 3) == 1 );
assert( gamma_move(board, 29, 1, 2) == 1 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_move(board, 17, 2, 5) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 30, 0, 7) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 11, 2, 7) == 1 );
assert( gamma_move(board, 21, 3, 5) == 1 );
assert( gamma_move(board, 23, 4, 6) == 1 );
assert( gamma_move(board, 25, 1, 5) == 1 );
assert( gamma_move(board, 25, 5, 8) == 1 );
assert( gamma_move(board, 22, 3, 0) == 1 );
assert( gamma_move(board, 30, 6, 5) == 1 );
assert( gamma_move(board, 16, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 20, 6, 8) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 19, 9, 6) == 1 );
assert( gamma_move(board, 26, 3, 8) == 1 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 13, 8, 3) == 1 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 15, 9, 2) == 1 );
assert( gamma_move(board, 25, 6, 4) == 1 );
assert( gamma_move(board, 23, 3, 6) == 1 );
assert( gamma_move(board, 27, 5, 4) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 25, 0, 0) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 18, 9, 4) == 1 );
assert( gamma_move(board, 15, 2, 1) == 1 );
assert( gamma_move(board, 12, 0, 5) == 1 );
assert( gamma_move(board, 16, 1, 0) == 1 );
assert( gamma_move(board, 10, 7, 9) == 1 );
assert( gamma_move(board, 22, 4, 1) == 1 );
assert( gamma_move(board, 22, 6, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 16, 1, 9) == 1 );
assert( gamma_move(board, 27, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 30, 9, 9) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 23, 3, 1) == 1 );
assert( gamma_move(board, 22, 9, 8) == 1 );
assert( gamma_move(board, 21, 9, 1) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 12, 8, 9) == 1 );
assert( gamma_move(board, 16, 2, 6) == 1 );
assert( gamma_move(board, 28, 4, 0) == 1 );
assert( gamma_move(board, 20, 3, 4) == 1 );
assert( gamma_move(board, 25, 6, 0) == 1 );
assert( gamma_move(board, 27, 7, 2) == 1 );
assert( gamma_move(board, 17, 1, 4) == 1 );
assert( gamma_move(board, 18, 8, 8) == 1 );
assert( gamma_move(board, 17, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 27, 4, 3) == 1 );
assert( gamma_move(board, 13, 8, 6) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 18, 4, 5) == 1 );
assert( gamma_move(board, 20, 5, 0) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 12, 6, 6) == 1 );
assert( gamma_move(board, 26, 8, 7) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 10, 6, 2) == 1 );
assert( gamma_move(board, 30, 4, 7) == 1 );
assert( gamma_move(board, 29, 7, 0) == 1 );
assert( gamma_move(board, 14, 9, 7) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 27, 5, 7) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 29, 5, 1) == 1 );
assert( gamma_move(board, 26, 2, 4) == 1 );
assert( gamma_move(board, 14, 3, 7) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 17, 2, 3) == 1 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 12, 7, 7) == 1 );
assert( gamma_move(board, 25, 5, 5) == 1 );
assert( gamma_move(board, 22, 7, 4) == 1 );
assert( gamma_move(board, 14, 1, 7) == 1 );
assert( gamma_move(board, 16, 5, 6) == 1 );


gamma_delete(board);

    return 0;
}
