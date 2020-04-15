#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 766193087
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 20, 4, 4) == 1 );
assert( gamma_move(board, 23, 2, 1) == 1 );
assert( gamma_move(board, 26, 0, 5) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 26, 5, 2) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 21, 7, 9) == 1 );
assert( gamma_move(board, 25, 3, 7) == 1 );
assert( gamma_move(board, 22, 2, 9) == 1 );
assert( gamma_move(board, 27, 8, 7) == 1 );
assert( gamma_move(board, 12, 4, 3) == 1 );
assert( gamma_move(board, 13, 7, 1) == 1 );
assert( gamma_move(board, 13, 7, 6) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 25, 0, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 19, 8, 4) == 1 );
assert( gamma_move(board, 16, 3, 4) == 1 );
assert( gamma_move(board, 28, 3, 9) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 27, 6, 4) == 1 );
assert( gamma_move(board, 29, 9, 7) == 1 );
assert( gamma_move(board, 22, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 14, 1, 3) == 1 );
assert( gamma_move(board, 18, 1, 1) == 1 );
assert( gamma_move(board, 29, 7, 4) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 14, 8, 3) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 28, 9, 8) == 1 );
assert( gamma_move(board, 17, 0, 9) == 1 );
assert( gamma_move(board, 18, 7, 2) == 1 );
assert( gamma_move(board, 23, 1, 6) == 1 );
assert( gamma_move(board, 24, 5, 5) == 1 );
assert( gamma_move(board, 20, 4, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 24, 4, 1) == 1 );
assert( gamma_move(board, 24, 2, 2) == 1 );
assert( gamma_move(board, 20, 9, 2) == 1 );
assert( gamma_move(board, 27, 3, 0) == 1 );
assert( gamma_move(board, 16, 2, 7) == 1 );
assert( gamma_move(board, 19, 6, 7) == 1 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 15, 1, 0) == 1 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 28, 5, 6) == 1 );
assert( gamma_move(board, 21, 2, 8) == 1 );
assert( gamma_move(board, 28, 2, 4) == 1 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 15, 0, 1) == 1 );
assert( gamma_move(board, 27, 1, 9) == 1 );
assert( gamma_move(board, 23, 0, 8) == 1 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 19, 8, 0) == 1 );
assert( gamma_move(board, 27, 2, 6) == 1 );
assert( gamma_move(board, 19, 3, 5) == 1 );
assert( gamma_move(board, 12, 2, 3) == 1 );
assert( gamma_move(board, 21, 6, 3) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 19, 3, 2) == 1 );
assert( gamma_move(board, 10, 2, 5) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 17, 4, 8) == 1 );
assert( gamma_move(board, 29, 9, 9) == 1 );
assert( gamma_move(board, 22, 7, 8) == 1 );
assert( gamma_move(board, 22, 4, 6) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 22, 0, 7) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 13, 3, 8) == 1 );
assert( gamma_move(board, 16, 8, 8) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 16, 8, 5) == 1 );
assert( gamma_move(board, 21, 8, 6) == 1 );
assert( gamma_move(board, 12, 1, 5) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 27, 5, 9) == 1 );
assert( gamma_move(board, 10, 4, 7) == 1 );
assert( gamma_move(board, 22, 9, 3) == 1 );
assert( gamma_move(board, 24, 6, 2) == 1 );
assert( gamma_move(board, 16, 3, 6) == 1 );
assert( gamma_move(board, 28, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 22, 8, 2) == 1 );
assert( gamma_move(board, 30, 0, 4) == 1 );
assert( gamma_move(board, 15, 0, 0) == 1 );
assert( gamma_move(board, 27, 1, 8) == 1 );
assert( gamma_move(board, 25, 6, 8) == 1 );
assert( gamma_move(board, 14, 6, 5) == 1 );
assert( gamma_move(board, 21, 0, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 21, 3, 3) == 1 );
assert( gamma_move(board, 18, 1, 4) == 1 );
assert( gamma_move(board, 16, 0, 2) == 1 );
assert( gamma_move(board, 26, 9, 1) == 1 );


gamma_delete(board);

    return 0;
}
