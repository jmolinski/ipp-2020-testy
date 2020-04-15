#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_gamma_board
uuid: 434335337
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(2, 1, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 0 );


char* board740007408 = gamma_board(board);
assert( board740007408 != NULL );
assert( strcmp(board740007408, 
"..\n") == 0);
free(board740007408);
board740007408 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );


gamma_delete(board);

    return 0;
}
