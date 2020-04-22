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
uuid: 185004608
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 4, 1, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );


gamma_delete(board);

    return 0;
}
