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
uuid: 226499405
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 7, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 5, 0) == 0 );


gamma_delete(board);

    return 0;
}
