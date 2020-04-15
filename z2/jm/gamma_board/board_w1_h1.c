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
uuid: 846121440
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(1, 1, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 0 );


char* board891597875 = gamma_board(board);
assert( board891597875 != NULL );
assert( strcmp(board891597875, 
".\n") == 0);
free(board891597875);
board891597875 = NULL;


gamma_delete(board);

    return 0;
}
