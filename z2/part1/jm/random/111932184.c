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
uuid: 111932184
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 1, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );


char* board111666041 = gamma_board(board);
assert( board111666041 != NULL );
assert( strcmp(board111666041, 
"22\n") == 0);
free(board111666041);
board111666041 = NULL;


gamma_delete(board);

    return 0;
}
