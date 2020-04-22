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
uuid: 323868561
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 6, 4, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );


gamma_delete(board);

    return 0;
}
