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
uuid: 139891157
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 1, 8, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
