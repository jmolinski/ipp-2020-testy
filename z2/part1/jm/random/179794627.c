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
uuid: 179794627
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 2, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );


char* board734239174 = gamma_board(board);
assert( board734239174 != NULL );
assert( strcmp(board734239174, 
"31...\n"
".....\n") == 0);
free(board734239174);
board734239174 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );


gamma_delete(board);

    return 0;
}
