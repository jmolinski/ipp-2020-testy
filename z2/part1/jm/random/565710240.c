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
uuid: 565710240
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 4, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );


char* board523351697 = gamma_board(board);
assert( board523351697 != NULL );
assert( strcmp(board523351697, 
"49.5.\n"
".1651\n"
"623..\n"
"8.24.\n") == 0);
free(board523351697);
board523351697 = NULL;
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
