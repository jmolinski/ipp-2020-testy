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
uuid: 644575176
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 6, 2, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );


char* board494033972 = gamma_board(board);
assert( board494033972 != NULL );
assert( strcmp(board494033972, 
"2\n"
".\n"
".\n"
".\n"
".\n"
".\n") == 0);
free(board494033972);
board494033972 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}
