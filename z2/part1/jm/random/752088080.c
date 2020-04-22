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
uuid: 752088080
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 10, 6, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );


char* board182971790 = gamma_board(board);
assert( board182971790 != NULL );
assert( strcmp(board182971790, 
"....\n"
"4...\n"
"....\n"
"...1\n"
"....\n"
"2.2.\n"
".4..\n"
"....\n"
".6.1\n"
".531\n") == 0);
free(board182971790);
board182971790 = NULL;
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );


char* board331222794 = gamma_board(board);
assert( board331222794 != NULL );
assert( strcmp(board331222794, 
"3..6\n"
"4...\n"
".4..\n"
"...1\n"
"....\n"
"2423\n"
".44.\n"
".125\n"
"56.1\n"
".531\n") == 0);
free(board331222794);
board331222794 = NULL;
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_golden_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


gamma_delete(board);

    return 0;
}
