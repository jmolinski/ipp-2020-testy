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
uuid: 243639948
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 1, 1, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board848972588 = gamma_board(board);
assert( board848972588 != NULL );
assert( strcmp(board848972588, 
"11111\n") == 0);
free(board848972588);
board848972588 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}
