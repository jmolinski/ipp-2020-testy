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
uuid: 313105847
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 4, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );


char* board574474214 = gamma_board(board);
assert( board574474214 != NULL );
assert( strcmp(board574474214, 
"5..66......\n"
".6.......1.\n"
".2.......1.\n"
".35........\n") == 0);
free(board574474214);
board574474214 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board222421500 = gamma_board(board);
assert( board222421500 != NULL );
assert( strcmp(board222421500, 
"5216624415.\n"
".613.145114\n"
"12...1..612\n"
"1353463..12\n") == 0);
free(board222421500);
board222421500 = NULL;
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_free_fields(board, 4) == 10 );


gamma_delete(board);

    return 0;
}
