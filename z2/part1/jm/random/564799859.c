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
uuid: 564799859
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 1, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );


gamma_delete(board);

    return 0;
}
