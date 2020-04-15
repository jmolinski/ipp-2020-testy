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
uuid: 220162171
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(3, 2, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 0 );


char* board142763047 = gamma_board(board);
assert( board142763047 != NULL );
assert( strcmp(board142763047, 
"...\n"
"...\n") == 0);
free(board142763047);
board142763047 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );


char* board454525116 = gamma_board(board);
assert( board454525116 != NULL );
assert( strcmp(board454525116, 
".2.\n"
"...\n") == 0);
free(board454525116);
board454525116 = NULL;


gamma_delete(board);

    return 0;
}
