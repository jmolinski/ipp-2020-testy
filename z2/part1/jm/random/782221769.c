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
uuid: 782221769
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 2, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );


gamma_delete(board);

    return 0;
}
