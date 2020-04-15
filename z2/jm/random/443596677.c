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
uuid: 443596677
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 2, 1, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );


char* board392501358 = gamma_board(board);
assert( board392501358 != NULL );
assert( strcmp(board392501358, 
".\n"
"1\n") == 0);
free(board392501358);
board392501358 = NULL;
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
