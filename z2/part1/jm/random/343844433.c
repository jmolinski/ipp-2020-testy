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
uuid: 343844433
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 7, 8, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_free_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
