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
uuid: 638041963
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 5, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board109160146 = gamma_board(board);
assert( board109160146 != NULL );
assert( strcmp(board109160146, 
".1\n"
".2\n"
"..\n"
"..\n"
".3\n") == 0);
free(board109160146);
board109160146 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );


char* board852416681 = gamma_board(board);
assert( board852416681 != NULL );
assert( strcmp(board852416681, 
"51\n"
".2\n"
"..\n"
".4\n"
".3\n") == 0);
free(board852416681);
board852416681 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
