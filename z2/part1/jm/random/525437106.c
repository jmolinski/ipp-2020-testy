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
uuid: 525437106
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 5, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );


char* board812692400 = gamma_board(board);
assert( board812692400 != NULL );
assert( strcmp(board812692400, 
"....\n"
".33.\n"
"1.2.\n"
"....\n"
"..31\n") == 0);
free(board812692400);
board812692400 = NULL;
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );


gamma_delete(board);

    return 0;
}
