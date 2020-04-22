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
uuid: 190266287
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 3, 8, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_free_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );


gamma_delete(board);

    return 0;
}
