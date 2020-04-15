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
uuid: 963019996
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(2, 2, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 0 );


char* board883134640 = gamma_board(board);
assert( board883134640 != NULL );
assert( strcmp(board883134640, 
"..\n"
"..\n") == 0);
free(board883134640);
board883134640 = NULL;
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
