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
uuid: 492259422
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 4, 6, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board367203533 = gamma_board(board);
assert( board367203533 != NULL );
assert( strcmp(board367203533, 
".1\n"
"45\n"
"23\n"
".6\n") == 0);
free(board367203533);
board367203533 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );


gamma_delete(board);

    return 0;
}
