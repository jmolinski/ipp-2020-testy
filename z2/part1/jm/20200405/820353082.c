#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_with_collisions
uuid: 820353082
*/
/*
gamma_move, fill board 1 player, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 3, 100);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );


gamma_delete(board);

    return 0;
}
