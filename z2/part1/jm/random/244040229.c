#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 244040229
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 2, 8, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );


gamma_delete(board);

    return 0;
}
