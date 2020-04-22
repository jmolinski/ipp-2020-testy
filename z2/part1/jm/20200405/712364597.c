#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_with_collisions
uuid: 712364597
*/
/*
gamma_move, fill board 1 player, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 3, 100);
assert( board != NULL );


assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );


gamma_delete(board);

    return 0;
}
