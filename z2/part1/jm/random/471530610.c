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
uuid: 471530610
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 2, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 10 );


char* board647058297 = gamma_board(board);
assert( board647058297 != NULL );
assert( strcmp(board647058297, 
"...3.11\n"
".1.....\n") == 0);
free(board647058297);
board647058297 = NULL;
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );


char* board711200120 = gamma_board(board);
assert( board711200120 != NULL );
assert( strcmp(board711200120, 
"6563811\n"
"256.6.8\n") == 0);
free(board711200120);
board711200120 = NULL;
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
