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
uuid: 533380812
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 1, 1, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );


char* board219789386 = gamma_board(board);
assert( board219789386 != NULL );
assert( strcmp(board219789386, 
"11\n") == 0);
free(board219789386);
board219789386 = NULL;


gamma_delete(board);

    return 0;
}
