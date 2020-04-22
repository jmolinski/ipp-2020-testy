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
uuid: 225841586
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 2, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board925956714 = gamma_board(board);
assert( board925956714 != NULL );
assert( strcmp(board925956714, 
".....\n"
"1....\n") == 0);
free(board925956714);
board925956714 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );


char* board748564709 = gamma_board(board);
assert( board748564709 != NULL );
assert( strcmp(board748564709, 
".4..6\n"
"3....\n") == 0);
free(board748564709);
board748564709 = NULL;
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );


gamma_delete(board);

    return 0;
}
