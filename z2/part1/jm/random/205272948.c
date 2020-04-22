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
uuid: 205272948
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 3, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board430546041 = gamma_board(board);
assert( board430546041 != NULL );
assert( strcmp(board430546041, 
"1\n"
"4\n"
"3\n") == 0);
free(board430546041);
board430546041 = NULL;
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
