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
uuid: 689238115
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 6, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
