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
uuid: 921171368
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 3, 6, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board433397343 = gamma_board(board);
assert( board433397343 != NULL );
assert( strcmp(board433397343, 
"1.....\n"
"......\n"
"......\n") == 0);
free(board433397343);
board433397343 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board383669360 = gamma_board(board);
assert( board383669360 != NULL );
assert( strcmp(board383669360, 
"11.462\n"
".26..1\n"
"525..3\n") == 0);
free(board383669360);
board383669360 = NULL;
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
