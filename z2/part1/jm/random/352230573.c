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
uuid: 352230573
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 3, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_free_fields(board, 1) == 10 );


char* board815900284 = gamma_board(board);
assert( board815900284 != NULL );
assert( strcmp(board815900284, 
"....\n"
"....\n"
"..11\n") == 0);
free(board815900284);
board815900284 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );


char* board959511397 = gamma_board(board);
assert( board959511397 != NULL );
assert( strcmp(board959511397, 
".54.\n"
"1263\n"
"5411\n") == 0);
free(board959511397);
board959511397 = NULL;
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );


char* board430869947 = gamma_board(board);
assert( board430869947 != NULL );
assert( strcmp(board430869947, 
".54.\n"
"1263\n"
"5411\n") == 0);
free(board430869947);
board430869947 = NULL;


gamma_delete(board);

    return 0;
}
