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
uuid: 795446431
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 1, 5, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );


char* board856565209 = gamma_board(board);
assert( board856565209 != NULL );
assert( strcmp(board856565209, 
".1\n") == 0);
free(board856565209);
board856565209 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
