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
uuid: 322317576
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 5, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );


char* board778418831 = gamma_board(board);
assert( board778418831 != NULL );
assert( strcmp(board778418831, 
"2\n"
"1\n"
"7\n"
"5\n"
"7\n") == 0);
free(board778418831);
board778418831 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );


gamma_delete(board);

    return 0;
}
