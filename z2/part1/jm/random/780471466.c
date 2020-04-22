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
uuid: 780471466
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 2, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );


char* board328088965 = gamma_board(board);
assert( board328088965 != NULL );
assert( strcmp(board328088965, 
"242.4\n"
"1.32.\n") == 0);
free(board328088965);
board328088965 = NULL;


gamma_delete(board);

    return 0;
}
