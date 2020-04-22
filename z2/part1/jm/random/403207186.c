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
uuid: 403207186
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 6, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );


gamma_delete(board);

    return 0;
}
