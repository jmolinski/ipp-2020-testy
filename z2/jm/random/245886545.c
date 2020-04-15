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
uuid: 245886545
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 7, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 2 );


char* board792894602 = gamma_board(board);
assert( board792894602 != NULL );
assert( strcmp(board792894602, 
".\n"
"5\n"
"3\n"
"1\n"
".\n"
"2\n"
"2\n") == 0);
free(board792894602);
board792894602 = NULL;
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
