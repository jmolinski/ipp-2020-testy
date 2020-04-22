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
uuid: 353263530
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(3, 1, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );


char* board994355203 = gamma_board(board);
assert( board994355203 != NULL );
assert( strcmp(board994355203, 
"1..\n") == 0);
free(board994355203);
board994355203 = NULL;
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
