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
uuid: 679543084
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 4, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );


char* board853679011 = gamma_board(board);
assert( board853679011 != NULL );
assert( strcmp(board853679011, 
"55.32\n"
"43.94\n"
"72.6.\n"
"69.17\n") == 0);
free(board853679011);
board853679011 = NULL;
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
