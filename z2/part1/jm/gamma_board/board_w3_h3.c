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
uuid: 743483976
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(3, 3, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );


char* board491600691 = gamma_board(board);
assert( board491600691 != NULL );
assert( strcmp(board491600691, 
"...\n"
"..1\n"
"...\n") == 0);
free(board491600691);
board491600691 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );


char* board548839884 = gamma_board(board);
assert( board548839884 != NULL );
assert( strcmp(board548839884, 
"5..\n"
"..1\n"
"26.\n") == 0);
free(board548839884);
board548839884 = NULL;
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
