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
uuid: 607159236
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 5, 1, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board279337928 = gamma_board(board);
assert( board279337928 != NULL );
assert( strcmp(board279337928, 
".\n"
".\n"
"1\n"
"1\n"
".\n") == 0);
free(board279337928);
board279337928 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board695324386 = gamma_board(board);
assert( board695324386 != NULL );
assert( strcmp(board695324386, 
".\n"
".\n"
"1\n"
"1\n"
".\n") == 0);
free(board695324386);
board695324386 = NULL;
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
