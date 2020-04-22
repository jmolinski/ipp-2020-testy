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
uuid: 160424957
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 3, 1, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );


char* board600369532 = gamma_board(board);
assert( board600369532 != NULL );
assert( strcmp(board600369532, 
"..1.1\n"
"..1..\n"
"11111\n") == 0);
free(board600369532);
board600369532 = NULL;
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
