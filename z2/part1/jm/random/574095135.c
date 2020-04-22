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
uuid: 574095135
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 1, 5, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );


char* board837064666 = gamma_board(board);
assert( board837064666 != NULL );
assert( strcmp(board837064666, 
"1\n") == 0);
free(board837064666);
board837064666 = NULL;


gamma_delete(board);

    return 0;
}
