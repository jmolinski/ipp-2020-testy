#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_with_collisions
uuid: 639966885
*/
/*
gamma_move, fill board 1 player, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 3, 100);
assert( board != NULL );


assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );


gamma_delete(board);

    return 0;
}
