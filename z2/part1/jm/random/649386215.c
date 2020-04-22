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
uuid: 649386215
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 2, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );


char* board766774553 = gamma_board(board);
assert( board766774553 != NULL );
assert( strcmp(board766774553, 
"1213\n"
"..5.\n") == 0);
free(board766774553);
board766774553 = NULL;
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
