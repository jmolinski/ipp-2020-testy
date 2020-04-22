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
uuid: 201201661
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(1, 3, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 0 );


char* board588584823 = gamma_board(board);
assert( board588584823 != NULL );
assert( strcmp(board588584823, 
".\n"
".\n"
".\n") == 0);
free(board588584823);
board588584823 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
