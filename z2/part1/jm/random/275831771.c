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
uuid: 275831771
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 1, 1, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );


gamma_delete(board);

    return 0;
}
