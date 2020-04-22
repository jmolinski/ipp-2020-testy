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
uuid: 940312051
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 2, 8, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board843144442 = gamma_board(board);
assert( board843144442 != NULL );
assert( strcmp(board843144442, 
"68...\n"
"2..13\n") == 0);
free(board843144442);
board843144442 = NULL;
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_free_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );


gamma_delete(board);

    return 0;
}
