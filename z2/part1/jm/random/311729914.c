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
uuid: 311729914
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 4, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_golden_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );


char* board866515284 = gamma_board(board);
assert( board866515284 != NULL );
assert( strcmp(board866515284, 
"78.8213..1.\n"
"3.216....7.\n"
"78......4.1\n"
"632.786.4.6\n") == 0);
free(board866515284);
board866515284 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 3 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_golden_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_free_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
