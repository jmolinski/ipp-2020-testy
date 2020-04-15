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
uuid: 198708548
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 1, 9, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );


char* board240384084 = gamma_board(board);
assert( board240384084 != NULL );
assert( strcmp(board240384084, 
"31.\n") == 0);
free(board240384084);
board240384084 = NULL;
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );


gamma_delete(board);

    return 0;
}
