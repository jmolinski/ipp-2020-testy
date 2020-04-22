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
uuid: 739945045
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 6, 3, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );


char* board773326232 = gamma_board(board);
assert( board773326232 != NULL );
assert( strcmp(board773326232, 
".....\n"
".....\n"
"..1..\n"
"...1.\n"
".....\n"
".....\n") == 0);
free(board773326232);
board773326232 = NULL;
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 6 );


char* board114863377 = gamma_board(board);
assert( board114863377 != NULL );
assert( strcmp(board114863377, 
"...3.\n"
"..1.3\n"
"..112\n"
"1.21.\n"
"11.3.\n"
"112..\n") == 0);
free(board114863377);
board114863377 = NULL;
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );


char* board492860299 = gamma_board(board);
assert( board492860299 != NULL );
assert( strcmp(board492860299, 
"...33\n"
".11.3\n"
"1.112\n"
"12213\n"
"11.33\n"
"11211\n") == 0);
free(board492860299);
board492860299 = NULL;
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );


gamma_delete(board);

    return 0;
}
