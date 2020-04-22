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
uuid: 867516756
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 7, 6, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_free_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );


char* board336724190 = gamma_board(board);
assert( board336724190 != NULL );
assert( strcmp(board336724190, 
"....\n"
"....\n"
"....\n"
"..4.\n"
"134.\n"
"655.\n"
"62..\n") == 0);
free(board336724190);
board336724190 = NULL;
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );


char* board772532851 = gamma_board(board);
assert( board772532851 != NULL );
assert( strcmp(board772532851, 
"....\n"
"....\n"
"....\n"
"1.4.\n"
"134.\n"
"655.\n"
"62..\n") == 0);
free(board772532851);
board772532851 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 1 );


char* board868234941 = gamma_board(board);
assert( board868234941 != NULL );
assert( strcmp(board868234941, 
"....\n"
"....\n"
"....\n"
"1.4.\n"
"134.\n"
"665.\n"
"62..\n") == 0);
free(board868234941);
board868234941 = NULL;
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
