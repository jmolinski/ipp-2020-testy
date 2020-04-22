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
uuid: 861166535
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 3, 2, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );


char* board233952667 = gamma_board(board);
assert( board233952667 != NULL );
assert( strcmp(board233952667, 
"2112.\n"
"112..\n"
"211.1\n") == 0);
free(board233952667);
board233952667 = NULL;
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );


gamma_delete(board);

    return 0;
}
