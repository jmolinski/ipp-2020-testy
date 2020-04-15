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
uuid: 829247047
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 5, 4, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );


char* board637732832 = gamma_board(board);
assert( board637732832 != NULL );
assert( strcmp(board637732832, 
".\n"
".\n"
".\n"
".\n"
"1\n") == 0);
free(board637732832);
board637732832 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board197719280 = gamma_board(board);
assert( board197719280 != NULL );
assert( strcmp(board197719280, 
"3\n"
".\n"
".\n"
".\n"
"1\n") == 0);
free(board197719280);
board197719280 = NULL;
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );


gamma_delete(board);

    return 0;
}
