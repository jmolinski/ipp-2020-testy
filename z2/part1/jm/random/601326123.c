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
uuid: 601326123
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 2, 5, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


char* board733194358 = gamma_board(board);
assert( board733194358 != NULL );
assert( strcmp(board733194358, 
"35..11\n"
".22..1\n") == 0);
free(board733194358);
board733194358 = NULL;
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );


gamma_delete(board);

    return 0;
}
