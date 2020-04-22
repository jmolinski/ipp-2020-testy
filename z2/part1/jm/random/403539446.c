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
uuid: 403539446
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 2, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );


char* board233631312 = gamma_board(board);
assert( board233631312 != NULL );
assert( strcmp(board233631312, 
"3\n"
"1\n") == 0);
free(board233631312);
board233631312 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
