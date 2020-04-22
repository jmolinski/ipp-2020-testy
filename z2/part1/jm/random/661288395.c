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
uuid: 661288395
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 1, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
