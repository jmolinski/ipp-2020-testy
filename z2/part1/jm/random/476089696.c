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
uuid: 476089696
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 1, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );


char* board640416971 = gamma_board(board);
assert( board640416971 != NULL );
assert( strcmp(board640416971, 
"..3..3\n") == 0);
free(board640416971);
board640416971 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );


char* board570243805 = gamma_board(board);
assert( board570243805 != NULL );
assert( strcmp(board570243805, 
"..3.43\n") == 0);
free(board570243805);
board570243805 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_free_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_free_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}
