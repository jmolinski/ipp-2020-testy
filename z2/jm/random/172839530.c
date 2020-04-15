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
uuid: 172839530
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 7, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );


char* board488964968 = gamma_board(board);
assert( board488964968 != NULL );
assert( strcmp(board488964968, 
"2\n"
"3\n"
"2\n"
".\n"
"1\n"
"3\n"
"1\n") == 0);
free(board488964968);
board488964968 = NULL;
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );


gamma_delete(board);

    return 0;
}
