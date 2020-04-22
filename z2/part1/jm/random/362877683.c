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
uuid: 362877683
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 3, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 11 );


char* board370815186 = gamma_board(board);
assert( board370815186 != NULL );
assert( strcmp(board370815186, 
"43175..\n"
".6....4\n"
"8..67..\n") == 0);
free(board370815186);
board370815186 = NULL;
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_free_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
