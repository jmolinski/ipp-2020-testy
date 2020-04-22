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
uuid: 686545055
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 3, 6, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );


char* board667204078 = gamma_board(board);
assert( board667204078 != NULL );
assert( strcmp(board667204078, 
"..3...\n"
"4.2.5.\n"
"3.1.4.\n") == 0);
free(board667204078);
board667204078 = NULL;
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board728017253 = gamma_board(board);
assert( board728017253 != NULL );
assert( strcmp(board728017253, 
"..3...\n"
"4.2.5.\n"
"3.1.4.\n") == 0);
free(board728017253);
board728017253 = NULL;
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
