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
uuid: 472905657
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 6, 3, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );


char* board242810289 = gamma_board(board);
assert( board242810289 != NULL );
assert( strcmp(board242810289, 
"....\n"
"....\n"
"2.1.\n"
"....\n"
"....\n"
"....\n") == 0);
free(board242810289);
board242810289 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board304262829 = gamma_board(board);
assert( board304262829 != NULL );
assert( strcmp(board304262829, 
"..33\n"
"...2\n"
"2.13\n"
".1..\n"
"2.3.\n"
"..31\n") == 0);
free(board304262829);
board304262829 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
