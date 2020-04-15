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
uuid: 326525369
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 5, 9, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_golden_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
