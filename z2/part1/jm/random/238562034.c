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
uuid: 238562034
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 2, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );


char* board140688983 = gamma_board(board);
assert( board140688983 != NULL );
assert( strcmp(board140688983, 
".1.....\n"
".......\n"
".......\n"
".......\n"
".......\n"
".1.....\n") == 0);
free(board140688983);
board140688983 = NULL;
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );


char* board908215333 = gamma_board(board);
assert( board908215333 != NULL );
assert( strcmp(board908215333, 
".11.2..\n"
"1.122..\n"
"221221.\n"
"12121.2\n"
"11.11..\n"
"1121.2.\n") == 0);
free(board908215333);
board908215333 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );


gamma_delete(board);

    return 0;
}
