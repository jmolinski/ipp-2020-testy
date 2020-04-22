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
uuid: 883865060
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 4, 2, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );


char* board545864709 = gamma_board(board);
assert( board545864709 != NULL );
assert( strcmp(board545864709, 
"1\n"
".\n"
"2\n"
"1\n") == 0);
free(board545864709);
board545864709 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
