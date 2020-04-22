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
uuid: 319391934
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 7, 8, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );


char* board954178187 = gamma_board(board);
assert( board954178187 != NULL );
assert( strcmp(board954178187, 
"3\n"
".\n"
"5\n"
"3\n"
"4\n"
".\n"
"5\n") == 0);
free(board954178187);
board954178187 = NULL;
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_free_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );


gamma_delete(board);

    return 0;
}
